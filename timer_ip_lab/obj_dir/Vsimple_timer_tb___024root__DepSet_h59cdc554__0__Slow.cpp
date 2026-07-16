// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_timer_tb.h for the primary calling header

#include "verilated.h"

#include "Vsimple_timer_tb__Syms.h"
#include "Vsimple_timer_tb___024root.h"

VL_ATTR_COLD void Vsimple_timer_tb___024root___eval_static__TOP(Vsimple_timer_tb___024root* vlSelf);

VL_ATTR_COLD void Vsimple_timer_tb___024root___eval_static(Vsimple_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root___eval_static\n"); );
    // Body
    Vsimple_timer_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vsimple_timer_tb___024root___eval_static__TOP(Vsimple_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->simple_timer_tb__DOT__clk = 0U;
    vlSelf->simple_timer_tb__DOT__rst = 1U;
    vlSelf->simple_timer_tb__DOT__start = 0U;
    vlSelf->simple_timer_tb__DOT__load_val = 0U;
}

VL_ATTR_COLD void Vsimple_timer_tb___024root___eval_final(Vsimple_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vsimple_timer_tb___024root___eval_settle(Vsimple_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_timer_tb___024root___dump_triggers__act(Vsimple_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge simple_timer_tb.clk or posedge simple_timer_tb.rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_timer_tb___024root___dump_triggers__nba(Vsimple_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge simple_timer_tb.clk or posedge simple_timer_tb.rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsimple_timer_tb___024root___ctor_var_reset(Vsimple_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->simple_timer_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->simple_timer_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->simple_timer_tb__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->simple_timer_tb__DOT__load_val = VL_RAND_RESET_I(8);
    vlSelf->simple_timer_tb__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->simple_timer_tb__DOT__uut__DOT__count = VL_RAND_RESET_I(8);
    vlSelf->simple_timer_tb__DOT__uut__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__simple_timer_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__simple_timer_tb__DOT__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
