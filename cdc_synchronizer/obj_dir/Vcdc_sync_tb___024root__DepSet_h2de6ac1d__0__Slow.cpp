// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcdc_sync_tb.h for the primary calling header

#include "verilated.h"

#include "Vcdc_sync_tb__Syms.h"
#include "Vcdc_sync_tb___024root.h"

VL_ATTR_COLD void Vcdc_sync_tb___024root___eval_static__TOP(Vcdc_sync_tb___024root* vlSelf);

VL_ATTR_COLD void Vcdc_sync_tb___024root___eval_static(Vcdc_sync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_sync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_sync_tb___024root___eval_static\n"); );
    // Body
    Vcdc_sync_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vcdc_sync_tb___024root___eval_static__TOP(Vcdc_sync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_sync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_sync_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->cdc_sync_tb__DOT__clk = 0U;
    vlSelf->cdc_sync_tb__DOT__async_in = 0U;
}

VL_ATTR_COLD void Vcdc_sync_tb___024root___eval_final(Vcdc_sync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_sync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_sync_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vcdc_sync_tb___024root___eval_settle(Vcdc_sync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_sync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_sync_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcdc_sync_tb___024root___dump_triggers__act(Vcdc_sync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_sync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_sync_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge cdc_sync_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcdc_sync_tb___024root___dump_triggers__nba(Vcdc_sync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_sync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_sync_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge cdc_sync_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcdc_sync_tb___024root___ctor_var_reset(Vcdc_sync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_sync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_sync_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->cdc_sync_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cdc_sync_tb__DOT__async_in = VL_RAND_RESET_I(1);
    vlSelf->cdc_sync_tb__DOT__synced = VL_RAND_RESET_I(1);
    vlSelf->cdc_sync_tb__DOT__uut__DOT__stage1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cdc_sync_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
}
