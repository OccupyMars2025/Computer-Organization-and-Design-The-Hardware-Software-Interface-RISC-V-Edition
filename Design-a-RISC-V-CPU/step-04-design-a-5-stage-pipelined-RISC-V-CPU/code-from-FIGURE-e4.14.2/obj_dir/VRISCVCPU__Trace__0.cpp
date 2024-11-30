// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRISCVCPU__Syms.h"


void VRISCVCPU___024root__trace_chg_0_sub_0(VRISCVCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VRISCVCPU___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root__trace_chg_0\n"); );
    // Init
    VRISCVCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISCVCPU___024root*>(voidSelf);
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VRISCVCPU___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VRISCVCPU___024root__trace_chg_0_sub_0(VRISCVCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.RISCVCPU__DOT__PC),32);
        bufp->chgIData(oldp+1,(vlSelfRef.RISCVCPU__DOT__Regs[0]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.RISCVCPU__DOT__Regs[1]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.RISCVCPU__DOT__Regs[2]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.RISCVCPU__DOT__Regs[3]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.RISCVCPU__DOT__Regs[4]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.RISCVCPU__DOT__Regs[5]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.RISCVCPU__DOT__Regs[6]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.RISCVCPU__DOT__Regs[7]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.RISCVCPU__DOT__Regs[8]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.RISCVCPU__DOT__Regs[9]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.RISCVCPU__DOT__Regs[10]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.RISCVCPU__DOT__Regs[11]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.RISCVCPU__DOT__Regs[12]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.RISCVCPU__DOT__Regs[13]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.RISCVCPU__DOT__Regs[14]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.RISCVCPU__DOT__Regs[15]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.RISCVCPU__DOT__Regs[16]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.RISCVCPU__DOT__Regs[17]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.RISCVCPU__DOT__Regs[18]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.RISCVCPU__DOT__Regs[19]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.RISCVCPU__DOT__Regs[20]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.RISCVCPU__DOT__Regs[21]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.RISCVCPU__DOT__Regs[22]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.RISCVCPU__DOT__Regs[23]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.RISCVCPU__DOT__Regs[24]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.RISCVCPU__DOT__Regs[25]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.RISCVCPU__DOT__Regs[26]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.RISCVCPU__DOT__Regs[27]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.RISCVCPU__DOT__Regs[28]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.RISCVCPU__DOT__Regs[29]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.RISCVCPU__DOT__Regs[30]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.RISCVCPU__DOT__Regs[31]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.RISCVCPU__DOT__IDEXA),32);
        bufp->chgIData(oldp+34,(vlSelfRef.RISCVCPU__DOT__IDEXB),32);
        bufp->chgIData(oldp+35,(vlSelfRef.RISCVCPU__DOT__EXMEMB),32);
        bufp->chgIData(oldp+36,(vlSelfRef.RISCVCPU__DOT__EXMEMALUOut),32);
        bufp->chgIData(oldp+37,(vlSelfRef.RISCVCPU__DOT__MEMWBValue),32);
        bufp->chgIData(oldp+38,(vlSelfRef.RISCVCPU__DOT__IFIDIR),32);
        bufp->chgIData(oldp+39,(vlSelfRef.RISCVCPU__DOT__IDEXIR),32);
        bufp->chgIData(oldp+40,(vlSelfRef.RISCVCPU__DOT__EXMEMIR),32);
        bufp->chgIData(oldp+41,(vlSelfRef.RISCVCPU__DOT__MEMWBIR),32);
        bufp->chgCData(oldp+42,((0x1fU & (vlSelfRef.RISCVCPU__DOT__IFIDIR 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+43,((0x1fU & (vlSelfRef.RISCVCPU__DOT__IFIDIR 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+44,((0x1fU & (vlSelfRef.RISCVCPU__DOT__MEMWBIR 
                                          >> 7U))),5);
        bufp->chgCData(oldp+45,((0x1fU & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+46,((0x1fU & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+47,((0x1fU & (vlSelfRef.RISCVCPU__DOT__EXMEMIR 
                                          >> 7U))),5);
        bufp->chgCData(oldp+48,((0x7fU & vlSelfRef.RISCVCPU__DOT__IDEXIR)),7);
        bufp->chgCData(oldp+49,((0x7fU & vlSelfRef.RISCVCPU__DOT__EXMEMIR)),7);
        bufp->chgCData(oldp+50,((0x7fU & vlSelfRef.RISCVCPU__DOT__MEMWBIR)),7);
        bufp->chgIData(oldp+51,(vlSelfRef.RISCVCPU__DOT__Ain),32);
        bufp->chgIData(oldp+52,(vlSelfRef.RISCVCPU__DOT__Bin),32);
        bufp->chgBit(oldp+53,((((0x1fU & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                          >> 0xfU)) 
                                == (0x1fU & (vlSelfRef.RISCVCPU__DOT__EXMEMIR 
                                             >> 7U))) 
                               & ((0U != (0x1fU & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                                   >> 0xfU))) 
                                  & (IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_1)))));
        bufp->chgBit(oldp+54,(((IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_3) 
                               & (IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_4))));
        bufp->chgBit(oldp+55,((((0x1fU & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                          >> 0x14U)) 
                                == (0x1fU & (vlSelfRef.RISCVCPU__DOT__EXMEMIR 
                                             >> 7U))) 
                               & ((0U != (0x1fU & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                                   >> 0x14U))) 
                                  & (IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_1)))));
        bufp->chgBit(oldp+56,(((IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_5) 
                               & (IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_4))));
        bufp->chgBit(oldp+57,(((IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_3) 
                               & (3U == (0x7fU & vlSelfRef.RISCVCPU__DOT__MEMWBIR)))));
        bufp->chgBit(oldp+58,(((IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_5) 
                               & (3U == (0x7fU & vlSelfRef.RISCVCPU__DOT__MEMWBIR)))));
    }
    bufp->chgBit(oldp+59,(vlSelfRef.clk));
    bufp->chgBit(oldp+60,(vlSelfRef.reset));
    bufp->chgIData(oldp+61,(vlSelfRef.RISCVCPU__DOT__i),32);
}

void VRISCVCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root__trace_cleanup\n"); );
    // Init
    VRISCVCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISCVCPU___024root*>(voidSelf);
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
