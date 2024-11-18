// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISCV_CPU.h for the primary calling header

#include "VRISCV_CPU__pch.h"
#include "VRISCV_CPU__Syms.h"
#include "VRISCV_CPU___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCV_CPU___024root___dump_triggers__act(VRISCV_CPU___024root* vlSelf);
#endif  // VL_DEBUG

void VRISCV_CPU___024root___eval_triggers__act(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((~ (IData)(vlSelfRef.clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.reset) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRISCV_CPU___024root___dump_triggers__act(vlSelf);
    }
#endif
}
