// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_receiver.h for the primary calling header

#include "verilated.h"

#include "Vuart_receiver__Syms.h"
#include "Vuart_receiver__Syms.h"
#include "Vuart_receiver___024root.h"

void Vuart_receiver___024root___ctor_var_reset(Vuart_receiver___024root* vlSelf);

Vuart_receiver___024root::Vuart_receiver___024root(Vuart_receiver__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vuart_receiver___024root___ctor_var_reset(this);
}

void Vuart_receiver___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vuart_receiver___024root::~Vuart_receiver___024root() {
}
