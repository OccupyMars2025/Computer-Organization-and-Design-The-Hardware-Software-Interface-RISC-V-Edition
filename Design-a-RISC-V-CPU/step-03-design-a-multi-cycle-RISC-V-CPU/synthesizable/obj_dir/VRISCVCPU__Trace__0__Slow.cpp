// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRISCVCPU__Syms.h"


VL_ATTR_COLD void VRISCVCPU___024root__trace_init_sub__TOP__0(VRISCVCPU___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+61,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("RISCVCPU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+61,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"LW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+76,0,"SW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+77,0,"BEQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+78,0,"ALUop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+79,0,"ADDI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+45,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+50,0,"ALUOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+63,0,"ALUSrcB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+36,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+51,0,"MemtoReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"MemRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"IorD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"IRWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"PCWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"PCWriteCond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"ALUSrcA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"PCSource",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"MemoryOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("RISCVDP", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+80,0,"BIT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"ALUOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+63,0,"ALUSrcB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+51,0,"MemtoReg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"MemRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"MemWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"IorD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"IRWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"PCWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"PCWriteCond",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"ALUSrcA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"PCSource",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+75,0,"LW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+76,0,"SW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+79,0,"ADDI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+2,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"MDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"ALUOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"SignExtendOffset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"PCOffset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"ALUResultOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"PCValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"JumpAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"WriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"ALUAin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"ALUBin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"MemOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"MemAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"ImmGen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"ALUCtl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+71,0,"Zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"IfWritePC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+57,0,"ALUCtl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+54,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"ALUOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"Zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ALUBinput", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+58,0,"In1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"In2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"In3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"In4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"Sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+70,0,"Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("PCdatasrc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+68,0,"In1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"In2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+49,0,"Sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("alucontroller", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+50,0,"ALUOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+40,0,"Func7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+41,0,"Func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+57,0,"ALUCtl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("regs", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+42,0,"Read1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+43,0,"Read2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"WriteReg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+53,0,"WriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"Data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"Data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("RF", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+74,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VRISCVCPU___024root__trace_init_top(VRISCVCPU___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VRISCVCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VRISCVCPU___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VRISCVCPU___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRISCVCPU___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRISCVCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VRISCVCPU___024root__trace_register(VRISCVCPU___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VRISCVCPU___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VRISCVCPU___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VRISCVCPU___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VRISCVCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VRISCVCPU___024root__trace_const_0_sub_0(VRISCVCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VRISCVCPU___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root__trace_const_0\n"); );
    // Init
    VRISCVCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISCVCPU___024root*>(voidSelf);
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRISCVCPU___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VRISCVCPU___024root__trace_const_0_sub_0(VRISCVCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+75,(3U),7);
    bufp->fullCData(oldp+76,(0x23U),7);
    bufp->fullCData(oldp+77,(0x63U),7);
    bufp->fullCData(oldp+78,(0x33U),7);
    bufp->fullCData(oldp+79,(0x13U),7);
    bufp->fullIData(oldp+80,(0x20U),32);
    bufp->fullIData(oldp+81,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__SignExtendOffset),32);
    bufp->fullIData(oldp+82,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__JumpAddr),32);
    bufp->fullIData(oldp+83,(4U),32);
}

VL_ATTR_COLD void VRISCVCPU___024root__trace_full_0_sub_0(VRISCVCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VRISCVCPU___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root__trace_full_0\n"); );
    // Init
    VRISCVCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISCVCPU___024root*>(voidSelf);
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRISCVCPU___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VRISCVCPU___024root__trace_full_0_sub_0(VRISCVCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__PC),32);
    bufp->fullIData(oldp+3,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__MDR),32);
    bufp->fullIData(oldp+4,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[1]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[2]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[3]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[4]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[5]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[6]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[7]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[8]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[9]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[10]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[11]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[12]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[13]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[14]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[15]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[16]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[17]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[18]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[19]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[20]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[21]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[22]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[23]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[24]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[25]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[26]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[27]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[28]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[29]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[30]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[31]),32);
    bufp->fullCData(oldp+36,((0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR)),7);
    bufp->fullBit(oldp+37,(((3U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR)) 
                            | (0x23U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR)))));
    bufp->fullIData(oldp+38,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR),32);
    bufp->fullIData(oldp+39,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUOut),32);
    bufp->fullCData(oldp+40,((vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+41,((7U & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+42,((0x1fU & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+43,((0x1fU & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+44,((0x1fU & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                       >> 7U))),5);
    bufp->fullCData(oldp+45,(vlSelfRef.RISCVCPU__DOT__state),3);
    bufp->fullBit(oldp+46,((1U != (IData)(vlSelfRef.RISCVCPU__DOT__state))));
    bufp->fullBit(oldp+47,((1U == (IData)(vlSelfRef.RISCVCPU__DOT__state))));
    bufp->fullBit(oldp+48,((1U & (~ (IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_3)))));
    bufp->fullBit(oldp+49,(vlSelfRef.RISCVCPU__DOT__PCSource));
    bufp->fullCData(oldp+50,(vlSelfRef.RISCVCPU__DOT__ALUOp),2);
    bufp->fullBit(oldp+51,((1U & (~ (IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_8)))));
    bufp->fullBit(oldp+52,(vlSelfRef.RISCVCPU__DOT__PCWriteCond));
    bufp->fullIData(oldp+53,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__WriteData),32);
    bufp->fullIData(oldp+54,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUAin),32);
    bufp->fullIData(oldp+55,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__MemOut),32);
    bufp->fullIData(oldp+56,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__MemAddr),32);
    bufp->fullCData(oldp+57,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUCtl),4);
    bufp->fullIData(oldp+58,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__B),32);
    bufp->fullIData(oldp+59,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__PCOffset),32);
    bufp->fullIData(oldp+60,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ImmGen),32);
    bufp->fullBit(oldp+61,(vlSelfRef.clk));
    bufp->fullBit(oldp+62,(vlSelfRef.reset));
    bufp->fullCData(oldp+63,(vlSelfRef.RISCVCPU__DOT__ALUSrcB),2);
    bufp->fullBit(oldp+64,(((1U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
                            | ((4U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
                               & (3U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR))))));
    bufp->fullBit(oldp+65,(((4U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
                            & (0x23U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR)))));
    bufp->fullBit(oldp+66,(((5U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
                            | (IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_8))));
    bufp->fullIData(oldp+67,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                             [(0x1fU & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                        >> 0xfU))]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUResultOut),32);
    bufp->fullIData(oldp+69,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__PCValue),32);
    bufp->fullIData(oldp+70,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUBin),32);
    bufp->fullBit(oldp+71,((0U == vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUResultOut)));
    bufp->fullBit(oldp+72,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IfWritePC));
    bufp->fullIData(oldp+73,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__i),32);
    bufp->fullIData(oldp+74,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__i),32);
}
