// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_receiver_tb.h for the primary calling header

#include "verilated.h"

#include "Vuart_receiver_tb__Syms.h"
#include "Vuart_receiver_tb___024root.h"

VL_ATTR_COLD void Vuart_receiver_tb___024root___eval_static(Vuart_receiver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vuart_receiver_tb___024root___eval_final(Vuart_receiver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vuart_receiver_tb___024root___eval_settle(Vuart_receiver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_receiver_tb___024root___dump_triggers__act(Vuart_receiver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge uart_receiver_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_receiver_tb___024root___dump_triggers__nba(Vuart_receiver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge uart_receiver_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vuart_receiver_tb___024root___ctor_var_reset(Vuart_receiver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->uart_receiver_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->uart_receiver_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->uart_receiver_tb__DOT__serial_in = VL_RAND_RESET_I(1);
    vlSelf->uart_receiver_tb__DOT__data_out = VL_RAND_RESET_I(8);
    vlSelf->uart_receiver_tb__DOT__data_ready = VL_RAND_RESET_I(1);
    vlSelf->uart_receiver_tb__DOT__rx_count = VL_RAND_RESET_I(32);
    vlSelf->uart_receiver_tb__DOT__send_uart_frame__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->uart_receiver_tb__DOT__dut__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->uart_receiver_tb__DOT__dut__DOT__clk_count = VL_RAND_RESET_I(8);
    vlSelf->uart_receiver_tb__DOT__dut__DOT__bit_index = VL_RAND_RESET_I(3);
    vlSelf->uart_receiver_tb__DOT__dut__DOT__data_buf = VL_RAND_RESET_I(8);
    vlSelf->uart_receiver_tb__DOT__dut__DOT__rx_meta = VL_RAND_RESET_I(1);
    vlSelf->uart_receiver_tb__DOT__dut__DOT__rx_sync = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__uart_receiver_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
