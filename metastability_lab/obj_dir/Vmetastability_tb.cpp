// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmetastability_tb.h"
#include "Vmetastability_tb__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmetastability_tb::Vmetastability_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmetastability_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmetastability_tb::Vmetastability_tb(const char* _vcname__)
    : Vmetastability_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmetastability_tb::~Vmetastability_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmetastability_tb___024root___eval_debug_assertions(Vmetastability_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vmetastability_tb___024root___eval_static(Vmetastability_tb___024root* vlSelf);
void Vmetastability_tb___024root___eval_initial(Vmetastability_tb___024root* vlSelf);
void Vmetastability_tb___024root___eval_settle(Vmetastability_tb___024root* vlSelf);
void Vmetastability_tb___024root___eval(Vmetastability_tb___024root* vlSelf);

void Vmetastability_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmetastability_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmetastability_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmetastability_tb___024root___eval_static(&(vlSymsp->TOP));
        Vmetastability_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vmetastability_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmetastability_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vmetastability_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vmetastability_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vmetastability_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vmetastability_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vmetastability_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmetastability_tb___024root___eval_final(Vmetastability_tb___024root* vlSelf);

VL_ATTR_COLD void Vmetastability_tb::final() {
    Vmetastability_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmetastability_tb::hierName() const { return vlSymsp->name(); }
const char* Vmetastability_tb::modelName() const { return "Vmetastability_tb"; }
unsigned Vmetastability_tb::threads() const { return 1; }
void Vmetastability_tb::prepareClone() const { contextp()->prepareClone(); }
void Vmetastability_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmetastability_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmetastability_tb___024root__trace_init_top(Vmetastability_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmetastability_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmetastability_tb___024root*>(voidSelf);
    Vmetastability_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vmetastability_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vmetastability_tb___024root__trace_register(Vmetastability_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmetastability_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmetastability_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmetastability_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
