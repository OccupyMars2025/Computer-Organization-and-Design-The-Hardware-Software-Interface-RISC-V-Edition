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

void VRISCVCPU___024root___eval_nba(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRISCVCPU___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRISCVCPU___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VRISCVCPU___024root___nba_sequent__TOP__0(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("Register contents at time %0t:\nx00: 0x%x\nx01: 0x%x\nx02: 0x%x\nx03: 0x%x\nx04: 0x%x\nx05: 0x%x\nx06: 0x%x\nx07: 0x%x\nx08: 0x%x\nx09: 0x%x\nx10: 0x%x\nx11: 0x%x\nx12: 0x%x\nx13: 0x%x\nx14: 0x%x\nx15: 0x%x\nx16: 0x%x\nx17: 0x%x\nx18: 0x%x\nx19: 0x%x\nx20: 0x%x\nx21: 0x%x\nx22: 0x%x\nx23: 0x%x\nx24: 0x%x\nx25: 0x%x\nx26: 0x%x\nx27: 0x%x\nx28: 0x%x\nx29: 0x%x\nx30: 0x%x\nx31: 0x%x\nIMemory[00]: 0x%08x\nIMemory[01]: 0x%08x\nIMemory[02]: 0x%08x\nIMemory[03]: 0x%08x\nIMemory[04]: 0x%08x\nIMemory[05]: 0x%08x\nIMemory[06]: 0x%08x\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,32,vlSelfRef.RISCVCPU__DOT__Regs
                 [0U],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [1U],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [2U],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [3U],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [4U],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [5U],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [6U],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [7U],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [8U],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [9U],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [0xaU],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [0xbU],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [0xcU],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [0xdU],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [0xeU],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [0xfU],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [0x10U],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [0x11U],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [0x12U],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [0x13U],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [0x14U],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [0x15U],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [0x16U],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [0x17U],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [0x18U],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [0x19U],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [0x1aU],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [0x1bU],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [0x1cU],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [0x1dU],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [0x1eU],32,vlSelfRef.RISCVCPU__DOT__Regs
                 [0x1fU],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [0U],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [1U],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [2U],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [3U],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [4U],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [5U],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [6U]);
    VL_WRITEF_NX("IMemory[07]: 0x%08x\nIMemory[08]: 0x%08x\nIMemory[09]: 0x%08x\nIMemory[10]: 0x%08x\nIMemory[11]: 0x%08x\nIMemory[12]: 0x%08x\nIMemory[13]: 0x%08x\nIMemory[14]: 0x%08x\nIMemory[15]: 0x%08x\n=============================\nDMemory[00]: 0x%08x\nDMemory[01]: 0x%08x\nDMemory[02]: 0x%08x\nDMemory[03]: 0x%08x\nDMemory[04]: 0x%08x\nDMemory[05]: 0x%08x\nDMemory[06]: 0x%08x\nDMemory[07]: 0x%08x\nDMemory[08]: 0x%08x\nDMemory[09]: 0x%08x\n",0,
                 32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [7U],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [8U],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [9U],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [0xaU],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [0xbU],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [0xcU],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [0xdU],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [0xeU],32,vlSelfRef.RISCVCPU__DOT__IMemory
                 [0xfU],32,vlSelfRef.RISCVCPU__DOT__DMemory
                 [0U],32,vlSelfRef.RISCVCPU__DOT__DMemory
                 [1U],32,vlSelfRef.RISCVCPU__DOT__DMemory
                 [2U],32,vlSelfRef.RISCVCPU__DOT__DMemory
                 [3U],32,vlSelfRef.RISCVCPU__DOT__DMemory
                 [4U],32,vlSelfRef.RISCVCPU__DOT__DMemory
                 [5U],32,vlSelfRef.RISCVCPU__DOT__DMemory
                 [6U],32,vlSelfRef.RISCVCPU__DOT__DMemory
                 [7U],32,vlSelfRef.RISCVCPU__DOT__DMemory
                 [8U],32,vlSelfRef.RISCVCPU__DOT__DMemory
                 [9U]);
    vlSelfRef.RISCVCPU__DOT__i = 0xaU;
}

VL_INLINE_OPT void VRISCVCPU___024root___nba_sequent__TOP__1(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__RISCVCPU__DOT__EXMEMALUOut;
    __Vdly__RISCVCPU__DOT__EXMEMALUOut = 0;
    IData/*31:0*/ __VdlyVal__RISCVCPU__DOT__DMemory__v0;
    __VdlyVal__RISCVCPU__DOT__DMemory__v0 = 0;
    SData/*9:0*/ __VdlyDim0__RISCVCPU__DOT__DMemory__v0;
    __VdlyDim0__RISCVCPU__DOT__DMemory__v0 = 0;
    CData/*0:0*/ __VdlySet__RISCVCPU__DOT__DMemory__v0;
    __VdlySet__RISCVCPU__DOT__DMemory__v0 = 0;
    IData/*31:0*/ __VdlyVal__RISCVCPU__DOT__Regs__v0;
    __VdlyVal__RISCVCPU__DOT__Regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__RISCVCPU__DOT__Regs__v0;
    __VdlyDim0__RISCVCPU__DOT__Regs__v0 = 0;
    CData/*0:0*/ __VdlySet__RISCVCPU__DOT__Regs__v0;
    __VdlySet__RISCVCPU__DOT__Regs__v0 = 0;
    // Body
    __VdlySet__RISCVCPU__DOT__DMemory__v0 = 0U;
    __Vdly__RISCVCPU__DOT__EXMEMALUOut = vlSelfRef.RISCVCPU__DOT__EXMEMALUOut;
    __VdlySet__RISCVCPU__DOT__Regs__v0 = 0U;
    if (((((3U == (0x7fU & vlSelfRef.RISCVCPU__DOT__MEMWBIR)) 
           | (0x33U == (0x7fU & vlSelfRef.RISCVCPU__DOT__MEMWBIR))) 
          | (0x13U == (0x7fU & vlSelfRef.RISCVCPU__DOT__MEMWBIR))) 
         & (0U != (0x1fU & (vlSelfRef.RISCVCPU__DOT__MEMWBIR 
                            >> 7U))))) {
        __VdlyVal__RISCVCPU__DOT__Regs__v0 = vlSelfRef.RISCVCPU__DOT__MEMWBValue;
        __VdlyDim0__RISCVCPU__DOT__Regs__v0 = (0x1fU 
                                               & (vlSelfRef.RISCVCPU__DOT__MEMWBIR 
                                                  >> 7U));
        __VdlySet__RISCVCPU__DOT__Regs__v0 = 1U;
    }
    vlSelfRef.RISCVCPU__DOT__MEMWBIR = vlSelfRef.RISCVCPU__DOT__EXMEMIR;
    vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_4 
        = ((0x33U == (0x7fU & vlSelfRef.RISCVCPU__DOT__MEMWBIR)) 
           | (0x13U == (0x7fU & vlSelfRef.RISCVCPU__DOT__MEMWBIR)));
    if ((3U == (0x7fU & vlSelfRef.RISCVCPU__DOT__IDEXIR))) {
        __Vdly__RISCVCPU__DOT__EXMEMALUOut = (vlSelfRef.RISCVCPU__DOT__Ain 
                                              + (((- (IData)(
                                                             (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                                              >> 0x1fU))) 
                                                  << 0xbU) 
                                                 | (0x7ffU 
                                                    & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                                       >> 0x14U))));
    } else if ((0x23U == (0x7fU & vlSelfRef.RISCVCPU__DOT__IDEXIR))) {
        __Vdly__RISCVCPU__DOT__EXMEMALUOut = (vlSelfRef.RISCVCPU__DOT__Ain 
                                              + (((- (IData)(
                                                             (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                                              >> 0x1fU))) 
                                                  << 0xbU) 
                                                 | ((0x7e0U 
                                                     & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                                          >> 7U)))));
    } else if ((0x33U == (0x7fU & vlSelfRef.RISCVCPU__DOT__IDEXIR))) {
        if (VL_LIKELY((0U == (7U & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                    >> 0xcU))))) {
            if (VL_UNLIKELY((0U == (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                    >> 0x19U)))) {
                VL_WRITEF_NX("ADD operation, result(0x%x) = Ain(0x%x) + Bin(0x%x)\n",0,
                             32,vlSelfRef.RISCVCPU__DOT__EXMEMALUOut,
                             32,vlSelfRef.RISCVCPU__DOT__Ain,
                             32,vlSelfRef.RISCVCPU__DOT__Bin);
                __Vdly__RISCVCPU__DOT__EXMEMALUOut 
                    = (vlSelfRef.RISCVCPU__DOT__Ain 
                       + vlSelfRef.RISCVCPU__DOT__Bin);
            } else if (VL_LIKELY((0x20U == (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                            >> 0x19U)))) {
                __Vdly__RISCVCPU__DOT__EXMEMALUOut 
                    = (vlSelfRef.RISCVCPU__DOT__Ain 
                       - vlSelfRef.RISCVCPU__DOT__Bin);
            } else {
                VL_WRITEF_NX("Error: Invalid instruction %x\n",0,
                             32,vlSelfRef.RISCVCPU__DOT__IDEXIR);
                VL_FINISH_MT("RISCVCPU.v", 168, "");
            }
        } else {
            VL_WRITEF_NX("Not yet implemented\n",0);
            VL_FINISH_MT("RISCVCPU.v", 174, "");
        }
    } else if ((0x13U == (0x7fU & vlSelfRef.RISCVCPU__DOT__IDEXIR))) {
        if (VL_LIKELY((0U == (7U & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                    >> 0xcU))))) {
            __Vdly__RISCVCPU__DOT__EXMEMALUOut = (vlSelfRef.RISCVCPU__DOT__Ain 
                                                  + 
                                                  (((- (IData)(
                                                               (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                                                >> 0x1fU))) 
                                                    << 0xbU) 
                                                   | (0x7ffU 
                                                      & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                                         >> 0x14U))));
        } else {
            VL_WRITEF_NX("Not yet implemented\n",0);
            VL_FINISH_MT("RISCVCPU.v", 185, "");
        }
    }
    vlSelfRef.RISCVCPU__DOT__EXMEMIR = vlSelfRef.RISCVCPU__DOT__IDEXIR;
    if (((0x33U == (IData)(vlSelfRef.RISCVCPU__DOT__EXMEMop)) 
         | (0x13U == (IData)(vlSelfRef.RISCVCPU__DOT__EXMEMop)))) {
        vlSelfRef.RISCVCPU__DOT__MEMWBValue = vlSelfRef.RISCVCPU__DOT__EXMEMALUOut;
    } else if ((3U == (IData)(vlSelfRef.RISCVCPU__DOT__EXMEMop))) {
        vlSelfRef.RISCVCPU__DOT__MEMWBValue = vlSelfRef.RISCVCPU__DOT__DMemory
            [(0x3ffU & (vlSelfRef.RISCVCPU__DOT__EXMEMALUOut 
                        >> 2U))];
    } else if ((0x23U == (IData)(vlSelfRef.RISCVCPU__DOT__EXMEMop))) {
        __VdlyVal__RISCVCPU__DOT__DMemory__v0 = vlSelfRef.RISCVCPU__DOT__EXMEMB;
        __VdlyDim0__RISCVCPU__DOT__DMemory__v0 = (0x3ffU 
                                                  & (vlSelfRef.RISCVCPU__DOT__EXMEMALUOut 
                                                     >> 2U));
        __VdlySet__RISCVCPU__DOT__DMemory__v0 = 1U;
    }
    if (__VdlySet__RISCVCPU__DOT__DMemory__v0) {
        vlSelfRef.RISCVCPU__DOT__DMemory[__VdlyDim0__RISCVCPU__DOT__DMemory__v0] 
            = __VdlyVal__RISCVCPU__DOT__DMemory__v0;
    }
    vlSelfRef.RISCVCPU__DOT__EXMEMALUOut = __Vdly__RISCVCPU__DOT__EXMEMALUOut;
    vlSelfRef.RISCVCPU__DOT__EXMEMop = (0x7fU & vlSelfRef.RISCVCPU__DOT__EXMEMIR);
    vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_1 
        = ((0x33U == (0x7fU & vlSelfRef.RISCVCPU__DOT__EXMEMIR)) 
           | (0x13U == (0x7fU & vlSelfRef.RISCVCPU__DOT__EXMEMIR)));
    vlSelfRef.RISCVCPU__DOT__EXMEMB = vlSelfRef.RISCVCPU__DOT__IDEXB;
    vlSelfRef.RISCVCPU__DOT__IDEXIR = vlSelfRef.RISCVCPU__DOT__IFIDIR;
    vlSelfRef.RISCVCPU__DOT__IDEXA = vlSelfRef.RISCVCPU__DOT__Regs
        [(0x1fU & (vlSelfRef.RISCVCPU__DOT__IFIDIR 
                   >> 0xfU))];
    vlSelfRef.RISCVCPU__DOT__IDEXB = vlSelfRef.RISCVCPU__DOT__Regs
        [(0x1fU & (vlSelfRef.RISCVCPU__DOT__IFIDIR 
                   >> 0x14U))];
    vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_3 
        = (((0x1fU & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                      >> 0xfU)) == (0x1fU & (vlSelfRef.RISCVCPU__DOT__MEMWBIR 
                                             >> 7U))) 
           & (0U != (0x1fU & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                              >> 0xfU))));
    vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_5 
        = (((0x1fU & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                      >> 0x14U)) == (0x1fU & (vlSelfRef.RISCVCPU__DOT__MEMWBIR 
                                              >> 7U))) 
           & (0U != (0x1fU & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                              >> 0x14U))));
    if (__VdlySet__RISCVCPU__DOT__Regs__v0) {
        vlSelfRef.RISCVCPU__DOT__Regs[__VdlyDim0__RISCVCPU__DOT__Regs__v0] 
            = __VdlyVal__RISCVCPU__DOT__Regs__v0;
    }
    vlSelfRef.RISCVCPU__DOT__Ain = ((((0x1fU & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                                >> 0xfU)) 
                                      == (0x1fU & (vlSelfRef.RISCVCPU__DOT__EXMEMIR 
                                                   >> 7U))) 
                                     & ((0U != (0x1fU 
                                                & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                                   >> 0xfU))) 
                                        & (IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_1)))
                                     ? vlSelfRef.RISCVCPU__DOT__EXMEMALUOut
                                     : (((IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_3) 
                                         & ((IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_4) 
                                            | (3U == 
                                               (0x7fU 
                                                & vlSelfRef.RISCVCPU__DOT__MEMWBIR))))
                                         ? vlSelfRef.RISCVCPU__DOT__MEMWBValue
                                         : vlSelfRef.RISCVCPU__DOT__IDEXA));
    vlSelfRef.RISCVCPU__DOT__Bin = ((((0x1fU & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                                >> 0x14U)) 
                                      == (0x1fU & (vlSelfRef.RISCVCPU__DOT__EXMEMIR 
                                                   >> 7U))) 
                                     & ((0U != (0x1fU 
                                                & (vlSelfRef.RISCVCPU__DOT__IDEXIR 
                                                   >> 0x14U))) 
                                        & (IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_1)))
                                     ? vlSelfRef.RISCVCPU__DOT__EXMEMALUOut
                                     : (((IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_5) 
                                         & ((IData)(vlSelfRef.RISCVCPU__DOT____VdfgRegularize_ha4b3ae31_1_4) 
                                            | (3U == 
                                               (0x7fU 
                                                & vlSelfRef.RISCVCPU__DOT__MEMWBIR))))
                                         ? vlSelfRef.RISCVCPU__DOT__MEMWBValue
                                         : vlSelfRef.RISCVCPU__DOT__IDEXB));
    vlSelfRef.RISCVCPU__DOT__IFIDIR = vlSelfRef.RISCVCPU__DOT__IMemory
        [(0x3ffU & (vlSelfRef.RISCVCPU__DOT__PC >> 2U))];
    vlSelfRef.RISCVCPU__DOT__PC = ((IData)(4U) + vlSelfRef.RISCVCPU__DOT__PC);
    if (VL_UNLIKELY((0U == vlSelfRef.RISCVCPU__DOT__IFIDIR))) {
        VL_WRITEF_NX("no instruction at PC: 0x%08x\n",0,
                     32,vlSelfRef.RISCVCPU__DOT__PC);
        VL_FINISH_MT("RISCVCPU.v", 116, "");
    }
}

void VRISCVCPU___024root___eval_triggers__act(VRISCVCPU___024root* vlSelf);

bool VRISCVCPU___024root___eval_phase__act(VRISCVCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVCPU___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
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
            VL_FATAL_MT("RISCVCPU.v", 12, "", "NBA region did not converge.");
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
                VL_FATAL_MT("RISCVCPU.v", 12, "", "Active region did not converge.");
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
