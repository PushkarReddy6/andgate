// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjk_ff_tb.h for the primary calling header

#include "verilated.h"

#include "Vjk_ff_tb__Syms.h"
#include "Vjk_ff_tb___024unit.h"

VL_ATTR_COLD void Vjk_ff_tb___024unit___ctor_var_reset(Vjk_ff_tb___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vjk_ff_tb___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
