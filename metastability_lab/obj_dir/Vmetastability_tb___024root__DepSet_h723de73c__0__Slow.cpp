// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmetastability_tb.h for the primary calling header

#include "verilated.h"

#include "Vmetastability_tb__Syms.h"
#include "Vmetastability_tb___024root.h"

VL_ATTR_COLD void Vmetastability_tb___024root___eval_static__TOP(Vmetastability_tb___024root* vlSelf);

VL_ATTR_COLD void Vmetastability_tb___024root___eval_static(Vmetastability_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmetastability_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmetastability_tb___024root___eval_static\n"); );
    // Body
    Vmetastability_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vmetastability_tb___024root___eval_static__TOP(Vmetastability_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmetastability_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmetastability_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->metastability_tb__DOT__clk = 0U;
    vlSelf->metastability_tb__DOT__async_in = 0U;
}

VL_ATTR_COLD void Vmetastability_tb___024root___eval_final(Vmetastability_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmetastability_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmetastability_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vmetastability_tb___024root___eval_settle(Vmetastability_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmetastability_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmetastability_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmetastability_tb___024root___dump_triggers__act(Vmetastability_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmetastability_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmetastability_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge metastability_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmetastability_tb___024root___dump_triggers__nba(Vmetastability_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmetastability_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmetastability_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge metastability_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmetastability_tb___024root___ctor_var_reset(Vmetastability_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmetastability_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmetastability_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->metastability_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->metastability_tb__DOT__async_in = VL_RAND_RESET_I(1);
    vlSelf->metastability_tb__DOT__sampled = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__metastability_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
}
