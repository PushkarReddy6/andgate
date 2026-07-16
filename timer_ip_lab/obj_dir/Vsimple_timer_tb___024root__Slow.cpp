// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_timer_tb.h for the primary calling header

#include "verilated.h"

#include "Vsimple_timer_tb__Syms.h"
#include "Vsimple_timer_tb__Syms.h"
#include "Vsimple_timer_tb___024root.h"

void Vsimple_timer_tb___024root___ctor_var_reset(Vsimple_timer_tb___024root* vlSelf);

Vsimple_timer_tb___024root::Vsimple_timer_tb___024root(Vsimple_timer_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsimple_timer_tb___024root___ctor_var_reset(this);
}

void Vsimple_timer_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsimple_timer_tb___024root::~Vsimple_timer_tb___024root() {
}
