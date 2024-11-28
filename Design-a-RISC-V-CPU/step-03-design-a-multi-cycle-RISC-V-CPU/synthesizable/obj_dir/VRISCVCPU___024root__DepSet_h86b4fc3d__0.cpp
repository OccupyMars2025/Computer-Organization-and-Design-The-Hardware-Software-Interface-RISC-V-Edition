// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISCVCPU.h for the primary calling header

#include "VRISCVCPU__pch.h"
#include "VRISCVCPU___024root.h"

void VRISCVCPU___024root___eval_act(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void VRISCVCPU___024root___nba_sequent__TOP__0(VRISCVCPU___024root* vlSelf);
void VRISCVCPU___024root___nba_sequent__TOP__1(VRISCVCPU___024root* vlSelf);
void VRISCVCPU___024root___nba_sequent__TOP__2(VRISCVCPU___024root* vlSelf);
void VRISCVCPU___024root___nba_sequent__TOP__3(VRISCVCPU___024root* vlSelf);
void VRISCVCPU___024root___nba_sequent__TOP__4(VRISCVCPU___024root* vlSelf);
void VRISCVCPU___024root___nba_sequent__TOP__5(VRISCVCPU___024root* vlSelf);
void VRISCVCPU___024root___nba_sequent__TOP__6(VRISCVCPU___024root* vlSelf);
void VRISCVCPU___024root___nba_comb__TOP__0(VRISCVCPU___024root* vlSelf);
void VRISCVCPU___024root___nba_sequent__TOP__7(VRISCVCPU___024root* vlSelf);
void VRISCVCPU___024root___nba_comb__TOP__1(VRISCVCPU___024root* vlSelf);
void VRISCVCPU___024root___nba_sequent__TOP__8(VRISCVCPU___024root* vlSelf);
void VRISCVCPU___024root___nba_comb__TOP__2(VRISCVCPU___024root* vlSelf);

void VRISCVCPU___024root___eval_nba(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRISCVCPU___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRISCVCPU___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRISCVCPU___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x38ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRISCVCPU___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRISCVCPU___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRISCVCPU___024root___nba_sequent__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x1c00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRISCVCPU___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRISCVCPU___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x3c0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRISCVCPU___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x1c03ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRISCVCPU___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRISCVCPU___024root___nba_sequent__TOP__8(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRISCVCPU___024root___nba_comb__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void VRISCVCPU___024root___nba_sequent__TOP__0(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("Register contents at time %0t:\nx00: 0x%x\nx01: 0x%x\nx02: 0x%x\nx03: 0x%x\nx04: 0x%x\nx05: 0x%x\nx06: 0x%x\nx07: 0x%x\nx08: 0x%x\nx09: 0x%x\nx10: 0x%x\nx11: 0x%x\nx12: 0x%x\nx13: 0x%x\nx14: 0x%x\nx15: 0x%x\nx16: 0x%x\nx17: 0x%x\nx18: 0x%x\nx19: 0x%x\nx20: 0x%x\nx21: 0x%x\nx22: 0x%x\nx23: 0x%x\nx24: 0x%x\nx25: 0x%x\nx26: 0x%x\nx27: 0x%x\nx28: 0x%x\nx29: 0x%x\nx30: 0x%x\nx31: 0x%x\nPC=0x%08x, Memory contents at time %0t:\nMemory[00]: 0x%08x\nMemory[01]: 0x%08x\nMemory[02]: 0x%08x\nMemory[03]: 0x%08x\nMemory[04]: 0x%08x\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [0U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [1U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [2U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [3U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [4U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [5U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [6U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [7U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [8U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [9U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [0xaU],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [0xbU],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [0xcU],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [0xdU],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [0xeU],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [0xfU],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [0x10U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [0x11U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [0x12U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [0x13U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [0x14U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [0x15U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [0x16U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [0x17U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [0x18U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [0x19U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [0x1aU],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [0x1bU],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [0x1cU],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [0x1dU],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [0x1eU],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
                 [0x1fU],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__PC,
                 64,VL_TIME_UNITED_Q(1),-12,32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [0U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [1U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [2U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [3U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [4U]);
    VL_WRITEF_NX("Memory[05]: 0x%08x\nMemory[06]: 0x%08x\nMemory[07]: 0x%08x\nMemory[08]: 0x%08x\nMemory[09]: 0x%08x\nMemory[10]: 0x%08x\nMemory[11]: 0x%08x\nMemory[12]: 0x%08x\nMemory[13]: 0x%08x\nMemory[14]: 0x%08x\nMemory[15]: 0x%08x\nMemory[97]: 0x%08x\nMemory[98]: 0x%08x\nMemory[99]: 0x%08x\nMemory[100]: 0x%08x\nMemory[101]: 0x%08x\nMemory[102]: 0x%08x\nMemory[103]: 0x%08x\n",0,
                 32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [5U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [6U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [7U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [8U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [9U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [0xaU],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [0xbU],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [0xcU],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [0xdU],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [0xeU],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [0xfU],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [0x61U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [0x62U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [0x63U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [0x64U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [0x65U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [0x66U],32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
                 [0x67U]);
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__i = 0x68U;
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__i = 0x20U;
}

VL_INLINE_OPT void VRISCVCPU___024root___nba_sequent__TOP__1(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__RISCVCPU__DOT__RISCVDP__DOT__Memory__v0;
    __VdlyVal__RISCVCPU__DOT__RISCVDP__DOT__Memory__v0 = 0;
    SData/*9:0*/ __VdlyDim0__RISCVCPU__DOT__RISCVDP__DOT__Memory__v0;
    __VdlyDim0__RISCVCPU__DOT__RISCVDP__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__RISCVCPU__DOT__RISCVDP__DOT__Memory__v0;
    __VdlySet__RISCVCPU__DOT__RISCVDP__DOT__Memory__v0 = 0;
    IData/*31:0*/ __VdlyVal__RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF__v0;
    __VdlyVal__RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF__v0 = 0;
    CData/*4:0*/ __VdlyDim0__RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF__v0;
    __VdlyDim0__RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF__v0 = 0;
    CData/*0:0*/ __VdlySet__RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF__v0;
    __VdlySet__RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF__v0 = 0;
    // Body
    __VdlySet__RISCVCPU__DOT__RISCVDP__DOT__Memory__v0 = 0U;
    __VdlySet__RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF__v0 = 0U;
    if (((4U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
         & (0x23U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR)))) {
        __VdlyVal__RISCVCPU__DOT__RISCVDP__DOT__Memory__v0 
            = vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__B;
        __VdlyDim0__RISCVCPU__DOT__RISCVDP__DOT__Memory__v0 
            = (0x3ffU & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__MemAddr 
                         >> 2U));
        __VdlySet__RISCVCPU__DOT__RISCVDP__DOT__Memory__v0 = 1U;
    }
    if ((((5U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
          | (IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_8)) 
         & (0U != (0x1fU & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                            >> 7U))))) {
        __VdlyVal__RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF__v0 
            = vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__WriteData;
        __VdlyDim0__RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF__v0 
            = (0x1fU & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                        >> 7U));
        __VdlySet__RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF__v0 = 1U;
    }
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__MDR = vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__MemOut;
    if (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IfWritePC) {
        vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__PC = vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__PCValue;
    }
    if (__VdlySet__RISCVCPU__DOT__RISCVDP__DOT__Memory__v0) {
        vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory[__VdlyDim0__RISCVCPU__DOT__RISCVDP__DOT__Memory__v0] 
            = __VdlyVal__RISCVCPU__DOT__RISCVDP__DOT__Memory__v0;
    }
    if (__VdlySet__RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF__v0) {
        vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF[__VdlyDim0__RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF__v0] 
            = __VdlyVal__RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF__v0;
    }
}

extern const VlUnpacked<CData/*0:0*/, 1024> VRISCVCPU__ConstPool__TABLE_h31d5c343_0;
extern const VlUnpacked<CData/*2:0*/, 1024> VRISCVCPU__ConstPool__TABLE_h7418521f_0;

VL_INLINE_OPT void VRISCVCPU___024root___nba_sequent__TOP__2(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__Vdly__RISCVCPU__DOT__state = vlSelfRef.RISCVCPU__DOT__state;
    __Vtableidx1 = ((0x3f8U & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                               << 3U)) | (IData)(vlSelfRef.RISCVCPU__DOT__state));
    if (VRISCVCPU__ConstPool__TABLE_h31d5c343_0[__Vtableidx1]) {
        vlSelfRef.__Vdly__RISCVCPU__DOT__state = VRISCVCPU__ConstPool__TABLE_h7418521f_0
            [__Vtableidx1];
    }
}

VL_INLINE_OPT void VRISCVCPU___024root___nba_sequent__TOP__3(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___nba_sequent__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__PCValue 
        = ((IData)(vlSelfRef.RISCVCPU__DOT__PCSource)
            ? vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUOut
            : vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUResultOut);
}

VL_INLINE_OPT void VRISCVCPU___024root___nba_sequent__TOP__4(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___nba_sequent__TOP__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U == (IData)(vlSelfRef.RISCVCPU__DOT__state))) {
        vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR = vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__MemOut;
    }
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUOut = vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUResultOut;
    if (VL_UNLIKELY((0U == vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR))) {
        VL_WRITEF_NX("no instruction at PC: 0x%08x\n",0,
                     32,vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__PC);
        VL_FINISH_MT("Datapath.v", 55, "");
    }
}

VL_INLINE_OPT void VRISCVCPU___024root___nba_sequent__TOP__5(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___nba_sequent__TOP__5\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.RISCVCPU__DOT__state = vlSelfRef.__Vdly__RISCVCPU__DOT__state;
    vlSelfRef.RISCVCPU__DOT__PCSource = (1U != (IData)(vlSelfRef.RISCVCPU__DOT__state));
    vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_3 
        = ((1U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
           | (2U == (IData)(vlSelfRef.RISCVCPU__DOT__state)));
}

VL_INLINE_OPT void VRISCVCPU___024root___nba_sequent__TOP__6(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___nba_sequent__TOP__6\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUResultOut 
        = ((0U == (IData)(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUCtl))
            ? (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUAin 
               & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUBin)
            : ((1U == (IData)(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUCtl))
                ? (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUAin 
                   | vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUBin)
                : ((2U == (IData)(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUCtl))
                    ? (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUAin 
                       + vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUBin)
                    : ((6U == (IData)(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUCtl))
                        ? (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUAin 
                           - vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUBin)
                        : ((7U == (IData)(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUCtl))
                            ? ((vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUAin 
                                < vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUBin)
                                ? 1U : 0U) : ((0xcU 
                                               == (IData)(vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUCtl))
                                               ? (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUAin 
                                                  ^ vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUBin)
                                               : 0U))))));
}

VL_INLINE_OPT void VRISCVCPU___024root___nba_comb__TOP__0(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_8 
        = ((4U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
           & ((0x33U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR)) 
              | (0x13U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR))));
    vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_6 
        = ((3U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
           & (((3U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR)) 
               | (0x23U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR))) 
              | (0x13U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR))));
    vlSelfRef.RISCVCPU__DOT__PCWriteCond = ((3U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
                                            & (0x63U 
                                               == (0x7fU 
                                                   & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR)));
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__MemAddr 
        = ((1U == (IData)(vlSelfRef.RISCVCPU__DOT__state))
            ? vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__PC
            : vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUOut);
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUAin = 
        ((IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_3)
          ? vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__PC
          : vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
         [(0x1fU & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                    >> 0xfU))]);
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__WriteData 
        = ((IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_8)
            ? vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUOut
            : vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__MDR);
    vlSelfRef.RISCVCPU__DOT__ALUOp = (((IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_3) 
                                       | (IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_6))
                                       ? 0U : ((IData)(vlSelfRef.RISCVCPU__DOT__PCWriteCond)
                                                ? 1U
                                                : 2U));
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__MemOut = 
        (((1U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
          | ((4U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
             & (3U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR))))
          ? vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__Memory
         [(0x3ffU & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__MemAddr 
                     >> 2U))] : 0U);
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUCtl = 
        ((0U == (IData)(vlSelfRef.RISCVCPU__DOT__ALUOp))
          ? 2U : ((1U == (IData)(vlSelfRef.RISCVCPU__DOT__ALUOp))
                   ? 6U : ((2U == (IData)(vlSelfRef.RISCVCPU__DOT__ALUOp))
                            ? (0xfU & ((0U == (7U & 
                                               (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                >> 0xcU)))
                                        ? ((0U == (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                   >> 0x19U))
                                            ? 2U : 
                                           ((0x20U 
                                             == (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                 >> 0x19U))
                                             ? 6U : 0xfU))
                                        : ((7U == (7U 
                                                   & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                      >> 0xcU)))
                                            ? 0U : 
                                           ((6U == 
                                             (7U & 
                                              (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                               >> 0xcU)))
                                             ? 1U : 
                                            ((2U == 
                                              (7U & 
                                               (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                >> 0xcU)))
                                              ? 7U : 
                                             ((4U == 
                                               (7U 
                                                & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                   >> 0xcU)))
                                               ? 0xcU
                                               : 0xfU))))))
                            : 0xfU)));
}

VL_INLINE_OPT void VRISCVCPU___024root___nba_sequent__TOP__7(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___nba_sequent__TOP__7\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUBin = 
        ((0U == (IData)(vlSelfRef.RISCVCPU__DOT__ALUSrcB))
          ? vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__B
          : ((1U == (IData)(vlSelfRef.RISCVCPU__DOT__ALUSrcB))
              ? 4U : ((2U == (IData)(vlSelfRef.RISCVCPU__DOT__ALUSrcB))
                       ? vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ImmGen
                       : vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__PCOffset)));
}

VL_INLINE_OPT void VRISCVCPU___024root___nba_comb__TOP__1(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___nba_comb__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IfWritePC 
        = ((1U == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
           | ((IData)(vlSelfRef.RISCVCPU__DOT__PCWriteCond) 
              & (0U == vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ALUResultOut)));
}

VL_INLINE_OPT void VRISCVCPU___024root___nba_sequent__TOP__8(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___nba_sequent__TOP__8\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__ImmGen = 
        (((3U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR)) 
          | (0x13U == (0x7fU & vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR)))
          ? (((- (IData)((vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                          >> 0x1fU))) << 0xbU) | (0x7ffU 
                                                  & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                     >> 0x14U)))
          : (((- (IData)((vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                          >> 0x1fU))) << 0xbU) | ((0x7e0U 
                                                   & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                        >> 7U)))));
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__PCOffset 
        = (((- (IData)((vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                        >> 0x1fU))) << 0xcU) | ((0x800U 
                                                 & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                                                         >> 7U)))));
    vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__B = vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__regs__DOT__RF
        [(0x1fU & (vlSelfRef.RISCVCPU__DOT__RISCVDP__DOT__IR 
                   >> 0x14U))];
}

VL_INLINE_OPT void VRISCVCPU___024root___nba_comb__TOP__2(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___nba_comb__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.RISCVCPU__DOT__ALUSrcB = ((1U == (IData)(vlSelfRef.RISCVCPU__DOT__state))
                                         ? 1U : (((2U 
                                                   == (IData)(vlSelfRef.RISCVCPU__DOT__state)) 
                                                  | (IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_0_6))
                                                  ? 2U
                                                  : 0U));
}

void VRISCVCPU___024root___eval_triggers__act(VRISCVCPU___024root* vlSelf);

bool VRISCVCPU___024root___eval_phase__act(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<13> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VRISCVCPU___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VRISCVCPU___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VRISCVCPU___024root___eval_phase__nba(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VRISCVCPU___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCVCPU___024root___dump_triggers__nba(VRISCVCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCVCPU___024root___dump_triggers__act(VRISCVCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VRISCVCPU___024root___eval(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VRISCVCPU___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("RISCVCPU.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VRISCVCPU___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("RISCVCPU.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VRISCVCPU___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VRISCVCPU___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VRISCVCPU___024root___eval_debug_assertions(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
