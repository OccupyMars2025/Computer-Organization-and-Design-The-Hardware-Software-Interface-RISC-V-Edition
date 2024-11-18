// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRISCV_CPU__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRISCV_CPU::VRISCV_CPU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRISCV_CPU__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VRISCV_CPU::VRISCV_CPU(const char* _vcname__)
    : VRISCV_CPU(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRISCV_CPU::~VRISCV_CPU() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VRISCV_CPU___024root___eval_debug_assertions(VRISCV_CPU___024root* vlSelf);
#endif  // VL_DEBUG
void VRISCV_CPU___024root___eval_static(VRISCV_CPU___024root* vlSelf);
void VRISCV_CPU___024root___eval_initial(VRISCV_CPU___024root* vlSelf);
void VRISCV_CPU___024root___eval_settle(VRISCV_CPU___024root* vlSelf);
void VRISCV_CPU___024root___eval(VRISCV_CPU___024root* vlSelf);

void VRISCV_CPU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRISCV_CPU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRISCV_CPU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRISCV_CPU___024root___eval_static(&(vlSymsp->TOP));
        VRISCV_CPU___024root___eval_initial(&(vlSymsp->TOP));
        VRISCV_CPU___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRISCV_CPU___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VRISCV_CPU::eventsPending() { return false; }

uint64_t VRISCV_CPU::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VRISCV_CPU::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VRISCV_CPU___024root___eval_final(VRISCV_CPU___024root* vlSelf);

VL_ATTR_COLD void VRISCV_CPU::final() {
    VRISCV_CPU___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRISCV_CPU::hierName() const { return vlSymsp->name(); }
const char* VRISCV_CPU::modelName() const { return "VRISCV_CPU"; }
unsigned VRISCV_CPU::threads() const { return 1; }
void VRISCV_CPU::prepareClone() const { contextp()->prepareClone(); }
void VRISCV_CPU::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VRISCV_CPU::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VRISCV_CPU___024root__trace_decl_types(VerilatedVcd* tracep);

void VRISCV_CPU___024root__trace_init_top(VRISCV_CPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRISCV_CPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISCV_CPU___024root*>(voidSelf);
    VRISCV_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VRISCV_CPU___024root__trace_decl_types(tracep);
    VRISCV_CPU___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VRISCV_CPU___024root__trace_register(VRISCV_CPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRISCV_CPU::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VRISCV_CPU::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRISCV_CPU___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
