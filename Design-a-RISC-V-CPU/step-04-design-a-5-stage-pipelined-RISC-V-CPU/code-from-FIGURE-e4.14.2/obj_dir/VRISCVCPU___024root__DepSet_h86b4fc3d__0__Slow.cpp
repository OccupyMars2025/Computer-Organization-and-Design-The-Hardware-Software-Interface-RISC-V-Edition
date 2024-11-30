// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISCVCPU.h for the primary calling header

#include "VRISCVCPU__pch.h"
#include "VRISCVCPU___024root.h"

VL_ATTR_COLD void VRISCVCPU___024root___eval_static(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VRISCVCPU___024root___eval_initial__TOP(VRISCVCPU___024root* vlSelf);
VL_ATTR_COLD void VRISCVCPU___024root____Vm_traceActivitySetAll(VRISCVCPU___024root* vlSelf);

VL_ATTR_COLD void VRISCVCPU___024root___eval_initial(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VRISCVCPU___024root___eval_initial__TOP(vlSelf);
    VRISCVCPU___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

extern const VlWide<10>/*319:0*/ VRISCVCPU__ConstPool__CONST_h36fecb6b_0;

VL_ATTR_COLD void VRISCVCPU___024root___eval_initial__TOP(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.RISCVCPU__DOT__PC = 0U;
    vlSelfRef.RISCVCPU__DOT__IFIDIR = 0x13U;
    vlSelfRef.RISCVCPU__DOT__IDEXIR = 0x13U;
    vlSelfRef.RISCVCPU__DOT__EXMEMIR = 0x13U;
    vlSelfRef.RISCVCPU__DOT__MEMWBIR = 0x13U;
    vlSelfRef.RISCVCPU__DOT__Regs[0U] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[1U] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[2U] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[3U] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[4U] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[5U] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[6U] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[7U] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[8U] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[9U] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[0xaU] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[0xbU] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[0xcU] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[0xdU] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[0xeU] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[0xfU] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[0x10U] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[0x11U] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[0x12U] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[0x13U] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[0x14U] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[0x15U] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[0x16U] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[0x17U] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[0x18U] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[0x19U] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[0x1aU] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[0x1bU] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[0x1cU] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[0x1dU] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[0x1eU] = 0U;
    vlSelfRef.RISCVCPU__DOT__Regs[0x1fU] = 0U;
    vlSelfRef.RISCVCPU__DOT__i = 0U;
    while (VL_GTES_III(32, 0x3ffU, vlSelfRef.RISCVCPU__DOT__i)) {
        vlSelfRef.RISCVCPU__DOT__IMemory[(0x3ffU & vlSelfRef.RISCVCPU__DOT__i)] = 0U;
        vlSelfRef.RISCVCPU__DOT__DMemory[(0x3ffU & vlSelfRef.RISCVCPU__DOT__i)] = 0U;
        vlSelfRef.RISCVCPU__DOT__i = ((IData)(1U) + vlSelfRef.RISCVCPU__DOT__i);
    }
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(10, VRISCVCPU__ConstPool__CONST_h36fecb6b_0)
                 ,  &(vlSelfRef.RISCVCPU__DOT__IMemory)
                 , 0, ~0ULL);
    VL_WRITEF_NX("IMemory[00]: 0x%08x\nIMemory[01]: 0x%08x\nIMemory[02]: 0x%08x\nIMemory[03]: 0x%08x\nIMemory[04]: 0x%08x\nIMemory[05]: 0x%08x\nIMemory[06]: 0x%08x\nIMemory[07]: 0x%08x\nIMemory[08]: 0x%08x\nIMemory[09]: 0x%08x\nIMemory[10]: 0x%08x\nIMemory[11]: 0x%08x\nIMemory[12]: 0x%08x\nIMemory[13]: 0x%08x\nIMemory[14]: 0x%08x\nIMemory[15]: 0x%08x\n",0,
                 32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [0U],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [1U],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [2U],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [3U],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [4U],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [5U],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [6U],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [7U],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [8U],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [9U],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [0xaU],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [0xbU],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [0xcU],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [0xdU],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [0xeU],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [0xfU]);
    vlSelfRef.RISCVCPU__DOT__i = 0x10U;
}

VL_ATTR_COLD void VRISCVCPU___024root___eval_final(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCVCPU___024root___dump_triggers__stl(VRISCVCPU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VRISCVCPU___024root___eval_phase__stl(VRISCVCPU___024root* vlSelf);

VL_ATTR_COLD void VRISCVCPU___024root___eval_settle(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___eval_settle\n"); );
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
            VRISCVCPU___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("RISCVCPU.v", 12, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VRISCVCPU___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCVCPU___024root___dump_triggers__stl(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void VRISCVCPU___024root___stl_sequent__TOP__0(VRISCVCPU___024root* vlSelf);

VL_ATTR_COLD void VRISCVCPU___024root___eval_stl(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VRISCVCPU___024root___stl_sequent__TOP__0(vlSelf);
        VRISCVCPU___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void VRISCVCPU___024root___stl_sequent__TOP__0(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((0U == vlSelfRef.RISCVCPU__DOT__IFIDIR))) {
        VL_WRITEF_NX("no instruction at PC: 0x%08x\n",0,
                     32,vlSelfRef.RISCVCPU__DOT__PC);
        VL_FINISH_MT("RISCVCPU.v", 116, "");
    }
    vlSelfRef.RISCVCPU__DOT__EXMEMop = (0x7fU & vlSelfRef.RISCVCPU__DOT__EXMEMIR);
    vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_3 
        = (((0x1fU & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                      >> 0xfU)) == (0x1fU & (vlSelfRef.RISCVCPU__DOT__MEMWBIR 
                                             >> 7U))) 
           & (0U != (0x1fU & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                              >> 0xfU))));
    vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_5 
        = (((0x1fU & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                      >> 0x14U)) == (0x1fU & (vlSelfRef.RISCVCPU__DOT__MEMWBIR 
                                              >> 7U))) 
           & (0U != (0x1fU & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                              >> 0x14U))));
    vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_1 
        = ((0x33U == (0x7fU & vlSelfRef.RISCVCPU__DOT__EXMEMIR)) 
           | (0x13U == (0x7fU & vlSelfRef.RISCVCPU__DOT__EXMEMIR)));
    vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_4 
        = ((0x33U == (0x7fU & vlSelfRef.RISCVCPU__DOT__MEMWBIR)) 
           | (0x13U == (0x7fU & vlSelfRef.RISCVCPU__DOT__MEMWBIR)));
    vlSelfRef.RISCVCPU__DOT__Ain = ((((0x1fU & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                                >> 0xfU)) 
                                      == (0x1fU & (vlSelfRef.RISCVCPU__DOT__EXMEMIR 
                                                   >> 7U))) 
                                     & ((0U != (0x1fU 
                                                & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                                   >> 0xfU))) 
                                        & (IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_1)))
                                     ? vlSelfRef.RISCVCPU__DOT__EXMEMALUOut
                                     : (((IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_3) 
                                         & ((IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_4) 
                                            | (3U == 
                                               (0x7fU 
                                                & vlSelfRef.RISCVCPU__DOT__MEMWBIR))))
                                         ? vlSelfRef.RISCVCPU__DOT__MEMWBValue
                                         : vlSelfRef.RISCVCPU__DOT__IDEXA));
    vlSelfRef.RISCVCPU__DOT__Bin = ((((0x1fU & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                                >> 0x14U)) 
                                      == (0x1fU & (vlSelfRef.RISCVCPU__DOT__EXMEMIR 
                                                   >> 7U))) 
                                     & ((0U != (0x1fU 
                                                & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                                   >> 0x14U))) 
                                        & (IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_1)))
                                     ? vlSelfRef.RISCVCPU__DOT__EXMEMALUOut
                                     : (((IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_5) 
                                         & ((IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_4) 
                                            | (3U == 
                                               (0x7fU 
                                                & vlSelfRef.RISCVCPU__DOT__MEMWBIR))))
                                         ? vlSelfRef.RISCVCPU__DOT__MEMWBValue
                                         : vlSelfRef.RISCVCPU__DOT__IDEXB));
}

VL_ATTR_COLD void VRISCVCPU___024root___eval_triggers__stl(VRISCVCPU___024root* vlSelf);

VL_ATTR_COLD bool VRISCVCPU___024root___eval_phase__stl(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VRISCVCPU___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VRISCVCPU___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCVCPU___024root___dump_triggers__act(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___dump_triggers__act\n"); );
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
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCVCPU___024root___dump_triggers__nba(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___dump_triggers__nba\n"); );
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
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRISCVCPU___024root____Vm_traceActivitySetAll(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void VRISCVCPU___024root___ctor_var_reset(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->RISCVCPU__DOT__PC = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->RISCVCPU__DOT__Regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->RISCVCPU__DOT__IDEXA = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__IDEXB = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__EXMEMB = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__EXMEMALUOut = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__MEMWBValue = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->RISCVCPU__DOT__IMemory[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->RISCVCPU__DOT__DMemory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->RISCVCPU__DOT__IFIDIR = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__IDEXIR = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__EXMEMIR = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__MEMWBIR = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__EXMEMop = VL_RAND_RESET_I(7);
    vlSelf->RISCVCPU__DOT__Ain = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__Bin = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_1 = VL_RAND_RESET_I(1);
    vlSelf->RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_3 = VL_RAND_RESET_I(1);
    vlSelf->RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_4 = VL_RAND_RESET_I(1);
    vlSelf->RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_5 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
