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
    tracep->declBit(c+60,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("RISCVCPU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+60,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"LW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+64,0,"SW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+65,0,"BEQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+66,0,"R_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+67,0,"I_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+68,0,"NOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("Regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+34,0,"IDEXA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"IDEXB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"EXMEMB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"EXMEMALUOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"MEMWBValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"IFIDIR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"IDEXIR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"EXMEMIR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"MEMWBIR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"IFIDrs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"IFIDrs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+45,0,"MEMWBrd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"IDEXrs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+47,0,"IDEXrs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+48,0,"EXMEMrd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+49,0,"IDEXop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+50,0,"EXMEMop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+51,0,"MEMWBop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+52,0,"Ain",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"Bin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"bypassAfromMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"bypassAfromALUinWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"bypassBfromMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"bypassBfromALUinWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"bypassAfromLDinWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"bypassBfromLDinWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
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
    bufp->fullCData(oldp+63,(3U),7);
    bufp->fullCData(oldp+64,(0x23U),7);
    bufp->fullCData(oldp+65,(0x63U),7);
    bufp->fullCData(oldp+66,(0x33U),7);
    bufp->fullCData(oldp+67,(0x13U),7);
    bufp->fullIData(oldp+68,(0x13U),32);
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
    bufp->fullIData(oldp+1,(vlSelfRef.RISCVCPU__DOT__PC),32);
    bufp->fullIData(oldp+2,(vlSelfRef.RISCVCPU__DOT__Regs[0]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.RISCVCPU__DOT__Regs[1]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.RISCVCPU__DOT__Regs[2]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.RISCVCPU__DOT__Regs[3]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.RISCVCPU__DOT__Regs[4]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.RISCVCPU__DOT__Regs[5]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.RISCVCPU__DOT__Regs[6]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.RISCVCPU__DOT__Regs[7]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.RISCVCPU__DOT__Regs[8]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.RISCVCPU__DOT__Regs[9]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.RISCVCPU__DOT__Regs[10]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.RISCVCPU__DOT__Regs[11]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.RISCVCPU__DOT__Regs[12]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.RISCVCPU__DOT__Regs[13]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.RISCVCPU__DOT__Regs[14]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.RISCVCPU__DOT__Regs[15]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.RISCVCPU__DOT__Regs[16]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.RISCVCPU__DOT__Regs[17]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.RISCVCPU__DOT__Regs[18]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.RISCVCPU__DOT__Regs[19]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.RISCVCPU__DOT__Regs[20]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.RISCVCPU__DOT__Regs[21]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.RISCVCPU__DOT__Regs[22]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.RISCVCPU__DOT__Regs[23]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.RISCVCPU__DOT__Regs[24]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.RISCVCPU__DOT__Regs[25]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.RISCVCPU__DOT__Regs[26]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.RISCVCPU__DOT__Regs[27]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.RISCVCPU__DOT__Regs[28]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.RISCVCPU__DOT__Regs[29]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.RISCVCPU__DOT__Regs[30]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.RISCVCPU__DOT__Regs[31]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.RISCVCPU__DOT__IDEXA),32);
    bufp->fullIData(oldp+35,(vlSelfRef.RISCVCPU__DOT__IDEXB),32);
    bufp->fullIData(oldp+36,(vlSelfRef.RISCVCPU__DOT__EXMEMB),32);
    bufp->fullIData(oldp+37,(vlSelfRef.RISCVCPU__DOT__EXMEMALUOut),32);
    bufp->fullIData(oldp+38,(vlSelfRef.RISCVCPU__DOT__MEMWBValue),32);
    bufp->fullIData(oldp+39,(vlSelfRef.RISCVCPU__DOT__IFIDIR),32);
    bufp->fullIData(oldp+40,(vlSelfRef.RISCVCPU__DOT__IDEXIR),32);
    bufp->fullIData(oldp+41,(vlSelfRef.RISCVCPU__DOT__EXMEMIR),32);
    bufp->fullIData(oldp+42,(vlSelfRef.RISCVCPU__DOT__MEMWBIR),32);
    bufp->fullCData(oldp+43,((0x1fU & (vlSelfRef.RISCVCPU__DOT__IFIDIR 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+44,((0x1fU & (vlSelfRef.RISCVCPU__DOT__IFIDIR 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+45,((0x1fU & (vlSelfRef.RISCVCPU__DOT__MEMWBIR 
                                       >> 7U))),5);
    bufp->fullCData(oldp+46,((0x1fU & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+47,((0x1fU & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+48,((0x1fU & (vlSelfRef.RISCVCPU__DOT__EXMEMIR 
                                       >> 7U))),5);
    bufp->fullCData(oldp+49,((0x7fU & vlSelfRef.RISCVCPU__DOT__IDEXIR)),7);
    bufp->fullCData(oldp+50,((0x7fU & vlSelfRef.RISCVCPU__DOT__EXMEMIR)),7);
    bufp->fullCData(oldp+51,((0x7fU & vlSelfRef.RISCVCPU__DOT__MEMWBIR)),7);
    bufp->fullIData(oldp+52,(vlSelfRef.RISCVCPU__DOT__Ain),32);
    bufp->fullIData(oldp+53,(vlSelfRef.RISCVCPU__DOT__Bin),32);
    bufp->fullBit(oldp+54,((((0x1fU & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                       >> 0xfU)) == 
                             (0x1fU & (vlSelfRef.RISCVCPU__DOT__EXMEMIR 
                                       >> 7U))) & (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                                        >> 0xfU))) 
                                                   & (IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_1)))));
    bufp->fullBit(oldp+55,(((IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_3) 
                            & (IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_4))));
    bufp->fullBit(oldp+56,((((0x1fU & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                       >> 0x14U)) == 
                             (0x1fU & (vlSelfRef.RISCVCPU__DOT__EXMEMIR 
                                       >> 7U))) & (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                                        >> 0x14U))) 
                                                   & (IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_1)))));
    bufp->fullBit(oldp+57,(((IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_5) 
                            & (IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_4))));
    bufp->fullBit(oldp+58,(((IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_3) 
                            & (3U == (0x7fU & vlSelfRef.RISCVCPU__DOT__MEMWBIR)))));
    bufp->fullBit(oldp+59,(((IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_5) 
                            & (3U == (0x7fU & vlSelfRef.RISCVCPU__DOT__MEMWBIR)))));
    bufp->fullBit(oldp+60,(vlSelfRef.clk));
    bufp->fullBit(oldp+61,(vlSelfRef.reset));
    bufp->fullIData(oldp+62,(vlSelfRef.RISCVCPU__DOT__i),32);
}
