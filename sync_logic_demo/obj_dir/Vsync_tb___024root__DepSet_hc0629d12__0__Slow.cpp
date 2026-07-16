// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsync_tb.h for the primary calling header

#include "verilated.h"

#include "Vsync_tb__Syms.h"
#include "Vsync_tb___024root.h"

VL_ATTR_COLD void Vsync_tb___024root___eval_static__TOP(Vsync_tb___024root* vlSelf);

VL_ATTR_COLD void Vsync_tb___024root___eval_static(Vsync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___eval_static\n"); );
    // Body
    Vsync_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vsync_tb___024root___eval_static__TOP(Vsync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->sync_tb__DOT__clk = 0U;
    vlSelf->sync_tb__DOT__async_reset = 1U;
    vlSelf->sync_tb__DOT__async_signal = 0U;
}

VL_ATTR_COLD void Vsync_tb___024root___eval_final(Vsync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vsync_tb___024root___eval_settle(Vsync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsync_tb___024root___dump_triggers__act(Vsync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge sync_tb.async_reset or posedge sync_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge sync_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsync_tb___024root___dump_triggers__nba(Vsync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge sync_tb.async_reset or posedge sync_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge sync_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsync_tb___024root___ctor_var_reset(Vsync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->sync_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->sync_tb__DOT__async_reset = VL_RAND_RESET_I(1);
    vlSelf->sync_tb__DOT__async_signal = VL_RAND_RESET_I(1);
    vlSelf->sync_tb__DOT__synced_reset = VL_RAND_RESET_I(1);
    vlSelf->sync_tb__DOT__synced_signal = VL_RAND_RESET_I(1);
    vlSelf->sync_tb__DOT__dut__DOT__u_reset_sync__DOT__sync_ff1 = VL_RAND_RESET_I(1);
    vlSelf->sync_tb__DOT__dut__DOT__u_cdc_sync__DOT__stage1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sync_tb__DOT__async_reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sync_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
}
