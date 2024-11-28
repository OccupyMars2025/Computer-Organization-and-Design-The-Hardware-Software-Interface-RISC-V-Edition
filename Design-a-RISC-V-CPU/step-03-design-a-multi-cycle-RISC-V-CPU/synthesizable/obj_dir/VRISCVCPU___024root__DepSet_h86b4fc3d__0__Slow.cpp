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
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__RISCVCPU__DOT__PCSource__0 
        = vlSelfRef.RISCVCPU__DOT__PCSource;
    vlSelfRef.__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ALUOut__0 
        = vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUOut;
    vlSelfRef.__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ALUResultOut__0 
        = vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUResultOut;
    vlSelfRef.__Vtrigprevexpr___TOP__RISCVCPU__DOT__ALUSrcB__0 
        = vlSelfRef.RISCVCPU__DOT__ALUSrcB;
    vlSelfRef.__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__B__0 
        = vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__B;
    vlSelfRef.__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ImmGen__0 
        = vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ImmGen;
    vlSelfRef.__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__PCOffset__0 
        = vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__PCOffset;
    vlSelfRef.__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ALUAin__0 
        = vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUAin;
    vlSelfRef.__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ALUBin__0 
        = vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUBin;
    vlSelfRef.__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ALUCtl__0 
        = vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUCtl;
}

extern const VlWide<10>/*319:0*/ VRISCVCPU__ConstPool__CONST_h36fecb6b_0;

VL_ATTR_COLD void VRISCVCPU___024root___eval_initial__TOP(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.RISCVCPU__DOT__state = 1U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__PC = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTES_III(32, 0x3ffU, vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory[(0x3ffU 
                                                       & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(10, VRISCVCPU__ConstPool__CONST_h36fecb6b_0)
                 ,  &(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory)
                 , 0, ~0ULL);
    VL_WRITEF_NX("Memory[00]: 0x%08x\nMemory[01]: 0x%08x\nMemory[02]: 0x%08x\nMemory[03]: 0x%08x\nMemory[04]: 0x%08x\nMemory[05]: 0x%08x\nMemory[06]: 0x%08x\nMemory[07]: 0x%08x\nMemory[08]: 0x%08x\nMemory[09]: 0x%08x\nMemory[10]: 0x%08x\nMemory[11]: 0x%08x\nMemory[12]: 0x%08x\nMemory[13]: 0x%08x\nMemory[14]: 0x%08x\nMemory[15]: 0x%08x\n",0,
                 32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [0U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [1U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [2U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [3U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [4U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [5U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [6U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [7U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [8U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [9U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [0xaU],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [0xbU],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [0xcU],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [0xdU],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [0xeU],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [0xfU]);
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__unnamedblk1__DOT__i = 0x10U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0U] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[1U] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[2U] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[3U] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[4U] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[5U] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[6U] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[7U] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[8U] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[9U] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0xaU] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0xbU] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0xcU] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0xdU] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0xeU] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0xfU] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0x10U] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0x11U] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0x12U] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0x13U] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0x14U] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0x15U] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0x16U] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0x17U] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0x18U] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0x19U] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0x1aU] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0x1bU] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0x1cU] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0x1dU] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0x1eU] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0x1fU] = 0U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__i = 0x20U;
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
            VL_FATAL_MT("RISCVCPU.v", 3, "", "Settle region did not converge.");
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
    if (VL_UNLIKELY((0U == vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR))) {
        VL_WRITEF_NX("no instruction at PC: 0x%08x\n",0,
                     32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__PC);
        VL_FINISH_MT("Datapath.v", 55, "");
    }
    vlSelfRef.RISCVCPU__DOT__PCSource = (1U != (IData)(vlSelfRef.RISCVCPU__DOT__state));
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ImmGen = 
        (((3U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR)) 
          | (0x13U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR)))
          ? (((- (IData)((vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                          >> 0x1fU))) << 0xbU) | (0x7ffU 
                                                  & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                     >> 0x14U)))
          : (((- (IData)((vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                          >> 0x1fU))) << 0xbU) | ((0x7e0U 
                                                   & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                        >> 7U)))));
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__PCOffset 
        = (((- (IData)((vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                        >> 0x1fU))) << 0xcU) | ((0x800U 
                                                 & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                         >> 7U)))));
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__B = vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
        [(0x1fU & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                   >> 0x14U))];
    vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_8 
        = ((4U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
           & ((0x33U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR)) 
              | (0x13U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR))));
    vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_6 
        = ((3U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
           & (((3U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR)) 
               | (0x23U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR))) 
              | (0x13U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR))));
    if ((1U == (IData)(vlSelfRef.RISCVCPU__DOT__state))) {
        vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__MemAddr 
            = vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__PC;
        vlSelfRef.RISCVCPU__DOT__ALUSrcB = 1U;
    } else {
        vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__MemAddr 
            = vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUOut;
        vlSelfRef.RISCVCPU__DOT__ALUSrcB = (((2U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
                                             | (IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_6))
                                             ? 2U : 0U);
    }
    vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_3 
        = ((1U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
           | (2U == (IData)(vlSelfRef.RISCVCPU__DOT__state)));
    vlSelfRef.RISCVCPU__DOT__PCWriteCond = ((3U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
                                            & (0x63U 
                                               == (0x7fU 
                                                   & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR)));
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__WriteData 
        = ((IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_8)
            ? vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUOut
            : vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__MDR);
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__MemOut = 
        (((1U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
          | ((4U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
             & (3U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR))))
          ? vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
         [(0x3ffU & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__MemAddr 
                     >> 2U))] : 0U);
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUAin = 
        ((IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_3)
          ? vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__PC
          : vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
         [(0x1fU & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                    >> 0xfU))]);
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IfWritePC 
        = ((1U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
           | ((IData)(vlSelfRef.RISCVCPU__DOT__PCWriteCond) 
              & (0U == vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUResultOut)));
    vlSelfRef.RISCVCPU__DOT__ALUOp = (((IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_3) 
                                       | (IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_6))
                                       ? 0U : ((IData)(vlSelfRef.RISCVCPU__DOT__PCWriteCond)
                                                ? 1U
                                                : 2U));
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUCtl = 
        ((0U == (IData)(vlSelfRef.RISCVCPU__DOT__ALUOp))
          ? 2U : ((1U == (IData)(vlSelfRef.RISCVCPU__DOT__ALUOp))
                   ? 6U : ((2U == (IData)(vlSelfRef.RISCVCPU__DOT__ALUOp))
                            ? (0xfU & ((0U == (7U & 
                                               (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                >> 0xcU)))
                                        ? ((0U == (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                   >> 0x19U))
                                            ? 2U : 
                                           ((0x20U 
                                             == (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                 >> 0x19U))
                                             ? 6U : 0xfU))
                                        : ((7U == (7U 
                                                   & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                      >> 0xcU)))
                                            ? 0U : 
                                           ((6U == 
                                             (7U & 
                                              (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                               >> 0xcU)))
                                             ? 1U : 
                                            ((2U == 
                                              (7U & 
                                               (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                >> 0xcU)))
                                              ? 7U : 
                                             ((4U == 
                                               (7U 
                                                & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                   >> 0xcU)))
                                               ? 0xcU
                                               : 0xfU))))))
                            : 0xfU)));
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] reset)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] RISCVCPU.PCSource)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] RISCVCPU.RISCVDP.ALUOut)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([changed] RISCVCPU.RISCVDP.ALUResultOut)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([changed] RISCVCPU.ALUSrcB)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([changed] RISCVCPU.RISCVDP.B)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([changed] RISCVCPU.RISCVDP.ImmGen)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([changed] RISCVCPU.RISCVDP.PCOffset)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([changed] RISCVCPU.RISCVDP.ALUAin)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([changed] RISCVCPU.RISCVDP.ALUBin)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([changed] RISCVCPU.RISCVDP.ALUCtl)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] reset)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] RISCVCPU.PCSource)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] RISCVCPU.RISCVDP.ALUOut)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([changed] RISCVCPU.RISCVDP.ALUResultOut)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([changed] RISCVCPU.ALUSrcB)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([changed] RISCVCPU.RISCVDP.B)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([changed] RISCVCPU.RISCVDP.ImmGen)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([changed] RISCVCPU.RISCVDP.PCOffset)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([changed] RISCVCPU.RISCVDP.ALUAin)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([changed] RISCVCPU.RISCVDP.ALUBin)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([changed] RISCVCPU.RISCVDP.ALUCtl)\n");
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
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void VRISCVCPU___024root___ctor_var_reset(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->RISCVCPU__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->RISCVCPU__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->RISCVCPU__DOT__ALUSrcB = VL_RAND_RESET_I(2);
    vlSelf->RISCVCPU__DOT__PCWriteCond = VL_RAND_RESET_I(1);
    vlSelf->RISCVCPU__DOT__PCSource = VL_RAND_RESET_I(1);
    vlSelf->RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_3 = VL_RAND_RESET_I(1);
    vlSelf->RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_6 = VL_RAND_RESET_I(1);
    vlSelf->RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_8 = VL_RAND_RESET_I(1);
    vlSelf->RISCVCPU__DOT__RISCVDP__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__RISCVDP__DOT__MDR = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__RISCVDP__DOT__IR = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__RISCVDP__DOT__ALUOut = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->RISCVCPU__DOT__RISCVDP__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->RISCVCPU__DOT__RISCVDP__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__RISCVDP__DOT__SignExtendOffset = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__RISCVDP__DOT__PCOffset = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__RISCVDP__DOT__ALUResultOut = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__RISCVDP__DOT__PCValue = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__RISCVDP__DOT__JumpAddr = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__RISCVDP__DOT__WriteData = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__RISCVDP__DOT__ALUAin = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__RISCVDP__DOT__ALUBin = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__RISCVDP__DOT__MemOut = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__RISCVDP__DOT__MemAddr = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__RISCVDP__DOT__ImmGen = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__RISCVDP__DOT__ALUCtl = VL_RAND_RESET_I(4);
    vlSelf->RISCVCPU__DOT__RISCVDP__DOT__IfWritePC = VL_RAND_RESET_I(1);
    vlSelf->RISCVCPU__DOT__RISCVDP__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->RISCVCPU__DOT__RISCVDP__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__RISCVCPU__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__RISCVCPU__DOT__PCSource__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ALUOut__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ALUResultOut__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__RISCVCPU__DOT__ALUSrcB__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__B__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ImmGen__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__PCOffset__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ALUAin__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ALUBin__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ALUCtl__0 = VL_RAND_RESET_I(4);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
