// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vuart_receiver.h"
#include "Vuart_receiver__Syms.h"

//============================================================
// Constructors

Vuart_receiver::Vuart_receiver(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vuart_receiver__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , serial_in{vlSymsp->TOP.serial_in}
    , data_out{vlSymsp->TOP.data_out}
    , data_ready{vlSymsp->TOP.data_ready}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vuart_receiver::Vuart_receiver(const char* _vcname__)
    : Vuart_receiver(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vuart_receiver::~Vuart_receiver() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vuart_receiver___024root___eval_debug_assertions(Vuart_receiver___024root* vlSelf);
#endif  // VL_DEBUG
void Vuart_receiver___024root___eval_static(Vuart_receiver___024root* vlSelf);
void Vuart_receiver___024root___eval_initial(Vuart_receiver___024root* vlSelf);
void Vuart_receiver___024root___eval_settle(Vuart_receiver___024root* vlSelf);
void Vuart_receiver___024root___eval(Vuart_receiver___024root* vlSelf);

void Vuart_receiver::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vuart_receiver::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vuart_receiver___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vuart_receiver___024root___eval_static(&(vlSymsp->TOP));
        Vuart_receiver___024root___eval_initial(&(vlSymsp->TOP));
        Vuart_receiver___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vuart_receiver___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vuart_receiver::eventsPending() { return false; }

uint64_t Vuart_receiver::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vuart_receiver::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vuart_receiver___024root___eval_final(Vuart_receiver___024root* vlSelf);

VL_ATTR_COLD void Vuart_receiver::final() {
    Vuart_receiver___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vuart_receiver::hierName() const { return vlSymsp->name(); }
const char* Vuart_receiver::modelName() const { return "Vuart_receiver"; }
unsigned Vuart_receiver::threads() const { return 1; }
void Vuart_receiver::prepareClone() const { contextp()->prepareClone(); }
void Vuart_receiver::atClone() const {
    contextp()->threadPoolpOnClone();
}
