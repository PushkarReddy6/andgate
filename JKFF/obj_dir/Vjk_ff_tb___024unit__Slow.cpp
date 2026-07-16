// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjk_ff_tb.h for the primary calling header

#include "verilated.h"

#include "Vjk_ff_tb__Syms.h"
#include "Vjk_ff_tb__Syms.h"
#include "Vjk_ff_tb___024unit.h"

void Vjk_ff_tb___024unit___ctor_var_reset(Vjk_ff_tb___024unit* vlSelf);

Vjk_ff_tb___024unit::Vjk_ff_tb___024unit(Vjk_ff_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vjk_ff_tb___024unit___ctor_var_reset(this);
}

void Vjk_ff_tb___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vjk_ff_tb___024unit::~Vjk_ff_tb___024unit() {
}
