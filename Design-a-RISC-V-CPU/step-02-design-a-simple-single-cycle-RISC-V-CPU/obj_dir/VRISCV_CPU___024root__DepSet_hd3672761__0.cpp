// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISCV_CPU.h for the primary calling header

#include "VRISCV_CPU__pch.h"
#include "VRISCV_CPU___024root.h"

void VRISCV_CPU___024root___eval_act(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void VRISCV_CPU___024root___nba_sequent__TOP__0(VRISCV_CPU___024root* vlSelf);
void VRISCV_CPU___024root___nba_sequent__TOP__1(VRISCV_CPU___024root* vlSelf);
void VRISCV_CPU___024root___nba_sequent__TOP__2(VRISCV_CPU___024root* vlSelf);
void VRISCV_CPU___024root___nba_comb__TOP__0(VRISCV_CPU___024root* vlSelf);

void VRISCV_CPU___024root___eval_nba(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRISCV_CPU___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRISCV_CPU___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRISCV_CPU___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        VRISCV_CPU___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VRISCV_CPU___024root___nba_sequent__TOP__0(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("At time %0t, Memory[0x0000101C]: 0x%08x\nRegister contents at time %0t:\nx00: 0x%x\nx01: 0x%x\nx02: 0x%x\nx03: 0x%x\nx04: 0x%x\nx05: 0x%x\nx06: 0x%x\nx07: 0x%x\nx08: 0x%x\nx09: 0x%x\nx10: 0x%x\nx11: 0x%x\nx12: 0x%x\nx13: 0x%x\nx14: 0x%x\nx15: 0x%x\nx16: 0x%x\nx17: 0x%x\nx18: 0x%x\nx19: 0x%x\nx20: 0x%x\nx21: 0x%x\nx22: 0x%x\nx23: 0x%x\nx24: 0x%x\nx25: 0x%x\nx26: 0x%x\nx27: 0x%x\nx28: 0x%x\nx29: 0x%x\nx30: 0x%x\nx31: 0x%x\n------------------------------------------------------------\nTime: %0t | CLK: %b | RESET: %b\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,32,vlSelfRef.RISCV_CPU__DOT__dm_inst__DOT__memory
                 [0x407U],64,VL_TIME_UNITED_Q(1),-12,
                 32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [0U],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [1U],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [2U],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [3U],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [4U],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [5U],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [6U],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [7U],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [8U],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [9U],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [0xaU],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [0xbU],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [0xcU],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [0xdU],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [0xeU],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [0xfU],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [0x10U],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [0x11U],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [0x12U],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [0x13U],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [0x14U],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [0x15U],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [0x16U],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [0x17U],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [0x18U],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [0x19U],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [0x1aU],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [0x1bU],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [0x1cU],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [0x1dU],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [0x1eU],32,vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                 [0x1fU],64,VL_TIME_UNITED_Q(1),-12,
                 1,(IData)(vlSelfRef.clk),1,vlSelfRef.reset);
    VL_WRITEF_NX("PC:                  0x%08x\nInstruction:         0x%08x\nRegisters:\n  Read Data 1:       0x%08x\n  Read Data 2:       0x%08x\n  Write Data:        0x%08x\nImmediate:           0x%08x\nALU:\n  First Operand:     0x%08x\n  Second Operand:    0x%08x\n  ALU Result:        0x%08x\n  Zero:              %b\nControl Signals:\n  Branch:            %b\n  MemRead:           %b\n  MemWrite:          %b\n  RegWrite:          %b\n  MemToReg:          %b\n  ALUSrc_1:          %b\n  ALUSrc_2:          %b\nALU Control:\n",0,
                 32,vlSelfRef.RISCV_CPU__DOT__pc,32,
                 vlSelfRef.RISCV_CPU__DOT__instruction,
                 32,((0U == (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg1))
                      ? 0U : vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                     [vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg1]),
                 32,vlSelfRef.RISCV_CPU__DOT__reg_read_data2,
                 32,((IData)(vlSelfRef.RISCV_CPU__DOT__mem_to_reg)
                      ? ((IData)(vlSelfRef.RISCV_CPU__DOT__mem_read)
                          ? vlSelfRef.RISCV_CPU__DOT__dm_inst__DOT__memory
                         [(0x7ffU & (vlSelfRef.RISCV_CPU__DOT__alu_result 
                                     >> 2U))] : 0U)
                      : vlSelfRef.RISCV_CPU__DOT__alu_result),
                 32,vlSelfRef.RISCV_CPU__DOT__immediate,
                 32,vlSelfRef.RISCV_CPU__DOT__first_operand_to_alu,
                 32,vlSelfRef.RISCV_CPU__DOT__second_operand_to_alu,
                 32,vlSelfRef.RISCV_CPU__DOT__alu_result,
                 1,(0U == vlSelfRef.RISCV_CPU__DOT__alu_result),
                 1,(IData)(vlSelfRef.RISCV_CPU__DOT__branch),
                 1,vlSelfRef.RISCV_CPU__DOT__mem_read,
                 1,(IData)(vlSelfRef.RISCV_CPU__DOT__mem_write),
                 1,vlSelfRef.RISCV_CPU__DOT__reg_write,
                 1,(IData)(vlSelfRef.RISCV_CPU__DOT__mem_to_reg),
                 1,vlSelfRef.RISCV_CPU__DOT__alu_src_1,
                 1,(IData)(vlSelfRef.RISCV_CPU__DOT__alu_src_2));
    VL_WRITEF_NX("  ALU Op:            %b\n  ALU Control Lines: %b\n------------------------------------------------------------\n\n",0,
                 2,vlSelfRef.RISCV_CPU__DOT__alu_op,
                 4,(IData)(vlSelfRef.RISCV_CPU__DOT__alu_control_lines));
    vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__i = 0x20U;
}

VL_INLINE_OPT void VRISCV_CPU___024root___nba_sequent__TOP__1(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__RISCV_CPU__DOT__rf_inst__DOT__registers__v0;
    __VdlyVal__RISCV_CPU__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__RISCV_CPU__DOT__rf_inst__DOT__registers__v0;
    __VdlyDim0__RISCV_CPU__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__RISCV_CPU__DOT__rf_inst__DOT__registers__v0;
    __VdlySet__RISCV_CPU__DOT__rf_inst__DOT__registers__v0 = 0;
    IData/*31:0*/ __VdlyVal__RISCV_CPU__DOT__dm_inst__DOT__memory__v0;
    __VdlyVal__RISCV_CPU__DOT__dm_inst__DOT__memory__v0 = 0;
    SData/*10:0*/ __VdlyDim0__RISCV_CPU__DOT__dm_inst__DOT__memory__v0;
    __VdlyDim0__RISCV_CPU__DOT__dm_inst__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__RISCV_CPU__DOT__dm_inst__DOT__memory__v0;
    __VdlySet__RISCV_CPU__DOT__dm_inst__DOT__memory__v0 = 0;
    // Body
    __VdlySet__RISCV_CPU__DOT__dm_inst__DOT__memory__v0 = 0U;
    __VdlySet__RISCV_CPU__DOT__rf_inst__DOT__registers__v0 = 0U;
    if (vlSelfRef.RISCV_CPU__DOT__mem_write) {
        __VdlyVal__RISCV_CPU__DOT__dm_inst__DOT__memory__v0 
            = vlSelfRef.RISCV_CPU__DOT__reg_read_data2;
        __VdlyDim0__RISCV_CPU__DOT__dm_inst__DOT__memory__v0 
            = (0x7ffU & (vlSelfRef.RISCV_CPU__DOT__alu_result 
                         >> 2U));
        __VdlySet__RISCV_CPU__DOT__dm_inst__DOT__memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.RISCV_CPU__DOT__reg_write) 
         & (0U != (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__write_reg)))) {
        __VdlyVal__RISCV_CPU__DOT__rf_inst__DOT__registers__v0 
            = ((IData)(vlSelfRef.RISCV_CPU__DOT__mem_to_reg)
                ? ((IData)(vlSelfRef.RISCV_CPU__DOT__mem_read)
                    ? vlSelfRef.RISCV_CPU__DOT__dm_inst__DOT__memory
                   [(0x7ffU & (vlSelfRef.RISCV_CPU__DOT__alu_result 
                               >> 2U))] : 0U) : vlSelfRef.RISCV_CPU__DOT__alu_result);
        __VdlyDim0__RISCV_CPU__DOT__rf_inst__DOT__registers__v0 
            = vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__write_reg;
        __VdlySet__RISCV_CPU__DOT__rf_inst__DOT__registers__v0 = 1U;
    }
    if (__VdlySet__RISCV_CPU__DOT__dm_inst__DOT__memory__v0) {
        vlSelfRef.RISCV_CPU__DOT__dm_inst__DOT__memory[__VdlyDim0__RISCV_CPU__DOT__dm_inst__DOT__memory__v0] 
            = __VdlyVal__RISCV_CPU__DOT__dm_inst__DOT__memory__v0;
    }
    if (__VdlySet__RISCV_CPU__DOT__rf_inst__DOT__registers__v0) {
        vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers[__VdlyDim0__RISCV_CPU__DOT__rf_inst__DOT__registers__v0] 
            = __VdlyVal__RISCV_CPU__DOT__rf_inst__DOT__registers__v0;
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> VRISCV_CPU__ConstPool__TABLE_ha75972e0_0;
extern const VlUnpacked<CData/*1:0*/, 128> VRISCV_CPU__ConstPool__TABLE_hfa9a92dd_0;
extern const VlUnpacked<CData/*0:0*/, 128> VRISCV_CPU__ConstPool__TABLE_h5ef68bce_0;
extern const VlUnpacked<CData/*0:0*/, 128> VRISCV_CPU__ConstPool__TABLE_h0573d0e5_0;
extern const VlUnpacked<CData/*0:0*/, 128> VRISCV_CPU__ConstPool__TABLE_he61ee599_0;
extern const VlUnpacked<CData/*0:0*/, 128> VRISCV_CPU__ConstPool__TABLE_hb3b45c1a_0;

VL_INLINE_OPT void VRISCV_CPU___024root___nba_sequent__TOP__2(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.RISCV_CPU__DOT__pc = ((IData)(vlSelfRef.reset)
                                     ? 0U : (((IData)(vlSelfRef.RISCV_CPU__DOT__branch) 
                                              & (0U 
                                                 == vlSelfRef.RISCV_CPU__DOT__alu_result))
                                              ? vlSelfRef.RISCV_CPU__DOT__pc_inst__DOT__branch_target
                                              : vlSelfRef.RISCV_CPU__DOT__pc_inst__DOT__pc_plus_4));
    vlSelfRef.RISCV_CPU__DOT__pc_inst__DOT__pc_plus_4 
        = ((IData)(4U) + vlSelfRef.RISCV_CPU__DOT__pc);
    vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__write_reg 
        = (0x1fU & (vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__memory
                    [(0x3ffU & (vlSelfRef.RISCV_CPU__DOT__pc 
                                >> 2U))] >> 7U));
    vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct3 
        = (7U & (vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__memory
                 [(0x3ffU & (vlSelfRef.RISCV_CPU__DOT__pc 
                             >> 2U))] >> 0xcU));
    vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct7 
        = (vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__memory
           [(0x3ffU & (vlSelfRef.RISCV_CPU__DOT__pc 
                       >> 2U))] >> 0x19U);
    vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg1 
        = (0x1fU & (vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__memory
                    [(0x3ffU & (vlSelfRef.RISCV_CPU__DOT__pc 
                                >> 2U))] >> 0xfU));
    vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg2 
        = (0x1fU & (vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__memory
                    [(0x3ffU & (vlSelfRef.RISCV_CPU__DOT__pc 
                                >> 2U))] >> 0x14U));
    vlSelfRef.RISCV_CPU__DOT__instruction = vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__memory
        [(0x3ffU & (vlSelfRef.RISCV_CPU__DOT__pc >> 2U))];
    __Vtableidx1 = (0x7fU & vlSelfRef.RISCV_CPU__DOT__im_inst__DOT__memory
                    [(0x3ffU & (vlSelfRef.RISCV_CPU__DOT__pc 
                                >> 2U))]);
    vlSelfRef.RISCV_CPU__DOT__branch = VRISCV_CPU__ConstPool__TABLE_ha75972e0_0
        [__Vtableidx1];
    vlSelfRef.RISCV_CPU__DOT__mem_read = VRISCV_CPU__ConstPool__TABLE_ha75972e0_0
        [__Vtableidx1];
    vlSelfRef.RISCV_CPU__DOT__mem_to_reg = VRISCV_CPU__ConstPool__TABLE_ha75972e0_0
        [__Vtableidx1];
    vlSelfRef.RISCV_CPU__DOT__alu_op = VRISCV_CPU__ConstPool__TABLE_hfa9a92dd_0
        [__Vtableidx1];
    vlSelfRef.RISCV_CPU__DOT__mem_write = VRISCV_CPU__ConstPool__TABLE_h5ef68bce_0
        [__Vtableidx1];
    vlSelfRef.RISCV_CPU__DOT__alu_src_1 = VRISCV_CPU__ConstPool__TABLE_h0573d0e5_0
        [__Vtableidx1];
    vlSelfRef.RISCV_CPU__DOT__alu_src_2 = VRISCV_CPU__ConstPool__TABLE_he61ee599_0
        [__Vtableidx1];
    vlSelfRef.RISCV_CPU__DOT__reg_write = VRISCV_CPU__ConstPool__TABLE_hb3b45c1a_0
        [__Vtableidx1];
    vlSelfRef.RISCV_CPU__DOT__immediate = ((0x13U == 
                                            (0x7fU 
                                             & vlSelfRef.RISCV_CPU__DOT__instruction))
                                            ? (((- (IData)(
                                                           (vlSelfRef.RISCV_CPU__DOT__instruction 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelfRef.RISCV_CPU__DOT__instruction 
                                                  >> 0x14U))
                                            : ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.RISCV_CPU__DOT__instruction))
                                                ? (0xfffff000U 
                                                   & vlSelfRef.RISCV_CPU__DOT__instruction)
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.RISCV_CPU__DOT__instruction))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelfRef.RISCV_CPU__DOT__instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelfRef.RISCV_CPU__DOT__instruction 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelfRef.RISCV_CPU__DOT__instruction 
                                                             >> 7U))))
                                                    : 0U)));
    vlSelfRef.RISCV_CPU__DOT__alu_control_lines = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.RISCV_CPU__DOT__alu_op))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.RISCV_CPU__DOT__alu_op))
                                                     ? 6U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.RISCV_CPU__DOT__alu_op))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct3))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct3))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct3))
                                                         ? 0U
                                                         : 1U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct3))
                                                         ? 
                                                        ((0x20U 
                                                          == (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct7))
                                                          ? 5U
                                                          : 7U)
                                                         : 3U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct3))
                                                        ? 0xfU
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct3))
                                                         ? 4U
                                                         : 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct7))
                                                          ? 2U
                                                          : 
                                                         ((0x20U 
                                                           == (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__alu_control_inst__funct7))
                                                           ? 6U
                                                           : 0xfU)))))
                                                      : 0xfU)));
    vlSelfRef.RISCV_CPU__DOT__pc_inst__DOT__branch_target 
        = (vlSelfRef.RISCV_CPU__DOT__immediate + vlSelfRef.RISCV_CPU__DOT__pc);
}

VL_INLINE_OPT void VRISCV_CPU___024root___nba_comb__TOP__0(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.RISCV_CPU__DOT__reg_read_data2 = ((0U 
                                                 == (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg2))
                                                 ? 0U
                                                 : 
                                                vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                                                [vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg2]);
    vlSelfRef.RISCV_CPU__DOT__first_operand_to_alu 
        = ((IData)(vlSelfRef.RISCV_CPU__DOT__alu_src_1)
            ? vlSelfRef.RISCV_CPU__DOT__pc : ((0U == (IData)(vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg1))
                                               ? 0U
                                               : vlSelfRef.RISCV_CPU__DOT__rf_inst__DOT__registers
                                              [vlSelfRef.RISCV_CPU__DOT____Vcellinp__rf_inst__read_reg1]));
    vlSelfRef.RISCV_CPU__DOT__second_operand_to_alu 
        = ((IData)(vlSelfRef.RISCV_CPU__DOT__alu_src_2)
            ? vlSelfRef.RISCV_CPU__DOT__immediate : vlSelfRef.RISCV_CPU__DOT__reg_read_data2);
    vlSelfRef.RISCV_CPU__DOT__alu_result = ((8U & (IData)(vlSelfRef.RISCV_CPU__DOT__alu_control_lines))
                                             ? 0U : 
                                            ((4U & (IData)(vlSelfRef.RISCV_CPU__DOT__alu_control_lines))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.RISCV_CPU__DOT__alu_control_lines))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.RISCV_CPU__DOT__alu_control_lines))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.RISCV_CPU__DOT__first_operand_to_alu 
                                                   - vlSelfRef.RISCV_CPU__DOT__second_operand_to_alu))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.RISCV_CPU__DOT__alu_control_lines))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.RISCV_CPU__DOT__first_operand_to_alu 
                                                   ^ vlSelfRef.RISCV_CPU__DOT__second_operand_to_alu)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.RISCV_CPU__DOT__alu_control_lines))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.RISCV_CPU__DOT__alu_control_lines))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.RISCV_CPU__DOT__first_operand_to_alu 
                                                   + vlSelfRef.RISCV_CPU__DOT__second_operand_to_alu))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.RISCV_CPU__DOT__alu_control_lines))
                                                   ? 
                                                  (vlSelfRef.RISCV_CPU__DOT__first_operand_to_alu 
                                                   | vlSelfRef.RISCV_CPU__DOT__second_operand_to_alu)
                                                   : 
                                                  (vlSelfRef.RISCV_CPU__DOT__first_operand_to_alu 
                                                   & vlSelfRef.RISCV_CPU__DOT__second_operand_to_alu)))));
}

void VRISCV_CPU___024root___eval_triggers__act(VRISCV_CPU___024root* vlSelf);

bool VRISCV_CPU___024root___eval_phase__act(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VRISCV_CPU___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VRISCV_CPU___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VRISCV_CPU___024root___eval_phase__nba(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VRISCV_CPU___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCV_CPU___024root___dump_triggers__nba(VRISCV_CPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCV_CPU___024root___dump_triggers__act(VRISCV_CPU___024root* vlSelf);
#endif  // VL_DEBUG

void VRISCV_CPU___024root___eval(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root___eval\n"); );
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
            VRISCV_CPU___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("RISCV_CPU.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VRISCV_CPU___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("RISCV_CPU.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VRISCV_CPU___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VRISCV_CPU___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VRISCV_CPU___024root___eval_debug_assertions(VRISCV_CPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_CPU___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
