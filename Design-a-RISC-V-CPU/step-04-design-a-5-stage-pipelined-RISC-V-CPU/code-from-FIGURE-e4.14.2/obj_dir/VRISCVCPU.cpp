// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRISCVCPU__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRISCVCPU::VRISCVCPU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRISCVCPU__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VRISCVCPU::VRISCVCPU(const char* _vcname__)
    : VRISCVCPU(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRISCVCPU::~VRISCVCPU() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VRISCVCPU___024root___eval_debug_assertions(VRISCVCPU___024root* vlSelf);
#endif  // VL_DEBUG
void VRISCVCPU___024root___eval_static(VRISCVCPU___024root* vlSelf);
void VRISCVCPU___024root___eval_initial(VRISCVCPU___024root* vlSelf);
void VRISCVCPU___024root___eval_settle(VRISCVCPU___024root* vlSelf);
void VRISCVCPU___024root___eval(VRISCVCPU___024root* vlSelf);

void VRISCVCPU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRISCVCPU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRISCVCPU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRISCVCPU___024root___eval_static(&(vlSymsp->TOP));
        VRISCVCPU___024root___eval_initial(&(vlSymsp->TOP));
        VRISCVCPU___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRISCVCPU___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VRISCVCPU::eventsPending() { return false; }

uint64_t VRISCVCPU::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VRISCVCPU::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VRISCVCPU___024root___eval_final(VRISCVCPU___024root* vlSelf);

VL_ATTR_COLD void VRISCVCPU::final() {
    VRISCVCPU___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRISCVCPU::hierName() const { return vlSymsp->name(); }
const char* VRISCVCPU::modelName() const { return "VRISCVCPU"; }
unsigned VRISCVCPU::threads() const { return 1; }
void VRISCVCPU::prepareClone() const { contextp()->prepareClone(); }
void VRISCVCPU::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VRISCVCPU::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VRISCVCPU___024root__trace_decl_types(VerilatedVcd* tracep);

void VRISCVCPU___024root__trace_init_top(VRISCVCPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRISCVCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISCVCPU___024root*>(voidSelf);
    VRISCVCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VRISCVCPU___024root__trace_decl_types(tracep);
    VRISCVCPU___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VRISCVCPU___024root__trace_register(VRISCVCPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRISCVCPU::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VRISCVCPU::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRISCVCPU___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
