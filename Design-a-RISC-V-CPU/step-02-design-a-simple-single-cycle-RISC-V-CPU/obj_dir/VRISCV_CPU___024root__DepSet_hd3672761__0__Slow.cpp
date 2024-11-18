// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISCV_CPU.h for the primary calling header

#include "VRISCV_CPU__pch.h"
#include "VRISCV_CPU___024root.h"

VL_ATTR_COLD void VRISCV_CPU___024root___eval_static(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VRISCV_CPU___024root___eval_initial__TOP(VRISCV_CPU___024root* vlSelf);
VL_ATTR_COLD void VRISCV_CPU___024root____Vm_traceActivitySetAll(VRISCV_CPU___024root* vlSelf);

VL_ATTR_COLD void VRISCV_CPU___024root___eval_initial(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VRISCV_CPU___024root___eval_initial__TOP(vlSelf);
    VRISCV_CPU___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
}

extern const VlWide<10>/*319:0*/ VRISCV_CPU__ConstPool__CONST_h36fecb6b_0;

VL_ATTR_COLD void VRISCV_CPU___024root___eval_initial__TOP(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__i)) {
        vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__memory[(0x3ffU 
                                                        & vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__i)] = 0U;
        vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__i = 
            ((IData)(1U) + vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__i);
    }
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(10, VRISCV_CPU__ConstPool__CONST_h36fecb6b_0)
                 ,  &(vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__memory)
                 , 0, ~0ULL);
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0U] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[1U] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[2U] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[3U] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[4U] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[5U] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[6U] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[7U] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[8U] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[9U] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0xaU] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0xbU] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0xcU] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0xdU] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0xeU] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0xfU] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0x10U] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0x11U] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0x12U] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0x13U] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0x14U] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0x15U] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0x16U] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0x17U] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0x18U] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0x19U] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0x1aU] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0x1bU] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0x1cU] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0x1dU] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0x1eU] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0x1fU] = 0U;
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__i = 0x20U;
}

VL_ATTR_COLD void VRISCV_CPU___024root___eval_final(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCV_CPU___024root___dump_triggers__stl(VRISCV_CPU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VRISCV_CPU___024root___eval_phase__stl(VRISCV_CPU___024root* vlSelf);

VL_ATTR_COLD void VRISCV_CPU___024root___eval_settle(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VRISCV_CPU___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("RISCV_CPU.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VRISCV_CPU___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCV_CPU___024root___dump_triggers__stl(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRISCV_CPU___024root___stl_sequent__TOP__0(VRISCV_CPU___024root* vlSelf);

VL_ATTR_COLD void VRISCV_CPU___024root___eval_stl(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VRISCV_CPU___024root___stl_sequent__TOP__0(vlSelf);
        VRISCV_CPU___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> VRISCV_CPU__ConstPool__TABLE_ha75972e0_0;
extern const VlUnpacked<CData/*1:0*/, 128> VRISCV_CPU__ConstPool__TABLE_hfa9a92dd_0;
extern const VlUnpacked<CData/*0:0*/, 128> VRISCV_CPU__ConstPool__TABLE_h5ef68bce_0;
extern const VlUnpacked<CData/*0:0*/, 128> VRISCV_CPU__ConstPool__TABLE_h0573d0e5_0;
extern const VlUnpacked<CData/*0:0*/, 128> VRISCV_CPU__ConstPool__TABLE_he61ee599_0;
extern const VlUnpacked<CData/*0:0*/, 128> VRISCV_CPU__ConstPool__TABLE_hb3b45c1a_0;

VL_ATTR_COLD void VRISCV_CPU___024root___stl_sequent__TOP__0(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.RISCV_CPU__DOT__pc_inst__DOT__pc_plus_4 
        = ((IData)(4U) + vlSelfRef.RISCV_CPU__DOT__pc);
    vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__write_reg 
        = (0x1fU & (vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__memory
                    [(0x3ffU & (vlSelfRef.RISCV_CPU__DOT__pc 
                                >> 2U))] >> 7U));
    vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct3 
        = (7U & (vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__memory
                 [(0x3ffU & (vlSelfRef.RISCV_CPU__DOT__pc 
                             >> 2U))] >> 0xcU));
    vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct7 
        = (vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__memory
           [(0x3ffU & (vlSelfRef.RISCV_CPU__DOT__pc 
                       >> 2U))] >> 0x19U);
    vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg1 
        = (0x1fU & (vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__memory
                    [(0x3ffU & (vlSelfRef.RISCV_CPU__DOT__pc 
                                >> 2U))] >> 0xfU));
    vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg2 
        = (0x1fU & (vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__memory
                    [(0x3ffU & (vlSelfRef.RISCV_CPU__DOT__pc 
                                >> 2U))] >> 0x14U));
    vlSelfRef.RISCV_CPU__DOT__instruction = vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__memory
        [(0x3ffU & (vlSelfRef.RISCV_CPU__DOT__pc >> 2U))];
    __Vtableidx1 = (0x7fU & vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__memory
                    [(0x3ffU & (vlSelfRef.RISCV_CPU__DOT__pc 
                                >> 2U))]);
    vlSelfRef.RISCV_CPU__DOT__branch = VRISCV_CPU__ConstPool__TABLE_ha75972e0_0
        [__Vtableidx1];
    vlSelfRef.RISCV_CPU__DOT__mem_read = VRISCV_CPU__ConstPool__TABLE_ha75972e0_0
        [__Vtableidx1];
    vlSelfRef.RISCV_CPU__DOT__mem_to_reg = VRISCV_CPU__ConstPool__TABLE_ha75972e0_0
        [__Vtableidx1];
    vlSelfRef.RISCV_CPU__DOT__alu_op = VRISCV_CPU__ConstPool__TABLE_hfa9a92dd_0
        [__Vtableidx1];
    vlSelfRef.RISCV_CPU__DOT__mem_write = VRISCV_CPU__ConstPool__TABLE_h5ef68bce_0
        [__Vtableidx1];
    vlSelfRef.RISCV_CPU__DOT__alu_src_1 = VRISCV_CPU__ConstPool__TABLE_h0573d0e5_0
        [__Vtableidx1];
    vlSelfRef.RISCV_CPU__DOT__alu_src_2 = VRISCV_CPU__ConstPool__TABLE_he61ee599_0
        [__Vtableidx1];
    vlSelfRef.RISCV_CPU__DOT__reg_write = VRISCV_CPU__ConstPool__TABLE_hb3b45c1a_0
        [__Vtableidx1];
    vlSelfRef.RISCV_CPU__DOT__reg_read_data2 = ((0U 
                                                 == (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg2))
                                                 ? 0U
                                                 : 
                                                vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                                                [vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg2]);
    vlSelfRef.RISCV_CPU__DOT__immediate = ((0x13U == 
                                            (0x7fU 
                                             & vlSelfRef.RISCV_CPU__DOT__instruction))
                                            ? (((- (IData)(
                                                           (vlSelfRef.RISCV_CPU__DOT__instruction 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelfRef.RISCV_CPU__DOT__instruction 
                                                  >> 0x14U))
                                            : ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.RISCV_CPU__DOT__instruction))
                                                ? (0xfffff000U 
                                                   & vlSelfRef.RISCV_CPU__DOT__instruction)
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.RISCV_CPU__DOT__instruction))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelfRef.RISCV_CPU__DOT__instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelfRef.RISCV_CPU__DOT__instruction 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelfRef.RISCV_CPU__DOT__instruction 
                                                             >> 7U))))
                                                    : 0U)));
    vlSelfRef.RISCV_CPU__DOT__alu_control_lines = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.RISCV_CPU__DOT__alu_op))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.RISCV_CPU__DOT__alu_op))
                                                     ? 6U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.RISCV_CPU__DOT__alu_op))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct3))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct3))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct3))
                                                         ? 0U
                                                         : 1U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct3))
                                                         ? 
                                                        ((0x20U 
                                                          == (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct7))
                                                          ? 5U
                                                          : 7U)
                                                         : 3U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct3))
                                                        ? 0xfU
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct3))
                                                         ? 4U
                                                         : 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct7))
                                                          ? 2U
                                                          : 
                                                         ((0x20U 
                                                           == (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct7))
                                                           ? 6U
                                                           : 0xfU)))))
                                                      : 0xfU)));
    vlSelfRef.RISCV_CPU__DOT__first_operand_to_alu 
        = ((IData)(vlSelfRef.RISCV_CPU__DOT__alu_src_1)
            ? vlSelfRef.RISCV_CPU__DOT__pc : ((0U == (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg1))
                                               ? 0U
                                               : vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                                              [vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg1]));
    vlSelfRef.RISCV_CPU__DOT__pc_inst__DOT__branch_target 
        = (vlSelfRef.RISCV_CPU__DOT__immediate + vlSelfRef.RISCV_CPU__DOT__pc);
    vlSelfRef.RISCV_CPU__DOT__second_operand_to_alu 
        = ((IData)(vlSelfRef.RISCV_CPU__DOT__alu_src_2)
            ? vlSelfRef.RISCV_CPU__DOT__immediate : vlSelfRef.RISCV_CPU__DOT__reg_read_data2);
    vlSelfRef.RISCV_CPU__DOT__alu_result = ((8U & (IData)(vlSelfRef.RISCV_CPU__DOT__alu_control_lines))
                                             ? 0U : 
                                            ((4U & (IData)(vlSelfRef.RISCV_CPU__DOT__alu_control_lines))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.RISCV_CPU__DOT__alu_control_lines))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.RISCV_CPU__DOT__alu_control_lines))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.RISCV_CPU__DOT__first_operand_to_alu 
                                                   - vlSelfRef.RISCV_CPU__DOT__second_operand_to_alu))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.RISCV_CPU__DOT__alu_control_lines))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.RISCV_CPU__DOT__first_operand_to_alu 
                                                   ^ vlSelfRef.RISCV_CPU__DOT__second_operand_to_alu)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.RISCV_CPU__DOT__alu_control_lines))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.RISCV_CPU__DOT__alu_control_lines))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.RISCV_CPU__DOT__first_operand_to_alu 
                                                   + vlSelfRef.RISCV_CPU__DOT__second_operand_to_alu))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.RISCV_CPU__DOT__alu_control_lines))
                                                   ? 
                                                  (vlSelfRef.RISCV_CPU__DOT__first_operand_to_alu 
                                                   | vlSelfRef.RISCV_CPU__DOT__second_operand_to_alu)
                                                   : 
                                                  (vlSelfRef.RISCV_CPU__DOT__first_operand_to_alu 
                                                   & vlSelfRef.RISCV_CPU__DOT__second_operand_to_alu)))));
}

VL_ATTR_COLD void VRISCV_CPU___024root___eval_triggers__stl(VRISCV_CPU___024root* vlSelf);

VL_ATTR_COLD bool VRISCV_CPU___024root___eval_phase__stl(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VRISCV_CPU___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VRISCV_CPU___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCV_CPU___024root___dump_triggers__act(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCV_CPU___024root___dump_triggers__nba(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRISCV_CPU___024root____Vm_traceActivitySetAll(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void VRISCV_CPU___024root___ctor_var_reset(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->RISCV_CPU__DOT__reg_read_data2 = VL_RAND_RESET_I(32);
    vlSelf->RISCV_CPU__DOT__first_operand_to_alu = VL_RAND_RESET_I(32);
    vlSelf->RISCV_CPU__DOT__second_operand_to_alu = VL_RAND_RESET_I(32);
    vlSelf->RISCV_CPU__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->RISCV_CPU__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->RISCV_CPU__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->RISCV_CPU__DOT__immediate = VL_RAND_RESET_I(32);
    vlSelf->RISCV_CPU__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->RISCV_CPU__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->RISCV_CPU__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->RISCV_CPU__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->RISCV_CPU__DOT__alu_src_1 = VL_RAND_RESET_I(1);
    vlSelf->RISCV_CPU__DOT__alu_src_2 = VL_RAND_RESET_I(1);
    vlSelf->RISCV_CPU__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->RISCV_CPU__DOT__alu_op = VL_RAND_RESET_I(2);
    vlSelf->RISCV_CPU__DOT__alu_control_lines = VL_RAND_RESET_I(4);
    vlSelf->RISCV_CPU__DOT____Vcellinp__rf_inst__write_reg = VL_RAND_RESET_I(5);
    vlSelf->RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg2 = VL_RAND_RESET_I(5);
    vlSelf->RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg1 = VL_RAND_RESET_I(5);
    vlSelf->RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct7 = VL_RAND_RESET_I(7);
    vlSelf->RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct3 = VL_RAND_RESET_I(3);
    vlSelf->RISCV_CPU__DOT__pc_inst__DOT__pc_plus_4 = VL_RAND_RESET_I(32);
    vlSelf->RISCV_CPU__DOT__pc_inst__DOT__branch_target = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->RISCV_CPU__DOT__im_inst__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->RISCV_CPU__DOT__im_inst__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->RISCV_CPU__DOT__rf_inst__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->RISCV_CPU__DOT__rf_inst__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->RISCV_CPU__DOT__dm_inst__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
