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
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+1,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__PC),32);
        bufp->chgIData(oldp+2,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__MDR),32);
        bufp->chgIData(oldp+3,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[0]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[1]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[2]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[3]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[4]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[5]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[6]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[7]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[8]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[9]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[10]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[11]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[12]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[13]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[14]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[15]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[16]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[17]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[18]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[19]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[20]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[21]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[22]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[23]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[24]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[25]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[26]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[27]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[28]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[29]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[30]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[31]),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+35,((0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR)),7);
        bufp->chgBit(oldp+36,(((3U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR)) 
                               | (0x23U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR)))));
        bufp->chgIData(oldp+37,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR),32);
        bufp->chgIData(oldp+38,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUOut),32);
        bufp->chgCData(oldp+39,((vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+40,((7U & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+41,((0x1fU & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+42,((0x1fU & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+43,((0x1fU & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                          >> 7U))),5);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+44,(vlSelfRef.RISCVCPU__DOT__state),3);
        bufp->chgBit(oldp+45,((1U != (IData)(vlSelfRef.RISCVCPU__DOT__state))));
        bufp->chgBit(oldp+46,((1U == (IData)(vlSelfRef.RISCVCPU__DOT__state))));
        bufp->chgBit(oldp+47,((1U & (~ (IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_3)))));
        bufp->chgBit(oldp+48,(vlSelfRef.RISCVCPU__DOT__PCSource));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+49,(vlSelfRef.RISCVCPU__DOT__ALUOp),2);
        bufp->chgBit(oldp+50,((1U & (~ (IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_8)))));
        bufp->chgBit(oldp+51,(vlSelfRef.RISCVCPU__DOT__PCWriteCond));
        bufp->chgIData(oldp+52,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__WriteData),32);
        bufp->chgIData(oldp+53,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUAin),32);
        bufp->chgIData(oldp+54,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__MemOut),32);
        bufp->chgIData(oldp+55,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__MemAddr),32);
        bufp->chgCData(oldp+56,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUCtl),4);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+57,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__B),32);
        bufp->chgIData(oldp+58,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__PCOffset),32);
        bufp->chgIData(oldp+59,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ImmGen),32);
    }
    bufp->chgBit(oldp+60,(vlSelfRef.clk));
    bufp->chgBit(oldp+61,(vlSelfRef.reset));
    bufp->chgCData(oldp+62,(vlSelfRef.RISCVCPU__DOT__ALUSrcB),2);
    bufp->chgBit(oldp+63,(((1U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
                           | ((4U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
                              & (3U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR))))));
    bufp->chgBit(oldp+64,(((4U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
                           & (0x23U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR)))));
    bufp->chgBit(oldp+65,(((5U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
                           | (IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_8))));
    bufp->chgIData(oldp+66,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                            [(0x1fU & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                       >> 0xfU))]),32);
    bufp->chgIData(oldp+67,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUResultOut),32);
    bufp->chgIData(oldp+68,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__PCValue),32);
    bufp->chgIData(oldp+69,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUBin),32);
    bufp->chgBit(oldp+70,((0U == vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUResultOut)));
    bufp->chgBit(oldp+71,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IfWritePC));
    bufp->chgIData(oldp+72,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__i),32);
    bufp->chgIData(oldp+73,(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__i),32);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
