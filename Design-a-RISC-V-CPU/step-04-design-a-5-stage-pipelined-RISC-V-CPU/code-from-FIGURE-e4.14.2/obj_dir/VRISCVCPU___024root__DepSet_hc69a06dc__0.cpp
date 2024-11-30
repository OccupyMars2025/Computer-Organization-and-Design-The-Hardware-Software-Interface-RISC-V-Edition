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
    vlSelfRef.__VactTriggered.set(0U, ((~ (IData)(vlSelfRef.clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRISCVCPU___024root___dump_triggers__act(vlSelf);
    }
#endif
}
