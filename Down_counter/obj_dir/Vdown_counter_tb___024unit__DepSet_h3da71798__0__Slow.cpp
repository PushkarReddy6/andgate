// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdown_counter_tb.h for the primary calling header

#include "verilated.h"

#include "Vdown_counter_tb__Syms.h"
#include "Vdown_counter_tb___024unit.h"

VL_ATTR_COLD void Vdown_counter_tb___024unit___ctor_var_reset(Vdown_counter_tb___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdown_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdown_counter_tb___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->__VmonitorNum = VL_RAND_RESET_Q(64);
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
