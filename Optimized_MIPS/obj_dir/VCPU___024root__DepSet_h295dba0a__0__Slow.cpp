// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU___024root.h"

VL_ATTR_COLD void VCPU___024root___eval_static(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_static\n"); );
}

VL_ATTR_COLD void VCPU___024root___eval_initial__TOP(VCPU___024root* vlSelf);

VL_ATTR_COLD void VCPU___024root___eval_initial(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_initial\n"); );
    // Body
    VCPU___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
}

VL_ATTR_COLD void VCPU___024root___eval_initial__TOP(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x696f6e73U;
    __Vtemp_1[2U] = 0x72756374U;
    __Vtemp_1[3U] = 0x696e7374U;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelf->CPU__DOT__fetch_stage__DOT__IM__DOT__Instruction_Memory)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VCPU___024root___eval_final(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__stl(VCPU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VCPU___024root___eval_phase__stl(VCPU___024root* vlSelf);

VL_ATTR_COLD void VCPU___024root___eval_settle(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VCPU___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("CPU.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VCPU___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__stl(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCPU___024root___stl_sequent__TOP__0(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ CPU__DOT__execute_stage__DOT__ALU1__DOT__funt;
    CPU__DOT__execute_stage__DOT__ALU1__DOT__funt = 0;
    IData/*31:0*/ CPU__DOT__execute_stage__DOT__ALU1__DOT__comb_result;
    CPU__DOT__execute_stage__DOT__ALU1__DOT__comb_result = 0;
    CData/*2:0*/ CPU__DOT__execute_stage__DOT__ALU2__DOT__funt;
    CPU__DOT__execute_stage__DOT__ALU2__DOT__funt = 0;
    IData/*31:0*/ CPU__DOT__execute_stage__DOT__ALU2__DOT__comb_result;
    CPU__DOT__execute_stage__DOT__ALU2__DOT__comb_result = 0;
    // Body
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
    vlSelf->dbg_fetch_NPC = vlSelf->CPU__DOT__fetch_NPC;
    vlSelf->dbg_instruction = vlSelf->CPU__DOT__fetch_Instruction;
    vlSelf->dbg_RD2 = vlSelf->CPU__DOT__id_Read_Data_2;
    vlSelf->dbg_signext = vlSelf->CPU__DOT__id_SignExt;
    vlSelf->dbg_ALU1_WAIT = vlSelf->CPU__DOT__execute_stage__DOT__WAIT1;
    vlSelf->dbg_ALU2_WAIT = vlSelf->CPU__DOT__execute_stage__DOT__WAIT2;
    vlSelf->dbg_WB_Data = vlSelf->CPU__DOT__wb_Write_Data_To_Reg;
    vlSelf->dbg_WriteReg = vlSelf->CPU__DOT__wb_WriteReg;
    vlSelf->dbg_RegWrite = vlSelf->CPU__DOT__wb_RegWrite;
    vlSelf->dbg_rs = (0x1fU & (vlSelf->CPU__DOT__fetch_Instruction 
                               >> 0x15U));
    vlSelf->dbg_rt = (0x1fU & (vlSelf->CPU__DOT__fetch_Instruction 
                               >> 0x10U));
    vlSelf->dbg_rd = (0x1fU & (vlSelf->CPU__DOT__fetch_Instruction 
                               >> 0xbU));
    vlSelf->dbg_RD1 = vlSelf->CPU__DOT__id_Read_Data_1;
    vlSelf->dbg_ALU_Data = vlSelf->CPU__DOT__ex_ALU_Data;
    vlSelf->dbg_Mem_Read_Data = vlSelf->CPU__DOT__wb_Read_Data;
    vlSelf->dbg_PCSrc = ((IData)(vlSelf->CPU__DOT__memory_writeback_stage__DOT__branch_reg) 
                         & (IData)(vlSelf->CPU__DOT__memory_writeback_stage__DOT__zero_reg));
    vlSelf->dbg_WAIT = ((IData)(vlSelf->CPU__DOT__execute_stage__DOT__WAIT1) 
                        & (IData)(vlSelf->CPU__DOT__execute_stage__DOT__WAIT2));
    vlSelf->CPU__DOT__execute_stage__DOT__ALUSrc_Mux 
        = ((8U & (IData)(vlSelf->CPU__DOT__id_EX)) ? vlSelf->CPU__DOT__id_SignExt
            : vlSelf->CPU__DOT__id_Read_Data_2);
    vlSelf->CPU__DOT__execute_stage__DOT__use_alu2 
        = ((~ (IData)(vlSelf->CPU__DOT__execute_stage__DOT__WAIT2)) 
           & (IData)(vlSelf->CPU__DOT__execute_stage__DOT__WAIT1));
    vlSelf->CPU__DOT__fetch_stage__DOT__Mux_Out = ((IData)(vlSelf->dbg_PCSrc)
                                                    ? vlSelf->CPU__DOT__ex_PC_from_ExMem
                                                    : 
                                                   ((IData)(1U) 
                                                    + vlSelf->CPU__DOT__fetch_stage__DOT__PC_Out));
    vlSelf->CPU__DOT__decode_stage__DOT____Vcellinp__RM__RegWrite 
        = ((~ (IData)(vlSelf->dbg_WAIT)) & (IData)(vlSelf->CPU__DOT__wb_RegWrite));
    if (vlSelf->CPU__DOT__execute_stage__DOT__use_alu2) {
        vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__SignExt = 0U;
        vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__ALU_OP = 0U;
        vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__SignExt 
            = (0x3fU & vlSelf->CPU__DOT__id_SignExt);
        vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__ALU_OP 
            = (3U & ((IData)(vlSelf->CPU__DOT__id_EX) 
                     >> 1U));
    } else {
        vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__SignExt 
            = (0x3fU & vlSelf->CPU__DOT__id_SignExt);
        vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__ALU_OP 
            = (3U & ((IData)(vlSelf->CPU__DOT__id_EX) 
                     >> 1U));
        vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__SignExt = 0U;
        vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__ALU_OP = 0U;
    }
    vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT____VdfgTmp_h988a1f39__0 
        = ((IData)(vlSelf->CPU__DOT__decode_stage__DOT____Vcellinp__RM__RegWrite) 
           & (0U != (IData)(vlSelf->CPU__DOT__wb_WriteReg)));
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
}

VL_ATTR_COLD void VCPU___024root___eval_stl(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VCPU___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VCPU___024root___eval_triggers__stl(VCPU___024root* vlSelf);

VL_ATTR_COLD bool VCPU___024root___eval_phase__stl(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VCPU___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VCPU___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__act(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__nba(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCPU___024root___ctor_var_reset(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->dbg_fetch_NPC = VL_RAND_RESET_I(32);
    vlSelf->dbg_instruction = VL_RAND_RESET_I(32);
    vlSelf->dbg_RD1 = VL_RAND_RESET_I(32);
    vlSelf->dbg_RD2 = VL_RAND_RESET_I(32);
    vlSelf->dbg_signext = VL_RAND_RESET_I(32);
    vlSelf->dbg_ALU_Data = VL_RAND_RESET_I(32);
    vlSelf->dbg_ALU1_Out = VL_RAND_RESET_I(32);
    vlSelf->dbg_ALU2_Out = VL_RAND_RESET_I(32);
    vlSelf->dbg_ALU1_WAIT = VL_RAND_RESET_I(1);
    vlSelf->dbg_ALU2_WAIT = VL_RAND_RESET_I(1);
    vlSelf->dbg_Mem_Read_Data = VL_RAND_RESET_I(32);
    vlSelf->dbg_WB_Data = VL_RAND_RESET_I(32);
    vlSelf->dbg_WriteReg = VL_RAND_RESET_I(5);
    vlSelf->dbg_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->dbg_PCSrc = VL_RAND_RESET_I(1);
    vlSelf->dbg_WAIT = VL_RAND_RESET_I(1);
    vlSelf->dbg_rs = VL_RAND_RESET_I(5);
    vlSelf->dbg_rt = VL_RAND_RESET_I(5);
    vlSelf->dbg_rd = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__fetch_NPC = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__fetch_Instruction = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__id_WB = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__id_MM = VL_RAND_RESET_I(3);
    vlSelf->CPU__DOT__id_EX = VL_RAND_RESET_I(4);
    vlSelf->CPU__DOT__id_Instr_2016 = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__id_Instr_1511 = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__id_NPC = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__id_SignExt = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__id_Read_Data_1 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__id_Read_Data_2 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__ex_WB = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__ex_MM = VL_RAND_RESET_I(3);
    vlSelf->CPU__DOT__ex_WriteReg = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__ex_ALU_Data = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__ex_PC_from_ExMem = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__ex_Write_Data = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__wb_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__wb_WriteReg = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__wb_Write_Data_To_Reg = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__wb_Read_Data = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__fetch_stage__DOT__Mux_Out = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__fetch_stage__DOT__Memory_Out = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__fetch_stage__DOT__PC_Out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->CPU__DOT__fetch_stage__DOT__IM__DOT__Instruction_Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->CPU__DOT__decode_stage__DOT__Controlled_O = VL_RAND_RESET_I(9);
    vlSelf->CPU__DOT__decode_stage__DOT____Vcellinp__RM__RegWrite = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->CPU__DOT__decode_stage__DOT__RM__DOT____VdfgTmp_h988a1f39__0 = 0;
    vlSelf->CPU__DOT__execute_stage__DOT__ALUSrc_Mux = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__execute_stage__DOT__WAIT1 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__execute_stage__DOT__mul_done1 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__execute_stage__DOT__WAIT2 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__execute_stage__DOT__mul_done2 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__execute_stage__DOT__use_alu2 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__ALU_OP = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU1__SignExt = VL_RAND_RESET_I(6);
    vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__ALU_OP = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__execute_stage__DOT____Vcellinp__ALU2__SignExt = VL_RAND_RESET_I(6);
    vlSelf->CPU__DOT__execute_stage__DOT__ALU1__DOT__mul_count = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__execute_stage__DOT__ALU1__DOT__mul_result = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__execute_stage__DOT__ALU2__DOT__mul_count = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__execute_stage__DOT__ALU2__DOT__mul_result = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__memory_writeback_stage__DOT__zero_reg = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__memory_writeback_stage__DOT__branch_reg = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM_Read_Data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CPU__DOT__memory_writeback_stage__DOT__DM__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vdlyvdim0__CPU__DOT__decode_stage__DOT__RM__DOT__regs__v0 = 0;
    vlSelf->__Vdlyvval__CPU__DOT__decode_stage__DOT__RM__DOT__regs__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__CPU__DOT__decode_stage__DOT__RM__DOT__regs__v0 = 0;
    vlSelf->__Vdlyvset__CPU__DOT__decode_stage__DOT__RM__DOT__regs__v1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
