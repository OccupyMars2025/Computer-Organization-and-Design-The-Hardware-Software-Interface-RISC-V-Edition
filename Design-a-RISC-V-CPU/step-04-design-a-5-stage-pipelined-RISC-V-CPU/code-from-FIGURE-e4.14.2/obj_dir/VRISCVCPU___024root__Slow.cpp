// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISCVCPU.h for the primary calling header

#include "VRISCVCPU__pch.h"
#include "VRISCVCPU__Syms.h"
#include "VRISCVCPU___024root.h"

void VRISCVCPU___024root___ctor_var_reset(VRISCVCPU___024root* vlSelf);

VRISCVCPU___024root::VRISCVCPU___024root(VRISCVCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRISCVCPU___024root___ctor_var_reset(this);
}

void VRISCVCPU___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VRISCVCPU___024root::~VRISCVCPU___024root() {
}
