// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(dbg_ALU1_WAIT,0,0);
        VL_OUT8(dbg_ALU2_WAIT,0,0);
        VL_OUT8(dbg_WriteReg,4,0);
        VL_OUT8(dbg_RegWrite,0,0);
        VL_OUT8(dbg_PCSrc,0,0);
        VL_OUT8(dbg_WAIT,0,0);
        VL_OUT8(dbg_rs,4,0);
        VL_OUT8(dbg_rt,4,0);
        VL_OUT8(dbg_rd,4,0);
        CData/*1:0*/ CPU__DOT__id_WB;
        CData/*2:0*/ CPU__DOT__id_MM;
        CData/*3:0*/ CPU__DOT__id_EX;
        CData/*4:0*/ CPU__DOT__id_Instr_2016;
        CData/*4:0*/ CPU__DOT__id_Instr_1511;
        CData/*1:0*/ CPU__DOT__ex_WB;
        CData/*2:0*/ CPU__DOT__ex_MM;
        CData/*4:0*/ CPU__DOT__ex_WriteReg;
        CData/*0:0*/ CPU__DOT__wb_RegWrite;
        CData/*4:0*/ CPU__DOT__wb_WriteReg;
        CData/*0:0*/ CPU__DOT__decode_stage__DOT____Vcellinp__RM__RegWrite;
        CData/*0:0*/ CPU__DOT__decode_stage__DOT__RM__DOT____VdfgTmp_h988a1f39__0;
        CData/*0:0*/ CPU__DOT__execute_stage__DOT__WAIT1;
        CData/*0:0*/ CPU__DOT__execute_stage__DOT__mul_done1;
        CData/*0:0*/ CPU__DOT__execute_stage__DOT__WAIT2;
        CData/*0:0*/ CPU__DOT__execute_stage__DOT__mul_done2;
        CData/*0:0*/ CPU__DOT__execute_stage__DOT__use_alu2;
        CData/*1:0*/ CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__ALU_OP;
        CData/*5:0*/ CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__SignExt;
        CData/*1:0*/ CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__ALU_OP;
        CData/*5:0*/ CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__SignExt;
        CData/*1:0*/ CPU__DOT__execute_stage__DOT__ALU1__DOT__mul_count;
        CData/*1:0*/ CPU__DOT__execute_stage__DOT__ALU2__DOT__mul_count;
        CData/*0:0*/ CPU__DOT__memory_writeback_stage__DOT__zero_reg;
        CData/*0:0*/ CPU__DOT__memory_writeback_stage__DOT__branch_reg;
        CData/*4:0*/ __Vdlyvdim0__CPU__DOT__decode_stage__DOT__RM__DOT__regs__v0;
        CData/*0:0*/ __Vdlyvset__CPU__DOT__decode_stage__DOT__RM__DOT__regs__v0;
        CData/*0:0*/ __Vdlyvset__CPU__DOT__decode_stage__DOT__RM__DOT__regs__v1;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*0:0*/ __VactContinue;
        SData/*8:0*/ CPU__DOT__decode_stage__DOT__Controlled_O;
        VL_OUT(dbg_fetch_NPC,31,0);
        VL_OUT(dbg_instruction,31,0);
        VL_OUT(dbg_RD1,31,0);
        VL_OUT(dbg_RD2,31,0);
        VL_OUT(dbg_signext,31,0);
        VL_OUT(dbg_ALU_Data,31,0);
        VL_OUT(dbg_ALU1_Out,31,0);
        VL_OUT(dbg_ALU2_Out,31,0);
        VL_OUT(dbg_Mem_Read_Data,31,0);
        VL_OUT(dbg_WB_Data,31,0);
        IData/*31:0*/ CPU__DOT__fetch_NPC;
        IData/*31:0*/ CPU__DOT__fetch_Instruction;
        IData/*31:0*/ CPU__DOT__id_NPC;
        IData/*31:0*/ CPU__DOT__id_SignExt;
        IData/*31:0*/ CPU__DOT__id_Read_Data_1;
        IData/*31:0*/ CPU__DOT__id_Read_Data_2;
        IData/*31:0*/ CPU__DOT__ex_ALU_Data;
        IData/*31:0*/ CPU__DOT__ex_PC_from_ExMem;
        IData/*31:0*/ CPU__DOT__ex_Write_Data;
        IData/*31:0*/ CPU__DOT__wb_Write_Data_To_Reg;
    };
    struct {
        IData/*31:0*/ CPU__DOT__wb_Read_Data;
        IData/*31:0*/ CPU__DOT__fetch_stage__DOT__Mux_Out;
        IData/*31:0*/ CPU__DOT__fetch_stage__DOT__Memory_Out;
        IData/*31:0*/ CPU__DOT__fetch_stage__DOT__PC_Out;
        IData/*31:0*/ CPU__DOT__execute_stage__DOT__ALUSrc_Mux;
        IData/*31:0*/ CPU__DOT__execute_stage__DOT__ALU1__DOT__mul_result;
        IData/*31:0*/ CPU__DOT__execute_stage__DOT__ALU2__DOT__mul_result;
        IData/*31:0*/ CPU__DOT__memory_writeback_stage__DOT__DM_Read_Data;
        IData/*31:0*/ __Vdlyvval__CPU__DOT__decode_stage__DOT__RM__DOT__regs__v0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 256> CPU__DOT__fetch_stage__DOT__IM__DOT__Instruction_Memory;
        VlUnpacked<IData/*31:0*/, 32> CPU__DOT__decode_stage__DOT__RM__DOT__regs;
        VlUnpacked<IData/*31:0*/, 32> CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU___024root(VCPU__Syms* symsp, const char* v__name);
    ~VCPU___024root();
    VL_UNCOPYABLE(VCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
