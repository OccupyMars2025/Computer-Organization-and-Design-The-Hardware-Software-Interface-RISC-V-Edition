// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISCVCPU.h for the primary calling header

#include "VRISCVCPU__pch.h"
#include "VRISCVCPU__Syms.h"
#include "VRISCVCPU___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCVCPU___024root___dump_triggers__act(VRISCVCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VRISCVCPU___024root___eval_triggers__act(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.reset) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0)));
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.RISCVCPU__DOT__PCSource) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__RISCVCPU__DOT__PCSource__0)));
    vlSelfRef.__VactTriggered.set(4U, (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUOut 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ALUOut__0));
    vlSelfRef.__VactTriggered.set(5U, (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUResultOut 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ALUResultOut__0));
    vlSelfRef.__VactTriggered.set(6U, ((IData)(vlSelfRef.RISCVCPU__DOT__ALUSrcB) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__RISCVCPU__DOT__ALUSrcB__0)));
    vlSelfRef.__VactTriggered.set(7U, (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__B 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__B__0));
    vlSelfRef.__VactTriggered.set(8U, (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ImmGen 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ImmGen__0));
    vlSelfRef.__VactTriggered.set(9U, (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__PCOffset 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__PCOffset__0));
    vlSelfRef.__VactTriggered.set(0xaU, (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUAin 
                                         != vlSelfRef.__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ALUAin__0));
    vlSelfRef.__VactTriggered.set(0xbU, (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUBin 
                                         != vlSelfRef.__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ALUBin__0));
    vlSelfRef.__VactTriggered.set(0xcU, ((IData)(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUCtl) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ALUCtl__0)));
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
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
        vlSelfRef.__VactTriggered.set(5U, 1U);
        vlSelfRef.__VactTriggered.set(6U, 1U);
        vlSelfRef.__VactTriggered.set(7U, 1U);
        vlSelfRef.__VactTriggered.set(8U, 1U);
        vlSelfRef.__VactTriggered.set(9U, 1U);
        vlSelfRef.__VactTriggered.set(0xaU, 1U);
        vlSelfRef.__VactTriggered.set(0xbU, 1U);
        vlSelfRef.__VactTriggered.set(0xcU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRISCVCPU___024root___dump_triggers__act(vlSelf);
    }
#endif
}
