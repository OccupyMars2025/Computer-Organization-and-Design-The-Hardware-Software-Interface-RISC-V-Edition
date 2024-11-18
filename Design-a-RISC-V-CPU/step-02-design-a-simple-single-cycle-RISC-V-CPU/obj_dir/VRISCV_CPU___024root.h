// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRISCV_CPU.h for the primary calling header

#ifndef VERILATED_VRISCV_CPU___024ROOT_H_
#define VERILATED_VRISCV_CPU___024ROOT_H_  // guard

#include "verilated.h"


class VRISCV_CPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRISCV_CPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ RISCV_CPU__DOT__branch;
    CData/*0:0*/ RISCV_CPU__DOT__mem_read;
    CData/*0:0*/ RISCV_CPU__DOT__mem_write;
    CData/*0:0*/ RISCV_CPU__DOT__reg_write;
    CData/*0:0*/ RISCV_CPU__DOT__alu_src_1;
    CData/*0:0*/ RISCV_CPU__DOT__alu_src_2;
    CData/*0:0*/ RISCV_CPU__DOT__mem_to_reg;
    CData/*1:0*/ RISCV_CPU__DOT__alu_op;
    CData/*3:0*/ RISCV_CPU__DOT__alu_control_lines;
    CData/*4:0*/ RISCV_CPU__DOT____Vcellinp__rf_inst__write_reg;
    CData/*4:0*/ RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg2;
    CData/*4:0*/ RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg1;
    CData/*6:0*/ RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct7;
    CData/*2:0*/ RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct3;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ RISCV_CPU__DOT__reg_read_data2;
    IData/*31:0*/ RISCV_CPU__DOT__first_operand_to_alu;
    IData/*31:0*/ RISCV_CPU__DOT__second_operand_to_alu;
    IData/*31:0*/ RISCV_CPU__DOT__pc;
    IData/*31:0*/ RISCV_CPU__DOT__alu_result;
    IData/*31:0*/ RISCV_CPU__DOT__instruction;
    IData/*31:0*/ RISCV_CPU__DOT__immediate;
    IData/*31:0*/ RISCV_CPU__DOT__pc_inst__DOT__pc_plus_4;
    IData/*31:0*/ RISCV_CPU__DOT__pc_inst__DOT__branch_target;
    IData/*31:0*/ RISCV_CPU__DOT__im_inst__DOT__i;
    IData/*31:0*/ RISCV_CPU__DOT__rf_inst__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> RISCV_CPU__DOT__im_inst__DOT__memory;
    VlUnpacked<IData/*31:0*/, 32> RISCV_CPU__DOT__rf_inst__DOT__registers;
    VlUnpacked<IData/*31:0*/, 2048> RISCV_CPU__DOT__dm_inst__DOT__memory;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VRISCV_CPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRISCV_CPU___024root(VRISCV_CPU__Syms* symsp, const char* v__name);
    ~VRISCV_CPU___024root();
    VL_UNCOPYABLE(VRISCV_CPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
