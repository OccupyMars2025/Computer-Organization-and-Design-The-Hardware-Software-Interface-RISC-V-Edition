// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VRISCV_CPU__pch.h"
#include "VRISCV_CPU.h"
#include "VRISCV_CPU___024root.h"

// FUNCTIONS
VRISCV_CPU__Syms::~VRISCV_CPU__Syms()
{
}

VRISCV_CPU__Syms::VRISCV_CPU__Syms(VerilatedContext* contextp, const char* namep, VRISCV_CPU* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(48);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
