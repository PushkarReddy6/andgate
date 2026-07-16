// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdown_counter_tb.h for the primary calling header

#include "verilated.h"

#include "Vdown_counter_tb__Syms.h"
#include "Vdown_counter_tb__Syms.h"
#include "Vdown_counter_tb___024root.h"

void Vdown_counter_tb___024root___ctor_var_reset(Vdown_counter_tb___024root* vlSelf);

Vdown_counter_tb___024root::Vdown_counter_tb___024root(Vdown_counter_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdown_counter_tb___024root___ctor_var_reset(this);
}

void Vdown_counter_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdown_counter_tb___024root::~Vdown_counter_tb___024root() {
}
