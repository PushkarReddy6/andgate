// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmetastability_tb.h for the primary calling header

#include "verilated.h"

#include "Vmetastability_tb__Syms.h"
#include "Vmetastability_tb__Syms.h"
#include "Vmetastability_tb___024root.h"

void Vmetastability_tb___024root___ctor_var_reset(Vmetastability_tb___024root* vlSelf);

Vmetastability_tb___024root::Vmetastability_tb___024root(Vmetastability_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmetastability_tb___024root___ctor_var_reset(this);
}

void Vmetastability_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmetastability_tb___024root::~Vmetastability_tb___024root() {
}
