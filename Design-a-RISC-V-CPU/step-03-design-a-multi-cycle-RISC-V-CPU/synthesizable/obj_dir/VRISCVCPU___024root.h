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
    CData/*0:0*/ RISCVCPU__DOT__PCSource;
    CData/*2:0*/ RISCVCPU__DOT__state;
    CData/*1:0*/ RISCVCPU__DOT__ALUOp;
    CData/*1:0*/ RISCVCPU__DOT__ALUSrcB;
    CData/*0:0*/ RISCVCPU__DOT__PCWriteCond;
    CData/*0:0*/ RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_3;
    CData/*0:0*/ RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_6;
    CData/*0:0*/ RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_8;
    CData/*3:0*/ RISCVCPU__DOT__RISCVDP__DOT__ALUCtl;
    CData/*0:0*/ RISCVCPU__DOT__RISCVDP__DOT__IfWritePC;
    CData/*2:0*/ __Vdly__RISCVCPU__DOT__state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__RISCVCPU__DOT__PCSource__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__RISCVCPU__DOT__ALUSrcB__0;
    CData/*3:0*/ __Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ALUCtl__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ RISCVCPU__DOT__RISCVDP__DOT__PC;
    IData/*31:0*/ RISCVCPU__DOT__RISCVDP__DOT__MDR;
    IData/*31:0*/ RISCVCPU__DOT__RISCVDP__DOT__IR;
    IData/*31:0*/ RISCVCPU__DOT__RISCVDP__DOT__ALUOut;
    IData/*31:0*/ RISCVCPU__DOT__RISCVDP__DOT__B;
    IData/*31:0*/ RISCVCPU__DOT__RISCVDP__DOT__SignExtendOffset;
    IData/*31:0*/ RISCVCPU__DOT__RISCVDP__DOT__PCOffset;
    IData/*31:0*/ RISCVCPU__DOT__RISCVDP__DOT__ALUResultOut;
    IData/*31:0*/ RISCVCPU__DOT__RISCVDP__DOT__PCValue;
    IData/*31:0*/ RISCVCPU__DOT__RISCVDP__DOT__JumpAddr;
    IData/*31:0*/ RISCVCPU__DOT__RISCVDP__DOT__WriteData;
    IData/*31:0*/ RISCVCPU__DOT__RISCVDP__DOT__ALUAin;
    IData/*31:0*/ RISCVCPU__DOT__RISCVDP__DOT__ALUBin;
    IData/*31:0*/ RISCVCPU__DOT__RISCVDP__DOT__MemOut;
    IData/*31:0*/ RISCVCPU__DOT__RISCVDP__DOT__MemAddr;
    IData/*31:0*/ RISCVCPU__DOT__RISCVDP__DOT__ImmGen;
    IData/*31:0*/ RISCVCPU__DOT__RISCVDP__DOT__i;
    IData/*31:0*/ RISCVCPU__DOT__RISCVDP__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__i;
    IData/*31:0*/ __Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ALUOut__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ALUResultOut__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__B__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ImmGen__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__PCOffset__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ALUAin__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__RISCVCPU__DOT__RISCVDP__DOT__ALUBin__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> RISCVCPU__DOT__RISCVDP__DOT__Memory;
    VlUnpacked<IData/*31:0*/, 32> RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<13> __VactTriggered;
    VlTriggerVec<13> __VnbaTriggered;

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
