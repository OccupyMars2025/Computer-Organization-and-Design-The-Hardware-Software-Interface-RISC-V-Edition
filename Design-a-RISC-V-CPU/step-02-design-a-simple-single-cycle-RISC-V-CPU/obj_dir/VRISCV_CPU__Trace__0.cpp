// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRISCV_CPU__Syms.h"


void VRISCV_CPU___024root__trace_chg_0_sub_0(VRISCV_CPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VRISCV_CPU___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root__trace_chg_0\n"); );
    // Init
    VRISCV_CPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISCV_CPU___024root*>(voidSelf);
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VRISCV_CPU___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VRISCV_CPU___024root__trace_chg_0_sub_0(VRISCV_CPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+1,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[0]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[1]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[2]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[3]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[4]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[5]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[6]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[7]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[8]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[9]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[10]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[11]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[12]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[13]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[14]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[15]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[16]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[17]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[18]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[19]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[20]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[21]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[22]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[23]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[24]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[25]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[26]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[27]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[28]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[29]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[30]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[31]),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+33,(vlSelfRef.RISCV_CPU__DOT__reg_read_data2),32);
        bufp->chgIData(oldp+34,(vlSelfRef.RISCV_CPU__DOT__first_operand_to_alu),32);
        bufp->chgIData(oldp+35,(vlSelfRef.RISCV_CPU__DOT__second_operand_to_alu),32);
        bufp->chgIData(oldp+36,(vlSelfRef.RISCV_CPU__DOT__pc),32);
        bufp->chgIData(oldp+37,(vlSelfRef.RISCV_CPU__DOT__alu_result),32);
        bufp->chgIData(oldp+38,(vlSelfRef.RISCV_CPU__DOT__instruction),32);
        bufp->chgIData(oldp+39,(vlSelfRef.RISCV_CPU__DOT__immediate),32);
        bufp->chgBit(oldp+40,((0U == vlSelfRef.RISCV_CPU__DOT__alu_result)));
        bufp->chgBit(oldp+41,(vlSelfRef.RISCV_CPU__DOT__branch));
        bufp->chgBit(oldp+42,(vlSelfRef.RISCV_CPU__DOT__mem_read));
        bufp->chgBit(oldp+43,(vlSelfRef.RISCV_CPU__DOT__mem_write));
        bufp->chgBit(oldp+44,(vlSelfRef.RISCV_CPU__DOT__reg_write));
        bufp->chgBit(oldp+45,(vlSelfRef.RISCV_CPU__DOT__alu_src_1));
        bufp->chgBit(oldp+46,(vlSelfRef.RISCV_CPU__DOT__alu_src_2));
        bufp->chgBit(oldp+47,(vlSelfRef.RISCV_CPU__DOT__mem_to_reg));
        bufp->chgCData(oldp+48,(vlSelfRef.RISCV_CPU__DOT__alu_op),2);
        bufp->chgCData(oldp+49,(vlSelfRef.RISCV_CPU__DOT__alu_control_lines),4);
        bufp->chgCData(oldp+50,(vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct3),3);
        bufp->chgCData(oldp+51,(vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct7),7);
        bufp->chgCData(oldp+52,((0x7fU & vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__memory
                                 [(0x3ffU & (vlSelfRef.RISCV_CPU__DOT__pc 
                                             >> 2U))])),7);
        bufp->chgSData(oldp+53,((0x7ffU & (vlSelfRef.RISCV_CPU__DOT__alu_result 
                                           >> 2U))),11);
        bufp->chgSData(oldp+54,((0x3ffU & (vlSelfRef.RISCV_CPU__DOT__pc 
                                           >> 2U))),10);
        bufp->chgIData(oldp+55,(((IData)(4U) + vlSelfRef.RISCV_CPU__DOT__pc)),32);
        bufp->chgIData(oldp+56,((vlSelfRef.RISCV_CPU__DOT__immediate 
                                 + vlSelfRef.RISCV_CPU__DOT__pc)),32);
        bufp->chgBit(oldp+57,(((IData)(vlSelfRef.RISCV_CPU__DOT__branch) 
                               & (0U == vlSelfRef.RISCV_CPU__DOT__alu_result))));
        bufp->chgCData(oldp+58,(vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg1),5);
        bufp->chgCData(oldp+59,(vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg2),5);
        bufp->chgCData(oldp+60,(vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__write_reg),5);
    }
    bufp->chgBit(oldp+61,(vlSelfRef.clk));
    bufp->chgBit(oldp+62,(vlSelfRef.reset));
    bufp->chgIData(oldp+63,(((0U == (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg1))
                              ? 0U : vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                             [vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg1])),32);
    bufp->chgIData(oldp+64,(((IData)(vlSelfRef.RISCV_CPU__DOT__mem_to_reg)
                              ? ((IData)(vlSelfRef.RISCV_CPU__DOT__mem_read)
                                  ? vlSelfRef.RISCV_CPU__DOT__dm_inst__DOT__memory
                                 [(0x7ffU & (vlSelfRef.RISCV_CPU__DOT__alu_result 
                                             >> 2U))]
                                  : 0U) : vlSelfRef.RISCV_CPU__DOT__alu_result)),32);
    bufp->chgIData(oldp+65,(((IData)(vlSelfRef.RISCV_CPU__DOT__mem_read)
                              ? vlSelfRef.RISCV_CPU__DOT__dm_inst__DOT__memory
                             [(0x7ffU & (vlSelfRef.RISCV_CPU__DOT__alu_result 
                                         >> 2U))] : 0U)),32);
    bufp->chgIData(oldp+66,(vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__i),32);
}

void VRISCV_CPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root__trace_cleanup\n"); );
    // Init
    VRISCV_CPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISCV_CPU___024root*>(voidSelf);
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
