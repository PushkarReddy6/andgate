// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux_gatelevel_tb.h for the primary calling header

#include "verilated.h"

#include "Vmux_gatelevel_tb__Syms.h"
#include "Vmux_gatelevel_tb__Syms.h"
#include "Vmux_gatelevel_tb___024root.h"

void Vmux_gatelevel_tb___024root___ctor_var_reset(Vmux_gatelevel_tb___024root* vlSelf);

Vmux_gatelevel_tb___024root::Vmux_gatelevel_tb___024root(Vmux_gatelevel_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmux_gatelevel_tb___024root___ctor_var_reset(this);
}

void Vmux_gatelevel_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmux_gatelevel_tb___024root::~Vmux_gatelevel_tb___024root() {
}
