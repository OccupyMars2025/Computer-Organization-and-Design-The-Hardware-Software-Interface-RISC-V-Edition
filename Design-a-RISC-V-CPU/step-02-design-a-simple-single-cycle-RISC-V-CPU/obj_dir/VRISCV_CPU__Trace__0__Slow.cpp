// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRISCV_CPU__Syms.h"


VL_ATTR_COLD void VRISCV_CPU___024root__trace_init_sub__TOP__0(VRISCV_CPU___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+62,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("RISCV_CPU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+68,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"reg_read_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"reg_read_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"reg_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"mem_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"first_operand_to_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"second_operand_to_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"alu_src_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"alu_src_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"alu_control_lines",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("alu_control_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+49,0,"alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+51,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+52,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+50,0,"alu_control_lines",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+68,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"alu_control_lines",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+38,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("choose_first_operand_to_alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+68,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("choose_second_operand_to_alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+68,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("choose_which_to_write_back_to_regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+68,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("control_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+68,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+42,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"mem_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+44,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"alu_src_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"alu_src_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("dm_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+69,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+34,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("im_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+70,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+39,0,"instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("imm_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+68,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"immediate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+68,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"zero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"pc_plus_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"branch_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+58,0,"branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("rf_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+68,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"REG_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"read_reg1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+60,0,"read_reg2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+61,0,"write_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+65,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"read_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"read_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+67,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VRISCV_CPU___024root__trace_init_top(VRISCV_CPU___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VRISCV_CPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VRISCV_CPU___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VRISCV_CPU___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRISCV_CPU___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRISCV_CPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VRISCV_CPU___024root__trace_register(VRISCV_CPU___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VRISCV_CPU___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VRISCV_CPU___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VRISCV_CPU___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VRISCV_CPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VRISCV_CPU___024root__trace_const_0_sub_0(VRISCV_CPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VRISCV_CPU___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root__trace_const_0\n"); );
    // Init
    VRISCV_CPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISCV_CPU___024root*>(voidSelf);
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRISCV_CPU___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VRISCV_CPU___024root__trace_const_0_sub_0(VRISCV_CPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+68,(0x20U),32);
    bufp->fullIData(oldp+69,(0xbU),32);
    bufp->fullIData(oldp+70,(0xaU),32);
}

VL_ATTR_COLD void VRISCV_CPU___024root__trace_full_0_sub_0(VRISCV_CPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VRISCV_CPU___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root__trace_full_0\n"); );
    // Init
    VRISCV_CPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISCV_CPU___024root*>(voidSelf);
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRISCV_CPU___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VRISCV_CPU___024root__trace_full_0_sub_0(VRISCV_CPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[1]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[2]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[3]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[4]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[5]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[6]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[7]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[8]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[9]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[10]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[11]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[12]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[13]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[14]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[15]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[16]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[17]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[18]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[19]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[20]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[21]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[22]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[23]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[24]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[25]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[26]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[27]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[28]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[29]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[30]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[31]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.RISCV_CPU__DOT__reg_read_data2),32);
    bufp->fullIData(oldp+35,(vlSelfRef.RISCV_CPU__DOT__first_operand_to_alu),32);
    bufp->fullIData(oldp+36,(vlSelfRef.RISCV_CPU__DOT__second_operand_to_alu),32);
    bufp->fullIData(oldp+37,(vlSelfRef.RISCV_CPU__DOT__pc),32);
    bufp->fullIData(oldp+38,(vlSelfRef.RISCV_CPU__DOT__alu_result),32);
    bufp->fullIData(oldp+39,(vlSelfRef.RISCV_CPU__DOT__instruction),32);
    bufp->fullIData(oldp+40,(vlSelfRef.RISCV_CPU__DOT__immediate),32);
    bufp->fullBit(oldp+41,((0U == vlSelfRef.RISCV_CPU__DOT__alu_result)));
    bufp->fullBit(oldp+42,(vlSelfRef.RISCV_CPU__DOT__branch));
    bufp->fullBit(oldp+43,(vlSelfRef.RISCV_CPU__DOT__mem_read));
    bufp->fullBit(oldp+44,(vlSelfRef.RISCV_CPU__DOT__mem_write));
    bufp->fullBit(oldp+45,(vlSelfRef.RISCV_CPU__DOT__reg_write));
    bufp->fullBit(oldp+46,(vlSelfRef.RISCV_CPU__DOT__alu_src_1));
    bufp->fullBit(oldp+47,(vlSelfRef.RISCV_CPU__DOT__alu_src_2));
    bufp->fullBit(oldp+48,(vlSelfRef.RISCV_CPU__DOT__mem_to_reg));
    bufp->fullCData(oldp+49,(vlSelfRef.RISCV_CPU__DOT__alu_op),2);
    bufp->fullCData(oldp+50,(vlSelfRef.RISCV_CPU__DOT__alu_control_lines),4);
    bufp->fullCData(oldp+51,(vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct3),3);
    bufp->fullCData(oldp+52,(vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct7),7);
    bufp->fullCData(oldp+53,((0x7fU & vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__memory
                              [(0x3ffU & (vlSelfRef.RISCV_CPU__DOT__pc 
                                          >> 2U))])),7);
    bufp->fullSData(oldp+54,((0x7ffU & (vlSelfRef.RISCV_CPU__DOT__alu_result 
                                        >> 2U))),11);
    bufp->fullSData(oldp+55,((0x3ffU & (vlSelfRef.RISCV_CPU__DOT__pc 
                                        >> 2U))),10);
    bufp->fullIData(oldp+56,(((IData)(4U) + vlSelfRef.RISCV_CPU__DOT__pc)),32);
    bufp->fullIData(oldp+57,((vlSelfRef.RISCV_CPU__DOT__immediate 
                              + vlSelfRef.RISCV_CPU__DOT__pc)),32);
    bufp->fullBit(oldp+58,(((IData)(vlSelfRef.RISCV_CPU__DOT__branch) 
                            & (0U == vlSelfRef.RISCV_CPU__DOT__alu_result))));
    bufp->fullCData(oldp+59,(vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg1),5);
    bufp->fullCData(oldp+60,(vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg2),5);
    bufp->fullCData(oldp+61,(vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__write_reg),5);
    bufp->fullBit(oldp+62,(vlSelfRef.clk));
    bufp->fullBit(oldp+63,(vlSelfRef.reset));
    bufp->fullIData(oldp+64,(((0U == (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg1))
                               ? 0U : vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                              [vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg1])),32);
    bufp->fullIData(oldp+65,(((IData)(vlSelfRef.RISCV_CPU__DOT__mem_to_reg)
                               ? ((IData)(vlSelfRef.RISCV_CPU__DOT__mem_read)
                                   ? vlSelfRef.RISCV_CPU__DOT__dm_inst__DOT__memory
                                  [(0x7ffU & (vlSelfRef.RISCV_CPU__DOT__alu_result 
                                              >> 2U))]
                                   : 0U) : vlSelfRef.RISCV_CPU__DOT__alu_result)),32);
    bufp->fullIData(oldp+66,(((IData)(vlSelfRef.RISCV_CPU__DOT__mem_read)
                               ? vlSelfRef.RISCV_CPU__DOT__dm_inst__DOT__memory
                              [(0x7ffU & (vlSelfRef.RISCV_CPU__DOT__alu_result 
                                          >> 2U))] : 0U)),32);
    bufp->fullIData(oldp+67,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__i),32);
}
