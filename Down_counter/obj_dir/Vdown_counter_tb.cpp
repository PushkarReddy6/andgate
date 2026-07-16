// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdown_counter_tb.h"
#include "Vdown_counter_tb__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdown_counter_tb::Vdown_counter_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdown_counter_tb__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdown_counter_tb::Vdown_counter_tb(const char* _vcname__)
    : Vdown_counter_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdown_counter_tb::~Vdown_counter_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdown_counter_tb___024root___eval_debug_assertions(Vdown_counter_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vdown_counter_tb___024root___eval_static(Vdown_counter_tb___024root* vlSelf);
void Vdown_counter_tb___024root___eval_initial(Vdown_counter_tb___024root* vlSelf);
void Vdown_counter_tb___024root___eval_settle(Vdown_counter_tb___024root* vlSelf);
void Vdown_counter_tb___024root___eval(Vdown_counter_tb___024root* vlSelf);

void Vdown_counter_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdown_counter_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdown_counter_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdown_counter_tb___024root___eval_static(&(vlSymsp->TOP));
        Vdown_counter_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vdown_counter_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdown_counter_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vdown_counter_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vdown_counter_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vdown_counter_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vdown_counter_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vdown_counter_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdown_counter_tb___024root___eval_final(Vdown_counter_tb___024root* vlSelf);

VL_ATTR_COLD void Vdown_counter_tb::final() {
    Vdown_counter_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdown_counter_tb::hierName() const { return vlSymsp->name(); }
const char* Vdown_counter_tb::modelName() const { return "Vdown_counter_tb"; }
unsigned Vdown_counter_tb::threads() const { return 1; }
void Vdown_counter_tb::prepareClone() const { contextp()->prepareClone(); }
void Vdown_counter_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdown_counter_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdown_counter_tb___024root__trace_init_top(Vdown_counter_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdown_counter_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdown_counter_tb___024root*>(voidSelf);
    Vdown_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vdown_counter_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vdown_counter_tb___024root__trace_register(Vdown_counter_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdown_counter_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdown_counter_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdown_counter_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
