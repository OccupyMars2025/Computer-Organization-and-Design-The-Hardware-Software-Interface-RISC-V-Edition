// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISCV_CPU.h for the primary calling header

#include "VRISCV_CPU__pch.h"
#include "VRISCV_CPU__Syms.h"
#include "VRISCV_CPU___024root.h"

void VRISCV_CPU___024root___ctor_var_reset(VRISCV_CPU___024root* vlSelf);

VRISCV_CPU___024root::VRISCV_CPU___024root(VRISCV_CPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRISCV_CPU___024root___ctor_var_reset(this);
}

void VRISCV_CPU___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VRISCV_CPU___024root::~VRISCV_CPU___024root() {
}
