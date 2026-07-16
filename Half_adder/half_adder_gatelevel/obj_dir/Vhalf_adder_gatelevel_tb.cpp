// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vhalf_adder_gatelevel_tb.h"
#include "Vhalf_adder_gatelevel_tb__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vhalf_adder_gatelevel_tb::Vhalf_adder_gatelevel_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vhalf_adder_gatelevel_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vhalf_adder_gatelevel_tb::Vhalf_adder_gatelevel_tb(const char* _vcname__)
    : Vhalf_adder_gatelevel_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vhalf_adder_gatelevel_tb::~Vhalf_adder_gatelevel_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vhalf_adder_gatelevel_tb___024root___eval_debug_assertions(Vhalf_adder_gatelevel_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vhalf_adder_gatelevel_tb___024root___eval_static(Vhalf_adder_gatelevel_tb___024root* vlSelf);
void Vhalf_adder_gatelevel_tb___024root___eval_initial(Vhalf_adder_gatelevel_tb___024root* vlSelf);
void Vhalf_adder_gatelevel_tb___024root___eval_settle(Vhalf_adder_gatelevel_tb___024root* vlSelf);
void Vhalf_adder_gatelevel_tb___024root___eval(Vhalf_adder_gatelevel_tb___024root* vlSelf);

void Vhalf_adder_gatelevel_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhalf_adder_gatelevel_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vhalf_adder_gatelevel_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vhalf_adder_gatelevel_tb___024root___eval_static(&(vlSymsp->TOP));
        Vhalf_adder_gatelevel_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vhalf_adder_gatelevel_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vhalf_adder_gatelevel_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vhalf_adder_gatelevel_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vhalf_adder_gatelevel_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vhalf_adder_gatelevel_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vhalf_adder_gatelevel_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vhalf_adder_gatelevel_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vhalf_adder_gatelevel_tb___024root___eval_final(Vhalf_adder_gatelevel_tb___024root* vlSelf);

VL_ATTR_COLD void Vhalf_adder_gatelevel_tb::final() {
    Vhalf_adder_gatelevel_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vhalf_adder_gatelevel_tb::hierName() const { return vlSymsp->name(); }
const char* Vhalf_adder_gatelevel_tb::modelName() const { return "Vhalf_adder_gatelevel_tb"; }
unsigned Vhalf_adder_gatelevel_tb::threads() const { return 1; }
void Vhalf_adder_gatelevel_tb::prepareClone() const { contextp()->prepareClone(); }
void Vhalf_adder_gatelevel_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vhalf_adder_gatelevel_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vhalf_adder_gatelevel_tb___024root__trace_init_top(Vhalf_adder_gatelevel_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vhalf_adder_gatelevel_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhalf_adder_gatelevel_tb___024root*>(voidSelf);
    Vhalf_adder_gatelevel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vhalf_adder_gatelevel_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vhalf_adder_gatelevel_tb___024root__trace_register(Vhalf_adder_gatelevel_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vhalf_adder_gatelevel_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vhalf_adder_gatelevel_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vhalf_adder_gatelevel_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
