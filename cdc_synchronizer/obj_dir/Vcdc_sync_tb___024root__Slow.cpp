// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcdc_sync_tb.h for the primary calling header

#include "verilated.h"

#include "Vcdc_sync_tb__Syms.h"
#include "Vcdc_sync_tb__Syms.h"
#include "Vcdc_sync_tb___024root.h"

void Vcdc_sync_tb___024root___ctor_var_reset(Vcdc_sync_tb___024root* vlSelf);

Vcdc_sync_tb___024root::Vcdc_sync_tb___024root(Vcdc_sync_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcdc_sync_tb___024root___ctor_var_reset(this);
}

void Vcdc_sync_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcdc_sync_tb___024root::~Vcdc_sync_tb___024root() {
}
