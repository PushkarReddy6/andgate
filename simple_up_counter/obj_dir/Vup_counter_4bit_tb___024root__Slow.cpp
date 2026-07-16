// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vup_counter_4bit_tb.h for the primary calling header

#include "verilated.h"

#include "Vup_counter_4bit_tb__Syms.h"
#include "Vup_counter_4bit_tb__Syms.h"
#include "Vup_counter_4bit_tb___024root.h"

void Vup_counter_4bit_tb___024root___ctor_var_reset(Vup_counter_4bit_tb___024root* vlSelf);

Vup_counter_4bit_tb___024root::Vup_counter_4bit_tb___024root(Vup_counter_4bit_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vup_counter_4bit_tb___024root___ctor_var_reset(this);
}

void Vup_counter_4bit_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vup_counter_4bit_tb___024root::~Vup_counter_4bit_tb___024root() {
}
