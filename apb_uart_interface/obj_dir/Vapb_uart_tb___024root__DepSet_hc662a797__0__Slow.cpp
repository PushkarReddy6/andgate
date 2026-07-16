// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_uart_tb.h for the primary calling header

#include "verilated.h"

#include "Vapb_uart_tb__Syms.h"
#include "Vapb_uart_tb___024root.h"

VL_ATTR_COLD void Vapb_uart_tb___024root___eval_static__TOP(Vapb_uart_tb___024root* vlSelf);

VL_ATTR_COLD void Vapb_uart_tb___024root___eval_static(Vapb_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root___eval_static\n"); );
    // Body
    Vapb_uart_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vapb_uart_tb___024root___eval_static__TOP(Vapb_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->apb_uart_tb__DOT__clk = 0U;
}

VL_ATTR_COLD void Vapb_uart_tb___024root___eval_final(Vapb_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vapb_uart_tb___024root___eval_settle(Vapb_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_uart_tb___024root___dump_triggers__act(Vapb_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge apb_uart_tb.clk or negedge apb_uart_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge apb_uart_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_uart_tb___024root___dump_triggers__nba(Vapb_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge apb_uart_tb.clk or negedge apb_uart_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge apb_uart_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vapb_uart_tb___024root___ctor_var_reset(Vapb_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->apb_uart_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->apb_uart_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->apb_uart_tb__DOT__PADDR = VL_RAND_RESET_I(32);
    vlSelf->apb_uart_tb__DOT__PWDATA = VL_RAND_RESET_I(32);
    vlSelf->apb_uart_tb__DOT__PWRITE = VL_RAND_RESET_I(1);
    vlSelf->apb_uart_tb__DOT__PSEL = VL_RAND_RESET_I(1);
    vlSelf->apb_uart_tb__DOT__PENABLE = VL_RAND_RESET_I(1);
    vlSelf->apb_uart_tb__DOT__PRDATA = VL_RAND_RESET_I(32);
    vlSelf->apb_uart_tb__DOT__PREADY = VL_RAND_RESET_I(1);
    vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_data = VL_RAND_RESET_I(8);
    vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_write = VL_RAND_RESET_I(1);
    vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__rx_data = VL_RAND_RESET_I(8);
    vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__rx_ready = VL_RAND_RESET_I(1);
    vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_busy = VL_RAND_RESET_I(1);
    vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__uart_inst__DOT__tx_reg = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__apb_uart_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__apb_uart_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
