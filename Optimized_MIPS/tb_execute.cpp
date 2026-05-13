#include "VExecute.h"
#include "verilated.h"
#include <iostream>
#include <iomanip>

vluint64_t sim_time = 0;

void tick(VExecute* top) {
    top->clk = 0;
    top->eval();
    sim_time++;

    top->clk = 1;
    top->eval();
    sim_time++;

    top->clk = 0;
    top->eval();
    sim_time++;
}

void print_state(VExecute* top, const char* name) {
    std::cout << name
              << " | ALU_Data=0x" << std::hex << std::setw(8) << std::setfill('0') << top->ALU_Data
              << " | WriteReg=" << std::dec << (int)top->WriteReg
              << " | Write_Data=0x" << std::hex << std::setw(8) << std::setfill('0') << top->Write_Data
              << " | PC_from_ExMem=0x" << std::hex << std::setw(8) << std::setfill('0') << top->PC_from_ExMem
              << " | Zero=" << std::dec << (int)top->Zero
              << " | WB=" << (int)top->WB
              << " | MM=" << (int)top->MM
              << std::setfill(' ')
              << std::endl;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    VExecute* top = new VExecute;

    top->clk = 0;
    top->rst = 0;

    tick(top);

    top->rst = 1;

    std::cout << "Testing Execute stage...\n\n";

    // ------------------------------------------------------------
    // Test 1: addi $1, $0, 5
    // iEX = 1100
    // iEX[3] = 1 -> ALU input 2 = SignExt
    // iEX[2:1] = 10 -> R-type/funct decode, but this is questionable for addi
    // ------------------------------------------------------------
    top->iNPC = 0x00000004;
    top->iWB = 0b11;
    top->iMM = 0b000;
    top->iEX = 0b1000;   // better for addi: ALUSrc=1, ALU_OP=00, RegDst=0
    top->Instr_2016 = 1;
    top->Instr_1511 = 0;
    top->NPC = 0x00000004;
    top->SignExt = 5;
    top->Read_Data_1 = 0;
    top->Read_Data_2 = 0;

    tick(top);
    print_state(top, "addi $1,$0,5");

    // ------------------------------------------------------------
    // Test 2: R-type add $3, $1, $2
    // funct = 100000
    // Read_Data_1 = 10, Read_Data_2 = 20
    // Expected ALU_Data = 30
    // ------------------------------------------------------------
    top->iWB = 0b10;
    top->iMM = 0b000;
    top->iEX = 0b0101;   // RegDst=1, ALUSrc=0, ALU_OP=10
    top->Instr_2016 = 2;
    top->Instr_1511 = 3;
    top->NPC = 0x00000008;
    top->SignExt = 0x00000020; // funct add
    top->Read_Data_1 = 10;
    top->Read_Data_2 = 20;

    tick(top);
    print_state(top, "add $3,$1,$2");

    // ------------------------------------------------------------
    // Test 3: R-type sub $3, $1, $2
    // funct = 100010
    // Read_Data_1 = 20, Read_Data_2 = 10
    // Expected ALU_Data = 10
    // ------------------------------------------------------------
    top->iWB = 0b10;
    top->iMM = 0b000;
    top->iEX = 0b0101;
    top->Instr_2016 = 2;
    top->Instr_1511 = 3;
    top->NPC = 0x0000000c;
    top->SignExt = 0x00000022; // funct sub
    top->Read_Data_1 = 20;
    top->Read_Data_2 = 10;

    tick(top);
    print_state(top, "sub $3,$1,$2");

    // ------------------------------------------------------------
    // Test 4: beq-style compare
    // ALU_OP=01 means subtract
    // 7 - 7 = 0, so Zero should be 1
    // ------------------------------------------------------------
    top->iWB = 0b00;
    top->iMM = 0b001;
    top->iEX = 0b0010;   // RegDst=0, ALUSrc=0, ALU_OP=01
    top->Instr_2016 = 0;
    top->Instr_1511 = 0;
    top->NPC = 0x00000010;
    top->SignExt = 4;
    top->Read_Data_1 = 7;
    top->Read_Data_2 = 7;

    tick(top);
    print_state(top, "beq compare 7==7");

    top->final();
    delete top;

    return 0;
}