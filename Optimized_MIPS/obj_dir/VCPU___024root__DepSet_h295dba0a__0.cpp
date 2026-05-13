// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU___024root.h"

void VCPU___024root___eval_act(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_act\n"); );
}

VL_INLINE_OPT void VCPU___024root___nba_sequent__TOP__0(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdlyvset__CPU__DOT__decode_stage__DOT__RM__DOT__regs__v0 = 0U;
    vlSelf->__Vdlyvset__CPU__DOT__decode_stage__DOT__RM__DOT__regs__v1 = 0U;
    if (vlSelf->rst) {
        if (((IData)(vlSelf->CPU__DOT__decode_stage__DOT____Vcellinp__RM__RegWrite) 
             & (0U != (IData)(vlSelf->CPU__DOT__wb_WriteReg)))) {
            vlSelf->__Vdlyvval__CPU__DOT__decode_stage__DOT__RM__DOT__regs__v0 
                = vlSelf->CPU__DOT__wb_Write_Data_To_Reg;
            vlSelf->__Vdlyvset__CPU__DOT__decode_stage__DOT__RM__DOT__regs__v0 = 1U;
            vlSelf->__Vdlyvdim0__CPU__DOT__decode_stage__DOT__RM__DOT__regs__v0 
                = vlSelf->CPU__DOT__wb_WriteReg;
        }
    } else {
        vlSelf->__Vdlyvset__CPU__DOT__decode_stage__DOT__RM__DOT__regs__v1 = 1U;
    }
}

VL_INLINE_OPT void VCPU___024root___nba_sequent__TOP__1(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*2:0*/ CPU__DOT__execute_stage__DOT__ALU1__DOT__funt;
    CPU__DOT__execute_stage__DOT__ALU1__DOT__funt = 0;
    IData/*31:0*/ CPU__DOT__execute_stage__DOT__ALU1__DOT__comb_result;
    CPU__DOT__execute_stage__DOT__ALU1__DOT__comb_result = 0;
    CData/*2:0*/ CPU__DOT__execute_stage__DOT__ALU2__DOT__funt;
    CPU__DOT__execute_stage__DOT__ALU2__DOT__funt = 0;
    IData/*31:0*/ CPU__DOT__execute_stage__DOT__ALU2__DOT__comb_result;
    CPU__DOT__execute_stage__DOT__ALU2__DOT__comb_result = 0;
    CData/*0:0*/ __Vdly__CPU__DOT__execute_stage__DOT__mul_done1;
    __Vdly__CPU__DOT__execute_stage__DOT__mul_done1 = 0;
    CData/*0:0*/ __Vdly__CPU__DOT__execute_stage__DOT__WAIT1;
    __Vdly__CPU__DOT__execute_stage__DOT__WAIT1 = 0;
    CData/*1:0*/ __Vdly__CPU__DOT__execute_stage__DOT__ALU1__DOT__mul_count;
    __Vdly__CPU__DOT__execute_stage__DOT__ALU1__DOT__mul_count = 0;
    CData/*0:0*/ __Vdly__CPU__DOT__execute_stage__DOT__mul_done2;
    __Vdly__CPU__DOT__execute_stage__DOT__mul_done2 = 0;
    CData/*0:0*/ __Vdly__CPU__DOT__execute_stage__DOT__WAIT2;
    __Vdly__CPU__DOT__execute_stage__DOT__WAIT2 = 0;
    CData/*1:0*/ __Vdly__CPU__DOT__execute_stage__DOT__ALU2__DOT__mul_count;
    __Vdly__CPU__DOT__execute_stage__DOT__ALU2__DOT__mul_count = 0;
    CData/*4:0*/ __Vdlyvdim0__CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory__v0;
    __Vdlyvdim0__CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory__v0;
    __Vdlyvval__CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory__v0;
    __Vdlyvset__CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory__v1;
    __Vdlyvset__CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory__v1 = 0;
    // Body
    __Vdly__CPU__DOT__execute_stage__DOT__ALU2__DOT__mul_count 
        = vlSelf->CPU__DOT__execute_stage__DOT__ALU2__DOT__mul_count;
    __Vdly__CPU__DOT__execute_stage__DOT__ALU1__DOT__mul_count 
        = vlSelf->CPU__DOT__execute_stage__DOT__ALU1__DOT__mul_count;
    __Vdly__CPU__DOT__execute_stage__DOT__mul_done2 
        = vlSelf->CPU__DOT__execute_stage__DOT__mul_done2;
    __Vdly__CPU__DOT__execute_stage__DOT__mul_done1 
        = vlSelf->CPU__DOT__execute_stage__DOT__mul_done1;
    __Vdly__CPU__DOT__execute_stage__DOT__WAIT2 = vlSelf->CPU__DOT__execute_stage__DOT__WAIT2;
    __Vdly__CPU__DOT__execute_stage__DOT__WAIT1 = vlSelf->CPU__DOT__execute_stage__DOT__WAIT1;
    __Vdlyvset__CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory__v0 = 0U;
    __Vdlyvset__CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory__v1 = 0U;
    vlSelf->CPU__DOT__wb_RegWrite = ((IData)(vlSelf->rst) 
                                     && ((1U & (~ (IData)(vlSelf->dbg_WAIT))) 
                                         && (1U & ((IData)(vlSelf->CPU__DOT__ex_WB) 
                                                   >> 1U))));
    if (vlSelf->rst) {
        if ((2U & (IData)(vlSelf->CPU__DOT__ex_MM))) {
            __Vdlyvval__CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory__v0 
                = vlSelf->CPU__DOT__ex_Write_Data;
            __Vdlyvset__CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory__v0 = 1U;
            __Vdlyvdim0__CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory__v0 
                = (0x1fU & (vlSelf->CPU__DOT__ex_ALU_Data 
                            >> 2U));
        }
        __Vdly__CPU__DOT__execute_stage__DOT__mul_done2 = 0U;
        if (((((2U == (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__ALU_OP)) 
               & (0x18U == (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__SignExt))) 
              & (~ (IData)(vlSelf->CPU__DOT__execute_stage__DOT__WAIT2))) 
             & (~ (IData)(vlSelf->CPU__DOT__execute_stage__DOT__mul_done2)))) {
            vlSelf->CPU__DOT__execute_stage__DOT__ALU2__DOT__mul_result 
                = (vlSelf->CPU__DOT__id_Read_Data_1 
                   * vlSelf->CPU__DOT__execute_stage__DOT__ALUSrc_Mux);
            __Vdly__CPU__DOT__execute_stage__DOT__WAIT2 = 1U;
            __Vdly__CPU__DOT__execute_stage__DOT__ALU2__DOT__mul_count = 1U;
        } else if (((IData)(vlSelf->CPU__DOT__execute_stage__DOT__WAIT2) 
                    & (1U == (IData)(vlSelf->CPU__DOT__execute_stage__DOT__ALU2__DOT__mul_count)))) {
            __Vdly__CPU__DOT__execute_stage__DOT__ALU2__DOT__mul_count = 2U;
        } else if (((IData)(vlSelf->CPU__DOT__execute_stage__DOT__WAIT2) 
                    & (2U == (IData)(vlSelf->CPU__DOT__execute_stage__DOT__ALU2__DOT__mul_count)))) {
            __Vdly__CPU__DOT__execute_stage__DOT__ALU2__DOT__mul_count = 3U;
        } else if (((IData)(vlSelf->CPU__DOT__execute_stage__DOT__WAIT2) 
                    & (3U == (IData)(vlSelf->CPU__DOT__execute_stage__DOT__ALU2__DOT__mul_count)))) {
            __Vdly__CPU__DOT__execute_stage__DOT__WAIT2 = 0U;
            __Vdly__CPU__DOT__execute_stage__DOT__ALU2__DOT__mul_count = 0U;
            __Vdly__CPU__DOT__execute_stage__DOT__mul_done2 = 1U;
        }
        __Vdly__CPU__DOT__execute_stage__DOT__mul_done1 = 0U;
        if (((((2U == (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__ALU_OP)) 
               & (0x18U == (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__SignExt))) 
              & (~ (IData)(vlSelf->CPU__DOT__execute_stage__DOT__WAIT1))) 
             & (~ (IData)(vlSelf->CPU__DOT__execute_stage__DOT__mul_done1)))) {
            vlSelf->CPU__DOT__execute_stage__DOT__ALU1__DOT__mul_result 
                = (vlSelf->CPU__DOT__id_Read_Data_1 
                   * vlSelf->CPU__DOT__execute_stage__DOT__ALUSrc_Mux);
            __Vdly__CPU__DOT__execute_stage__DOT__WAIT1 = 1U;
            __Vdly__CPU__DOT__execute_stage__DOT__ALU1__DOT__mul_count = 1U;
        } else if (((IData)(vlSelf->CPU__DOT__execute_stage__DOT__WAIT1) 
                    & (1U == (IData)(vlSelf->CPU__DOT__execute_stage__DOT__ALU1__DOT__mul_count)))) {
            __Vdly__CPU__DOT__execute_stage__DOT__ALU1__DOT__mul_count = 2U;
        } else if (((IData)(vlSelf->CPU__DOT__execute_stage__DOT__WAIT1) 
                    & (2U == (IData)(vlSelf->CPU__DOT__execute_stage__DOT__ALU1__DOT__mul_count)))) {
            __Vdly__CPU__DOT__execute_stage__DOT__ALU1__DOT__mul_count = 3U;
        } else if (((IData)(vlSelf->CPU__DOT__execute_stage__DOT__WAIT1) 
                    & (3U == (IData)(vlSelf->CPU__DOT__execute_stage__DOT__ALU1__DOT__mul_count)))) {
            __Vdly__CPU__DOT__execute_stage__DOT__WAIT1 = 0U;
            __Vdly__CPU__DOT__execute_stage__DOT__ALU1__DOT__mul_count = 0U;
            __Vdly__CPU__DOT__execute_stage__DOT__mul_done1 = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->dbg_WAIT)))) {
            vlSelf->CPU__DOT__memory_writeback_stage__DOT__zero_reg 
                = ((IData)(vlSelf->CPU__DOT__execute_stage__DOT__use_alu2)
                    ? (0U == vlSelf->dbg_ALU2_Out) : 
                   (0U == vlSelf->dbg_ALU1_Out));
            vlSelf->CPU__DOT__memory_writeback_stage__DOT__branch_reg 
                = (1U & (IData)(vlSelf->CPU__DOT__ex_MM));
            vlSelf->CPU__DOT__wb_Read_Data = vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM_Read_Data;
            vlSelf->CPU__DOT__ex_PC_from_ExMem = (vlSelf->CPU__DOT__id_NPC 
                                                  + vlSelf->CPU__DOT__id_SignExt);
            vlSelf->CPU__DOT__ex_Write_Data = vlSelf->CPU__DOT__id_Read_Data_2;
            vlSelf->CPU__DOT__id_NPC = vlSelf->CPU__DOT__fetch_NPC;
            vlSelf->CPU__DOT__id_SignExt = (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->CPU__DOT__fetch_Instruction 
                                                            >> 0xfU)))) 
                                             << 0x10U) 
                                            | (0xffffU 
                                               & vlSelf->CPU__DOT__fetch_Instruction));
            vlSelf->CPU__DOT__id_Read_Data_1 = (((IData)(vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT____VdfgTmp_h988a1f39__0) 
                                                 & ((IData)(vlSelf->dbg_rs) 
                                                    == (IData)(vlSelf->CPU__DOT__wb_WriteReg)))
                                                 ? vlSelf->CPU__DOT__wb_Write_Data_To_Reg
                                                 : 
                                                vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs
                                                [vlSelf->dbg_rs]);
            vlSelf->CPU__DOT__id_Read_Data_2 = (((IData)(vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT____VdfgTmp_h988a1f39__0) 
                                                 & ((IData)(vlSelf->dbg_rt) 
                                                    == (IData)(vlSelf->CPU__DOT__wb_WriteReg)))
                                                 ? vlSelf->CPU__DOT__wb_Write_Data_To_Reg
                                                 : 
                                                vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs
                                                [vlSelf->dbg_rt]);
            vlSelf->CPU__DOT__fetch_NPC = ((IData)(1U) 
                                           + vlSelf->CPU__DOT__fetch_stage__DOT__PC_Out);
            vlSelf->CPU__DOT__wb_Write_Data_To_Reg 
                = ((1U & (IData)(vlSelf->CPU__DOT__ex_WB))
                    ? vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM_Read_Data
                    : vlSelf->CPU__DOT__ex_ALU_Data);
        }
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM_Read_Data 
            = ((4U & (IData)(vlSelf->CPU__DOT__ex_MM))
                ? vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory
               [(0x1fU & (vlSelf->CPU__DOT__ex_ALU_Data 
                          >> 2U))] : 0U);
        if ((1U & (~ (IData)(vlSelf->dbg_WAIT)))) {
            vlSelf->CPU__DOT__wb_WriteReg = vlSelf->CPU__DOT__ex_WriteReg;
            vlSelf->CPU__DOT__ex_WB = vlSelf->CPU__DOT__id_WB;
            vlSelf->CPU__DOT__ex_WriteReg = ((1U & (IData)(vlSelf->CPU__DOT__id_EX))
                                              ? (IData)(vlSelf->CPU__DOT__id_Instr_1511)
                                              : (IData)(vlSelf->CPU__DOT__id_Instr_2016));
            vlSelf->CPU__DOT__id_WB = (3U & ((IData)(vlSelf->CPU__DOT__decode_stage__DOT__Controlled_O) 
                                             >> 7U));
            vlSelf->CPU__DOT__ex_ALU_Data = ((IData)(vlSelf->CPU__DOT__execute_stage__DOT__use_alu2)
                                              ? vlSelf->dbg_ALU2_Out
                                              : vlSelf->dbg_ALU1_Out);
            vlSelf->CPU__DOT__ex_MM = vlSelf->CPU__DOT__id_MM;
            vlSelf->CPU__DOT__id_EX = (0xfU & (IData)(vlSelf->CPU__DOT__decode_stage__DOT__Controlled_O));
            vlSelf->CPU__DOT__id_Instr_1511 = (0x1fU 
                                               & (vlSelf->CPU__DOT__fetch_Instruction 
                                                  >> 0xbU));
            vlSelf->CPU__DOT__id_Instr_2016 = (0x1fU 
                                               & (vlSelf->CPU__DOT__fetch_Instruction 
                                                  >> 0x10U));
            vlSelf->CPU__DOT__id_MM = (7U & ((IData)(vlSelf->CPU__DOT__decode_stage__DOT__Controlled_O) 
                                             >> 4U));
            vlSelf->CPU__DOT__fetch_Instruction = vlSelf->CPU__DOT__fetch_stage__DOT__Memory_Out;
        }
    } else {
        __Vdlyvset__CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory__v1 = 1U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__zero_reg = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__branch_reg = 0U;
        vlSelf->CPU__DOT__wb_Read_Data = 0U;
        vlSelf->CPU__DOT__ex_PC_from_ExMem = 0U;
        __Vdly__CPU__DOT__execute_stage__DOT__mul_done2 = 0U;
        __Vdly__CPU__DOT__execute_stage__DOT__WAIT2 = 0U;
        __Vdly__CPU__DOT__execute_stage__DOT__ALU2__DOT__mul_count = 0U;
        vlSelf->CPU__DOT__execute_stage__DOT__ALU2__DOT__mul_result = 0U;
        __Vdly__CPU__DOT__execute_stage__DOT__mul_done1 = 0U;
        __Vdly__CPU__DOT__execute_stage__DOT__WAIT1 = 0U;
        __Vdly__CPU__DOT__execute_stage__DOT__ALU1__DOT__mul_count = 0U;
        vlSelf->CPU__DOT__execute_stage__DOT__ALU1__DOT__mul_result = 0U;
        vlSelf->CPU__DOT__ex_Write_Data = 0U;
        vlSelf->CPU__DOT__id_NPC = 0U;
        vlSelf->CPU__DOT__id_SignExt = 0U;
        vlSelf->CPU__DOT__id_Read_Data_1 = 0U;
        vlSelf->CPU__DOT__id_Read_Data_2 = 0U;
        vlSelf->CPU__DOT__fetch_NPC = 0U;
        vlSelf->CPU__DOT__wb_Write_Data_To_Reg = 0U;
        vlSelf->CPU__DOT__wb_WriteReg = 0U;
        vlSelf->CPU__DOT__ex_WB = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM_Read_Data = 0U;
        vlSelf->CPU__DOT__ex_WriteReg = 0U;
        vlSelf->CPU__DOT__id_WB = 0U;
        vlSelf->CPU__DOT__ex_ALU_Data = 0U;
        vlSelf->CPU__DOT__ex_MM = 0U;
        vlSelf->CPU__DOT__id_EX = 0U;
        vlSelf->CPU__DOT__id_Instr_1511 = 0U;
        vlSelf->CPU__DOT__id_Instr_2016 = 0U;
        vlSelf->CPU__DOT__id_MM = 0U;
        vlSelf->CPU__DOT__fetch_Instruction = 0U;
    }
    vlSelf->CPU__DOT__execute_stage__DOT__ALU2__DOT__mul_count 
        = __Vdly__CPU__DOT__execute_stage__DOT__ALU2__DOT__mul_count;
    vlSelf->CPU__DOT__execute_stage__DOT__mul_done2 
        = __Vdly__CPU__DOT__execute_stage__DOT__mul_done2;
    vlSelf->CPU__DOT__execute_stage__DOT__WAIT2 = __Vdly__CPU__DOT__execute_stage__DOT__WAIT2;
    vlSelf->CPU__DOT__execute_stage__DOT__ALU1__DOT__mul_count 
        = __Vdly__CPU__DOT__execute_stage__DOT__ALU1__DOT__mul_count;
    vlSelf->CPU__DOT__execute_stage__DOT__mul_done1 
        = __Vdly__CPU__DOT__execute_stage__DOT__mul_done1;
    vlSelf->CPU__DOT__execute_stage__DOT__WAIT1 = __Vdly__CPU__DOT__execute_stage__DOT__WAIT1;
    vlSelf->dbg_PCSrc = ((IData)(vlSelf->CPU__DOT__memory_writeback_stage__DOT__branch_reg) 
                         & (IData)(vlSelf->CPU__DOT__memory_writeback_stage__DOT__zero_reg));
    vlSelf->dbg_RegWrite = vlSelf->CPU__DOT__wb_RegWrite;
    vlSelf->dbg_Mem_Read_Data = vlSelf->CPU__DOT__wb_Read_Data;
    vlSelf->dbg_ALU2_WAIT = vlSelf->CPU__DOT__execute_stage__DOT__WAIT2;
    vlSelf->dbg_ALU1_WAIT = vlSelf->CPU__DOT__execute_stage__DOT__WAIT1;
    vlSelf->dbg_signext = vlSelf->CPU__DOT__id_SignExt;
    vlSelf->dbg_RD1 = vlSelf->CPU__DOT__id_Read_Data_1;
    vlSelf->dbg_RD2 = vlSelf->CPU__DOT__id_Read_Data_2;
    vlSelf->dbg_fetch_NPC = vlSelf->CPU__DOT__fetch_NPC;
    vlSelf->dbg_WB_Data = vlSelf->CPU__DOT__wb_Write_Data_To_Reg;
    vlSelf->dbg_WriteReg = vlSelf->CPU__DOT__wb_WriteReg;
    if (__Vdlyvset__CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory__v0) {
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[__Vdlyvdim0__CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory__v0] 
            = __Vdlyvval__CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory__v0;
    }
    if (__Vdlyvset__CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory__v1) {
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[0U] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[1U] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[2U] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[3U] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[4U] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[5U] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[6U] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[7U] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[8U] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[9U] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[0xaU] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[0xbU] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[0xcU] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[0xdU] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[0xeU] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[0xfU] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[0x10U] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[0x11U] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[0x12U] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[0x13U] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[0x14U] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[0x15U] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[0x16U] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[0x17U] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[0x18U] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[0x19U] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[0x1aU] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[0x1bU] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[0x1cU] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[0x1dU] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[0x1eU] = 0U;
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[0x1fU] = 0U;
    }
    vlSelf->CPU__DOT__execute_stage__DOT__use_alu2 
        = ((~ (IData)(vlSelf->CPU__DOT__execute_stage__DOT__WAIT2)) 
           & (IData)(vlSelf->CPU__DOT__execute_stage__DOT__WAIT1));
    vlSelf->dbg_ALU_Data = vlSelf->CPU__DOT__ex_ALU_Data;
    if (vlSelf->CPU__DOT__execute_stage__DOT__use_alu2) {
        vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__SignExt = 0U;
        vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__SignExt 
            = (0x3fU & vlSelf->CPU__DOT__id_SignExt);
        vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__ALU_OP = 0U;
        vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__ALU_OP 
            = (3U & ((IData)(vlSelf->CPU__DOT__id_EX) 
                     >> 1U));
    } else {
        vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__SignExt 
            = (0x3fU & vlSelf->CPU__DOT__id_SignExt);
        vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__SignExt = 0U;
        vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__ALU_OP 
            = (3U & ((IData)(vlSelf->CPU__DOT__id_EX) 
                     >> 1U));
        vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__ALU_OP = 0U;
    }
    vlSelf->CPU__DOT__execute_stage__DOT__ALUSrc_Mux 
        = ((8U & (IData)(vlSelf->CPU__DOT__id_EX)) ? vlSelf->CPU__DOT__id_SignExt
            : vlSelf->CPU__DOT__id_Read_Data_2);
    CPU__DOT__execute_stage__DOT__ALU1__DOT__funt = 
        ((0U == (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__ALU_OP))
          ? 2U : ((1U == (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__ALU_OP))
                   ? 6U : ((2U == (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__ALU_OP))
                            ? ((0x20U & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__SignExt))
                                ? ((0x10U & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__SignExt))
                                    ? 2U : ((8U & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__SignExt))
                                             ? ((4U 
                                                 & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__SignExt))
                                                 ? 2U
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__SignExt))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__SignExt))
                                                   ? 2U
                                                   : 7U)
                                                  : 2U))
                                             : ((4U 
                                                 & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__SignExt))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__SignExt))
                                                  ? 2U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__SignExt))
                                                   ? 1U
                                                   : 0U))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__SignExt))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__SignExt))
                                                   ? 2U
                                                   : 6U)
                                                  : 2U))))
                                : ((0x10U & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__SignExt))
                                    ? ((8U & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__SignExt))
                                        ? ((4U & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__SignExt))
                                            ? 2U : 
                                           ((2U & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__SignExt))
                                             ? 2U : 
                                            ((1U & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__SignExt))
                                              ? 2U : 3U)))
                                        : 2U) : 2U))
                            : 2U)));
    CPU__DOT__execute_stage__DOT__ALU1__DOT__comb_result 
        = ((4U & (IData)(CPU__DOT__execute_stage__DOT__ALU1__DOT__funt))
            ? ((2U & (IData)(CPU__DOT__execute_stage__DOT__ALU1__DOT__funt))
                ? ((1U & (IData)(CPU__DOT__execute_stage__DOT__ALU1__DOT__funt))
                    ? ((vlSelf->CPU__DOT__id_Read_Data_1 
                        < vlSelf->CPU__DOT__execute_stage__DOT__ALUSrc_Mux)
                        ? 1U : 0U) : (vlSelf->CPU__DOT__id_Read_Data_1 
                                      - vlSelf->CPU__DOT__execute_stage__DOT__ALUSrc_Mux))
                : 0U) : ((2U & (IData)(CPU__DOT__execute_stage__DOT__ALU1__DOT__funt))
                          ? ((1U & (IData)(CPU__DOT__execute_stage__DOT__ALU1__DOT__funt))
                              ? (vlSelf->CPU__DOT__id_Read_Data_1 
                                 * vlSelf->CPU__DOT__execute_stage__DOT__ALUSrc_Mux)
                              : (vlSelf->CPU__DOT__id_Read_Data_1 
                                 + vlSelf->CPU__DOT__execute_stage__DOT__ALUSrc_Mux))
                          : ((1U & (IData)(CPU__DOT__execute_stage__DOT__ALU1__DOT__funt))
                              ? (vlSelf->CPU__DOT__id_Read_Data_1 
                                 | vlSelf->CPU__DOT__execute_stage__DOT__ALUSrc_Mux)
                              : (vlSelf->CPU__DOT__id_Read_Data_1 
                                 & vlSelf->CPU__DOT__execute_stage__DOT__ALUSrc_Mux))));
    CPU__DOT__execute_stage__DOT__ALU2__DOT__funt = 
        ((0U == (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__ALU_OP))
          ? 2U : ((1U == (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__ALU_OP))
                   ? 6U : ((2U == (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__ALU_OP))
                            ? ((0x20U & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__SignExt))
                                ? ((0x10U & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__SignExt))
                                    ? 2U : ((8U & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__SignExt))
                                             ? ((4U 
                                                 & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__SignExt))
                                                 ? 2U
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__SignExt))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__SignExt))
                                                   ? 2U
                                                   : 7U)
                                                  : 2U))
                                             : ((4U 
                                                 & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__SignExt))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__SignExt))
                                                  ? 2U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__SignExt))
                                                   ? 1U
                                                   : 0U))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__SignExt))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__SignExt))
                                                   ? 2U
                                                   : 6U)
                                                  : 2U))))
                                : ((0x10U & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__SignExt))
                                    ? ((8U & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__SignExt))
                                        ? ((4U & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__SignExt))
                                            ? 2U : 
                                           ((2U & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__SignExt))
                                             ? 2U : 
                                            ((1U & (IData)(vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__SignExt))
                                              ? 2U : 3U)))
                                        : 2U) : 2U))
                            : 2U)));
    CPU__DOT__execute_stage__DOT__ALU2__DOT__comb_result 
        = ((4U & (IData)(CPU__DOT__execute_stage__DOT__ALU2__DOT__funt))
            ? ((2U & (IData)(CPU__DOT__execute_stage__DOT__ALU2__DOT__funt))
                ? ((1U & (IData)(CPU__DOT__execute_stage__DOT__ALU2__DOT__funt))
                    ? ((vlSelf->CPU__DOT__id_Read_Data_1 
                        < vlSelf->CPU__DOT__execute_stage__DOT__ALUSrc_Mux)
                        ? 1U : 0U) : (vlSelf->CPU__DOT__id_Read_Data_1 
                                      - vlSelf->CPU__DOT__execute_stage__DOT__ALUSrc_Mux))
                : 0U) : ((2U & (IData)(CPU__DOT__execute_stage__DOT__ALU2__DOT__funt))
                          ? ((1U & (IData)(CPU__DOT__execute_stage__DOT__ALU2__DOT__funt))
                              ? (vlSelf->CPU__DOT__id_Read_Data_1 
                                 * vlSelf->CPU__DOT__execute_stage__DOT__ALUSrc_Mux)
                              : (vlSelf->CPU__DOT__id_Read_Data_1 
                                 + vlSelf->CPU__DOT__execute_stage__DOT__ALUSrc_Mux))
                          : ((1U & (IData)(CPU__DOT__execute_stage__DOT__ALU2__DOT__funt))
                              ? (vlSelf->CPU__DOT__id_Read_Data_1 
                                 | vlSelf->CPU__DOT__execute_stage__DOT__ALUSrc_Mux)
                              : (vlSelf->CPU__DOT__id_Read_Data_1 
                                 & vlSelf->CPU__DOT__execute_stage__DOT__ALUSrc_Mux))));
    vlSelf->dbg_ALU1_Out = ((IData)(vlSelf->CPU__DOT__execute_stage__DOT__mul_done1)
                             ? vlSelf->CPU__DOT__execute_stage__DOT__ALU1__DOT__mul_result
                             : CPU__DOT__execute_stage__DOT__ALU1__DOT__comb_result);
    vlSelf->dbg_ALU2_Out = ((IData)(vlSelf->CPU__DOT__execute_stage__DOT__mul_done2)
                             ? vlSelf->CPU__DOT__execute_stage__DOT__ALU2__DOT__mul_result
                             : CPU__DOT__execute_stage__DOT__ALU2__DOT__comb_result);
    vlSelf->CPU__DOT__decode_stage__DOT__Controlled_O 
        = ((vlSelf->CPU__DOT__fetch_Instruction >> 0x1fU)
            ? ((0x40000000U & vlSelf->CPU__DOT__fetch_Instruction)
                ? 0U : ((0x20000000U & vlSelf->CPU__DOT__fetch_Instruction)
                         ? ((0x10000000U & vlSelf->CPU__DOT__fetch_Instruction)
                             ? 0U : ((0x8000000U & vlSelf->CPU__DOT__fetch_Instruction)
                                      ? ((0x4000000U 
                                          & vlSelf->CPU__DOT__fetch_Instruction)
                                          ? 0x28U : 0U)
                                      : 0U)) : ((0x10000000U 
                                                 & vlSelf->CPU__DOT__fetch_Instruction)
                                                 ? 0U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->CPU__DOT__fetch_Instruction)
                                                  ? 
                                                 ((0x4000000U 
                                                   & vlSelf->CPU__DOT__fetch_Instruction)
                                                   ? 0x1c8U
                                                   : 0U)
                                                  : 0U))))
            : ((0x40000000U & vlSelf->CPU__DOT__fetch_Instruction)
                ? 0U : ((0x20000000U & vlSelf->CPU__DOT__fetch_Instruction)
                         ? ((0x10000000U & vlSelf->CPU__DOT__fetch_Instruction)
                             ? 0U : ((0x8000000U & vlSelf->CPU__DOT__fetch_Instruction)
                                      ? 0U : ((0x4000000U 
                                               & vlSelf->CPU__DOT__fetch_Instruction)
                                               ? 0U
                                               : 0x108U)))
                         : ((0x10000000U & vlSelf->CPU__DOT__fetch_Instruction)
                             ? ((0x8000000U & vlSelf->CPU__DOT__fetch_Instruction)
                                 ? 0U : ((0x4000000U 
                                          & vlSelf->CPU__DOT__fetch_Instruction)
                                          ? 0U : 0x12U))
                             : ((0x8000000U & vlSelf->CPU__DOT__fetch_Instruction)
                                 ? 0U : ((0x4000000U 
                                          & vlSelf->CPU__DOT__fetch_Instruction)
                                          ? 0U : 0x105U))))));
    vlSelf->dbg_instruction = vlSelf->CPU__DOT__fetch_Instruction;
    vlSelf->dbg_rs = (0x1fU & (vlSelf->CPU__DOT__fetch_Instruction 
                               >> 0x15U));
    vlSelf->dbg_rt = (0x1fU & (vlSelf->CPU__DOT__fetch_Instruction 
                               >> 0x10U));
    vlSelf->dbg_rd = (0x1fU & (vlSelf->CPU__DOT__fetch_Instruction 
                               >> 0xbU));
}

VL_INLINE_OPT void VCPU___024root___nba_sequent__TOP__2(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CPU__DOT__decode_stage__DOT__RM__DOT__regs__v0) {
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[vlSelf->__Vdlyvdim0__CPU__DOT__decode_stage__DOT__RM__DOT__regs__v0] 
            = vlSelf->__Vdlyvval__CPU__DOT__decode_stage__DOT__RM__DOT__regs__v0;
    }
    if (vlSelf->__Vdlyvset__CPU__DOT__decode_stage__DOT__RM__DOT__regs__v1) {
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[0U] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[1U] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[2U] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[3U] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[4U] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[5U] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[6U] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[7U] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[8U] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[9U] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[0xaU] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[0xbU] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[0xcU] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[0xdU] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[0xeU] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[0xfU] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[0x10U] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[0x11U] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[0x12U] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[0x13U] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[0x14U] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[0x15U] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[0x16U] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[0x17U] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[0x18U] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[0x19U] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[0x1aU] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[0x1bU] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[0x1cU] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[0x1dU] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[0x1eU] = 0U;
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[0x1fU] = 0U;
    }
    vlSelf->CPU__DOT__fetch_stage__DOT__Memory_Out 
        = vlSelf->CPU__DOT__fetch_stage__DOT__IM__DOT__Instruction_Memory
        [(0xffU & vlSelf->CPU__DOT__fetch_stage__DOT__PC_Out)];
}

VL_INLINE_OPT void VCPU___024root___nba_sequent__TOP__3(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->rst) {
        if ((1U & (~ (IData)(vlSelf->dbg_WAIT)))) {
            vlSelf->CPU__DOT__fetch_stage__DOT__PC_Out 
                = vlSelf->CPU__DOT__fetch_stage__DOT__Mux_Out;
        }
    } else {
        vlSelf->CPU__DOT__fetch_stage__DOT__PC_Out = 0U;
    }
    vlSelf->dbg_WAIT = ((IData)(vlSelf->CPU__DOT__execute_stage__DOT__WAIT1) 
                        & (IData)(vlSelf->CPU__DOT__execute_stage__DOT__WAIT2));
    vlSelf->CPU__DOT__fetch_stage__DOT__Mux_Out = ((IData)(vlSelf->dbg_PCSrc)
                                                    ? vlSelf->CPU__DOT__ex_PC_from_ExMem
                                                    : 
                                                   ((IData)(1U) 
                                                    + vlSelf->CPU__DOT__fetch_stage__DOT__PC_Out));
    vlSelf->CPU__DOT__decode_stage__DOT____Vcellinp__RM__RegWrite 
        = ((~ (IData)(vlSelf->dbg_WAIT)) & (IData)(vlSelf->CPU__DOT__wb_RegWrite));
    vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT____VdfgTmp_h988a1f39__0 
        = ((IData)(vlSelf->CPU__DOT__decode_stage__DOT____Vcellinp__RM__RegWrite) 
           & (0U != (IData)(vlSelf->CPU__DOT__wb_WriteReg)));
}

void VCPU___024root___eval_nba(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCPU___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCPU___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCPU___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCPU___024root___nba_sequent__TOP__3(vlSelf);
    }
}

void VCPU___024root___eval_triggers__act(VCPU___024root* vlSelf);

bool VCPU___024root___eval_phase__act(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VCPU___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VCPU___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VCPU___024root___eval_phase__nba(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VCPU___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__nba(VCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__act(VCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VCPU___024root___eval(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VCPU___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("CPU.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VCPU___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("CPU.v", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VCPU___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VCPU___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VCPU___024root___eval_debug_assertions(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
