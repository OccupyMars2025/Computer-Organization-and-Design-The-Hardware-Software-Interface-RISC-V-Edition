// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRISCVCPU.h for the primary calling header

#ifndef VERILATED_VRISCVCPU___024ROOT_H_
#define VERILATED_VRISCVCPU___024ROOT_H_  // guard

#include "verilated.h"


class VRISCVCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRISCVCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*6:0*/ RISCVCPU__DOT__EXMEMop;
    CData/*0:0*/ RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_1;
    CData/*0:0*/ RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_3;
    CData/*0:0*/ RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_4;
    CData/*0:0*/ RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_5;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ RISCVCPU__DOT__PC;
    IData/*31:0*/ RISCVCPU__DOT__IDEXA;
    IData/*31:0*/ RISCVCPU__DOT__IDEXB;
    IData/*31:0*/ RISCVCPU__DOT__EXMEMB;
    IData/*31:0*/ RISCVCPU__DOT__EXMEMALUOut;
    IData/*31:0*/ RISCVCPU__DOT__MEMWBValue;
    IData/*31:0*/ RISCVCPU__DOT__IFIDIR;
    IData/*31:0*/ RISCVCPU__DOT__IDEXIR;
    IData/*31:0*/ RISCVCPU__DOT__EXMEMIR;
    IData/*31:0*/ RISCVCPU__DOT__MEMWBIR;
    IData/*31:0*/ RISCVCPU__DOT__Ain;
    IData/*31:0*/ RISCVCPU__DOT__Bin;
    IData/*31:0*/ RISCVCPU__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> RISCVCPU__DOT__Regs;
    VlUnpacked<IData/*31:0*/, 1024> RISCVCPU__DOT__IMemory;
    VlUnpacked<IData/*31:0*/, 1024> RISCVCPU__DOT__DMemory;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VRISCVCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRISCVCPU___024root(VRISCVCPU__Syms* symsp, const char* v__name);
    ~VRISCVCPU___024root();
    VL_UNCOPYABLE(VRISCVCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
