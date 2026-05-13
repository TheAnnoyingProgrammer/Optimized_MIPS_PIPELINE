#include "VCPU.h"
#include "VCPU__Syms.h"
#include "verilated.h"

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

static const int REG_LO    = 1;
static const int REG_HI    = 30;
static const int INSTR_COL = 28;
static const int MAX_CYCLES = 1000;

vluint64_t sim_time = 0;

void tick(VCPU* top) {
    top->clk = 0; top->eval(); sim_time++;
    top->clk = 1; top->eval(); sim_time++;
    top->clk = 0; top->eval(); sim_time++;
}

std::string zpad(uint32_t v, int w) {
    if (v == 0) return std::string(w, ' ');
    std::ostringstream ss;
    ss << std::setw(w) << std::setfill('0') << v;
    return ss.str();
}

std::string hex32(uint32_t v) {
    std::ostringstream ss;
    ss << "0x" << std::hex << std::setw(8) << std::setfill('0') << v;
    return ss.str();
}

std::string fw(const std::string& s, int w) {
    if ((int)s.size() >= w) return s.substr(0, w);
    return s + std::string(w - s.size(), ' ');
}

std::string decode(uint32_t instr) {
    uint32_t op    = (instr >> 26) & 0x3F;
    uint32_t rs    = (instr >> 21) & 0x1F;
    uint32_t rt    = (instr >> 16) & 0x1F;
    uint32_t rd    = (instr >> 11) & 0x1F;
    uint32_t funct =  instr        & 0x3F;
    int16_t  imm   =  instr        & 0xFFFF;
    std::ostringstream ss;
    switch (op) {
        case 0x08: ss<<"addi r"<<rt<<", r"<<rs<<", "<<imm; break;
        case 0x00:
            if (!instr) { ss<<"nop"; break; }
            switch (funct) {
                case 0x20: ss<<"add r"<<rd<<", r"<<rs<<", r"<<rt; break;
                case 0x22: ss<<"sub r"<<rd<<", r"<<rs<<", r"<<rt; break;
                case 0x18: ss<<"mul r"<<rd<<", r"<<rs<<", r"<<rt; break;
                case 0x24: ss<<"and r"<<rd<<", r"<<rs<<", r"<<rt; break;
                case 0x25: ss<<"or r" <<rd<<", r"<<rs<<", r"<<rt; break;
                case 0x2A: ss<<"slt r"<<rd<<", r"<<rs<<", r"<<rt; break;
                case 0x00: ss<<"sll r"<<rd<<", r"<<rt<<", "<<((instr>>6)&0x1F); break;
                case 0x02: ss<<"srl r"<<rd<<", r"<<rt<<", "<<((instr>>6)&0x1F); break;
                case 0x08: ss<<"jr r"<<rs; break;
                default:   ss<<"r-type f=0x"<<std::hex<<funct; break;
            } break;
        case 0x23: ss<<"lw r" <<rt<<", "<<imm<<"(r"<<rs<<")"; break;
        case 0x2B: ss<<"sw r" <<rt<<", "<<imm<<"(r"<<rs<<")"; break;
        case 0x04: ss<<"beq r"<<rs<<", r"<<rt<<", "<<imm;     break;
        default:   ss<<"unknown"; break;
    }
    return ss.str();
}

const std::string HSEP(150, '=');
const std::string SEP(150, '-');

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    VCPU* top = new VCPU;

    top->clk = 0; top->rst = 0;
    tick(top); tick(top);
    top->rst = 1;

    auto& regs = top->rootp->CPU__DOT__decode_stage__DOT__RM__DOT__regs;

    int num_regs = REG_HI - REG_LO + 1;
    int per_row  = (num_regs + 2) / 3;

    std::cout << HSEP << "\n";
    std::cout << "        | " << fw("Program Counter", INSTR_COL) << " | Rs | RD1 |";
    for (int col = 0; col < per_row; col++) { int i = REG_LO + col*3 + 0; if (i <= REG_HI) std::cout << " R" << zpad(i,2); }
    std::cout << " |\n";
    std::cout << "    CLK | " << fw("HexInstr", INSTR_COL) << " | Rt | RD2 |";
    for (int col = 0; col < per_row; col++) { int i = REG_LO + col*3 + 1; if (i <= REG_HI) std::cout << " R" << zpad(i,2); }
    std::cout << " | WAIT\n";
    std::cout << "        | " << fw("Assembly", INSTR_COL) << " | Rd | ALU |";
    for (int col = 0; col < per_row; col++) { int i = REG_LO + col*3 + 2; if (i <= REG_HI) std::cout << " R" << zpad(i,2); }
    std::cout << " |\n";
    std::cout << HSEP << "\n";

    auto reg_row = [&](int row_idx) -> std::string {
        std::ostringstream ss;
        for (int col = 0; col < per_row; col++) {
            int i = REG_LO + col*3 + row_idx;
            if (i <= REG_HI) ss << " " << zpad(regs[i], 3);
        }
        return ss.str();
    };

    uint32_t prev_npc   = 0xFFFFFFFF;
    uint32_t prev_instr = 0xFFFFFFFF;

    for (int cycle = 0; cycle < MAX_CYCLES; cycle++) {
        tick(top);

        uint32_t cur_npc   = top->dbg_fetch_NPC;
        uint32_t cur_instr = top->dbg_instruction;

        if (cur_npc > 36 && !top->dbg_WAIT) break;

        bool changed = (cur_npc != prev_npc) || (cur_instr != prev_instr);
        std::string npc_s    = changed ? fw(hex32(cur_npc),   INSTR_COL) : fw("", INSTR_COL);
        std::string hexinstr = changed ? fw(hex32(cur_instr),  INSTR_COL) : fw("", INSTR_COL);
        std::string assembly = changed ? fw(decode(cur_instr), INSTR_COL) : fw("", INSTR_COL);

        prev_npc   = cur_npc;
        prev_instr = cur_instr;

        std::cout << "        | " << npc_s    << " | " << zpad(top->dbg_rs,2) << " | " << zpad(top->dbg_RD1,3) << " |" << reg_row(0) << " |\n";
        std::cout << " " << std::setw(6) << std::setfill(' ') << cycle << " | " << hexinstr << " | " << zpad(top->dbg_rt,2) << " | " << zpad(top->dbg_RD2,3) << " |" << reg_row(1) << " | " << (int)top->dbg_WAIT << "\n";
        std::cout << "        | " << assembly << " | " << zpad(top->dbg_rd,2) << " | " << zpad(top->dbg_ALU_Data,3) << " |" << reg_row(2) << " |\n";
        std::cout << SEP << "\n";
    }

    top->final();
    delete top;
    return 0;
}