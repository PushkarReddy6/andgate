// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_receiver_tb.h for the primary calling header

#include "verilated.h"

#include "Vuart_receiver_tb__Syms.h"
#include "Vuart_receiver_tb___024root.h"

VL_ATTR_COLD void Vuart_receiver_tb___024root___eval_initial__TOP(Vuart_receiver_tb___024root* vlSelf);
VlCoroutine Vuart_receiver_tb___024root___eval_initial__TOP__0(Vuart_receiver_tb___024root* vlSelf);
VlCoroutine Vuart_receiver_tb___024root___eval_initial__TOP__1(Vuart_receiver_tb___024root* vlSelf);

void Vuart_receiver_tb___024root___eval_initial(Vuart_receiver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root___eval_initial\n"); );
    // Body
    Vuart_receiver_tb___024root___eval_initial__TOP(vlSelf);
    Vuart_receiver_tb___024root___eval_initial__TOP__0(vlSelf);
    Vuart_receiver_tb___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__uart_receiver_tb__DOT__clk__0 
        = vlSelf->uart_receiver_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vuart_receiver_tb___024root___eval_initial__TOP__0(Vuart_receiver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root___eval_initial__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtask_uart_receiver_tb__DOT__send_uart_frame__0__payload;
    __Vtask_uart_receiver_tb__DOT__send_uart_frame__0__payload = 0;
    CData/*7:0*/ __Vtask_uart_receiver_tb__DOT__send_uart_frame__1__payload;
    __Vtask_uart_receiver_tb__DOT__send_uart_frame__1__payload = 0;
    // Body
    vlSelf->uart_receiver_tb__DOT__clk = 0U;
    vlSelf->uart_receiver_tb__DOT__rst_n = 0U;
    vlSelf->uart_receiver_tb__DOT__serial_in = 1U;
    vlSelf->uart_receiver_tb__DOT__rx_count = 0U;
    co_await vlSelf->__VdlySched.delay(0x61a80ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       49);
    vlSelf->uart_receiver_tb__DOT__rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x30d40ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       51);
    __Vtask_uart_receiver_tb__DOT__send_uart_frame__0__payload = 0x3cU;
    vlSelf->uart_receiver_tb__DOT__serial_in = 0U;
    co_await vlSelf->__VdlySched.delay(0x847240ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       27);
    vlSelf->uart_receiver_tb__DOT__serial_in = (1U 
                                                & (IData)(__Vtask_uart_receiver_tb__DOT__send_uart_frame__0__payload));
    co_await vlSelf->__VdlySched.delay(0x847240ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       30);
    vlSelf->uart_receiver_tb__DOT__send_uart_frame__Vstatic__i = 1U;
    vlSelf->uart_receiver_tb__DOT__serial_in = (1U 
                                                & ((IData)(__Vtask_uart_receiver_tb__DOT__send_uart_frame__0__payload) 
                                                   >> 1U));
    co_await vlSelf->__VdlySched.delay(0x847240ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       30);
    vlSelf->uart_receiver_tb__DOT__send_uart_frame__Vstatic__i = 2U;
    vlSelf->uart_receiver_tb__DOT__serial_in = (1U 
                                                & ((IData)(__Vtask_uart_receiver_tb__DOT__send_uart_frame__0__payload) 
                                                   >> 2U));
    co_await vlSelf->__VdlySched.delay(0x847240ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       30);
    vlSelf->uart_receiver_tb__DOT__send_uart_frame__Vstatic__i = 3U;
    vlSelf->uart_receiver_tb__DOT__serial_in = (1U 
                                                & ((IData)(__Vtask_uart_receiver_tb__DOT__send_uart_frame__0__payload) 
                                                   >> 3U));
    co_await vlSelf->__VdlySched.delay(0x847240ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       30);
    vlSelf->uart_receiver_tb__DOT__send_uart_frame__Vstatic__i = 4U;
    vlSelf->uart_receiver_tb__DOT__serial_in = (1U 
                                                & ((IData)(__Vtask_uart_receiver_tb__DOT__send_uart_frame__0__payload) 
                                                   >> 4U));
    co_await vlSelf->__VdlySched.delay(0x847240ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       30);
    vlSelf->uart_receiver_tb__DOT__send_uart_frame__Vstatic__i = 5U;
    vlSelf->uart_receiver_tb__DOT__serial_in = (1U 
                                                & ((IData)(__Vtask_uart_receiver_tb__DOT__send_uart_frame__0__payload) 
                                                   >> 5U));
    co_await vlSelf->__VdlySched.delay(0x847240ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       30);
    vlSelf->uart_receiver_tb__DOT__send_uart_frame__Vstatic__i = 6U;
    vlSelf->uart_receiver_tb__DOT__serial_in = (1U 
                                                & ((IData)(__Vtask_uart_receiver_tb__DOT__send_uart_frame__0__payload) 
                                                   >> 6U));
    co_await vlSelf->__VdlySched.delay(0x847240ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       30);
    vlSelf->uart_receiver_tb__DOT__send_uart_frame__Vstatic__i = 7U;
    vlSelf->uart_receiver_tb__DOT__serial_in = (1U 
                                                & ((IData)(__Vtask_uart_receiver_tb__DOT__send_uart_frame__0__payload) 
                                                   >> 7U));
    co_await vlSelf->__VdlySched.delay(0x847240ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       30);
    vlSelf->uart_receiver_tb__DOT__send_uart_frame__Vstatic__i = 8U;
    vlSelf->uart_receiver_tb__DOT__serial_in = 1U;
    co_await vlSelf->__VdlySched.delay(0x847240ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       32);
    co_await vlSelf->__VdlySched.delay(0x847240ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       54);
    __Vtask_uart_receiver_tb__DOT__send_uart_frame__1__payload = 0x2fU;
    vlSelf->uart_receiver_tb__DOT__serial_in = 0U;
    co_await vlSelf->__VdlySched.delay(0x847240ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       27);
    vlSelf->uart_receiver_tb__DOT__serial_in = (1U 
                                                & (IData)(__Vtask_uart_receiver_tb__DOT__send_uart_frame__1__payload));
    co_await vlSelf->__VdlySched.delay(0x847240ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       30);
    vlSelf->uart_receiver_tb__DOT__send_uart_frame__Vstatic__i = 1U;
    vlSelf->uart_receiver_tb__DOT__serial_in = (1U 
                                                & ((IData)(__Vtask_uart_receiver_tb__DOT__send_uart_frame__1__payload) 
                                                   >> 1U));
    co_await vlSelf->__VdlySched.delay(0x847240ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       30);
    vlSelf->uart_receiver_tb__DOT__send_uart_frame__Vstatic__i = 2U;
    vlSelf->uart_receiver_tb__DOT__serial_in = (1U 
                                                & ((IData)(__Vtask_uart_receiver_tb__DOT__send_uart_frame__1__payload) 
                                                   >> 2U));
    co_await vlSelf->__VdlySched.delay(0x847240ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       30);
    vlSelf->uart_receiver_tb__DOT__send_uart_frame__Vstatic__i = 3U;
    vlSelf->uart_receiver_tb__DOT__serial_in = (1U 
                                                & ((IData)(__Vtask_uart_receiver_tb__DOT__send_uart_frame__1__payload) 
                                                   >> 3U));
    co_await vlSelf->__VdlySched.delay(0x847240ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       30);
    vlSelf->uart_receiver_tb__DOT__send_uart_frame__Vstatic__i = 4U;
    vlSelf->uart_receiver_tb__DOT__serial_in = (1U 
                                                & ((IData)(__Vtask_uart_receiver_tb__DOT__send_uart_frame__1__payload) 
                                                   >> 4U));
    co_await vlSelf->__VdlySched.delay(0x847240ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       30);
    vlSelf->uart_receiver_tb__DOT__send_uart_frame__Vstatic__i = 5U;
    vlSelf->uart_receiver_tb__DOT__serial_in = (1U 
                                                & ((IData)(__Vtask_uart_receiver_tb__DOT__send_uart_frame__1__payload) 
                                                   >> 5U));
    co_await vlSelf->__VdlySched.delay(0x847240ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       30);
    vlSelf->uart_receiver_tb__DOT__send_uart_frame__Vstatic__i = 6U;
    vlSelf->uart_receiver_tb__DOT__serial_in = (1U 
                                                & ((IData)(__Vtask_uart_receiver_tb__DOT__send_uart_frame__1__payload) 
                                                   >> 6U));
    co_await vlSelf->__VdlySched.delay(0x847240ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       30);
    vlSelf->uart_receiver_tb__DOT__send_uart_frame__Vstatic__i = 7U;
    vlSelf->uart_receiver_tb__DOT__serial_in = (1U 
                                                & ((IData)(__Vtask_uart_receiver_tb__DOT__send_uart_frame__1__payload) 
                                                   >> 7U));
    co_await vlSelf->__VdlySched.delay(0x847240ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       30);
    vlSelf->uart_receiver_tb__DOT__send_uart_frame__Vstatic__i = 8U;
    vlSelf->uart_receiver_tb__DOT__serial_in = 1U;
    co_await vlSelf->__VdlySched.delay(0x847240ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       32);
    co_await vlSelf->__VdlySched.delay(0x18d56c0ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       57);
    VL_WRITEF("Final data_out = %x\n",8,vlSelf->uart_receiver_tb__DOT__data_out);
    if ((2U == vlSelf->uart_receiver_tb__DOT__rx_count)) {
        VL_WRITEF("PASS: Two bytes received successfully\n");
    } else {
        VL_WRITEF("FAIL: Expected 2 bytes, received %0d\n",
                  32,vlSelf->uart_receiver_tb__DOT__rx_count);
    }
    co_await vlSelf->__VdlySched.delay(0x30d40ULL, 
                                       nullptr, "uart_receiver_tb.v", 
                                       64);
    VL_FINISH_MT("uart_receiver_tb.v", 65, "");
}

VL_INLINE_OPT VlCoroutine Vuart_receiver_tb___024root___eval_initial__TOP__1(Vuart_receiver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x4e20ULL, 
                                           nullptr, 
                                           "uart_receiver_tb.v", 
                                           22);
        vlSelf->uart_receiver_tb__DOT__clk = (1U & 
                                              (~ (IData)(vlSelf->uart_receiver_tb__DOT__clk)));
    }
}

void Vuart_receiver_tb___024root___eval_act(Vuart_receiver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vuart_receiver_tb___024root___nba_sequent__TOP__0(Vuart_receiver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__uart_receiver_tb__DOT__dut__DOT__clk_count;
    __Vdly__uart_receiver_tb__DOT__dut__DOT__clk_count = 0;
    CData/*1:0*/ __Vdly__uart_receiver_tb__DOT__dut__DOT__state;
    __Vdly__uart_receiver_tb__DOT__dut__DOT__state = 0;
    CData/*2:0*/ __Vdly__uart_receiver_tb__DOT__dut__DOT__bit_index;
    __Vdly__uart_receiver_tb__DOT__dut__DOT__bit_index = 0;
    // Body
    __Vdly__uart_receiver_tb__DOT__dut__DOT__bit_index 
        = vlSelf->uart_receiver_tb__DOT__dut__DOT__bit_index;
    __Vdly__uart_receiver_tb__DOT__dut__DOT__state 
        = vlSelf->uart_receiver_tb__DOT__dut__DOT__state;
    __Vdly__uart_receiver_tb__DOT__dut__DOT__clk_count 
        = vlSelf->uart_receiver_tb__DOT__dut__DOT__clk_count;
    if (VL_UNLIKELY(vlSelf->uart_receiver_tb__DOT__data_ready)) {
        vlSelf->uart_receiver_tb__DOT__rx_count = ((IData)(1U) 
                                                   + vlSelf->uart_receiver_tb__DOT__rx_count);
        VL_WRITEF("RX[%0d] @ %0t ns = %x\n",32,vlSelf->uart_receiver_tb__DOT__rx_count,
                  64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelf->uart_receiver_tb__DOT__data_out));
    }
    if (vlSelf->uart_receiver_tb__DOT__rst_n) {
        vlSelf->uart_receiver_tb__DOT__data_ready = 0U;
        if ((2U & (IData)(vlSelf->uart_receiver_tb__DOT__dut__DOT__state))) {
            if ((1U & (IData)(vlSelf->uart_receiver_tb__DOT__dut__DOT__state))) {
                if ((0xd8U == (IData)(vlSelf->uart_receiver_tb__DOT__dut__DOT__clk_count))) {
                    __Vdly__uart_receiver_tb__DOT__dut__DOT__clk_count = 0U;
                    vlSelf->uart_receiver_tb__DOT__data_out 
                        = vlSelf->uart_receiver_tb__DOT__dut__DOT__data_buf;
                    vlSelf->uart_receiver_tb__DOT__data_ready = 1U;
                    __Vdly__uart_receiver_tb__DOT__dut__DOT__state = 0U;
                } else {
                    __Vdly__uart_receiver_tb__DOT__dut__DOT__clk_count 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelf->uart_receiver_tb__DOT__dut__DOT__clk_count)));
                }
            } else if ((0xd8U == (IData)(vlSelf->uart_receiver_tb__DOT__dut__DOT__clk_count))) {
                __Vdly__uart_receiver_tb__DOT__dut__DOT__clk_count = 0U;
                vlSelf->uart_receiver_tb__DOT__dut__DOT__data_buf 
                    = (((~ ((IData)(1U) << (IData)(vlSelf->uart_receiver_tb__DOT__dut__DOT__bit_index))) 
                        & (IData)(vlSelf->uart_receiver_tb__DOT__dut__DOT__data_buf)) 
                       | (0xffU & ((IData)(vlSelf->uart_receiver_tb__DOT__dut__DOT__rx_sync) 
                                   << (IData)(vlSelf->uart_receiver_tb__DOT__dut__DOT__bit_index))));
                if ((7U == (IData)(vlSelf->uart_receiver_tb__DOT__dut__DOT__bit_index))) {
                    __Vdly__uart_receiver_tb__DOT__dut__DOT__bit_index = 0U;
                    __Vdly__uart_receiver_tb__DOT__dut__DOT__state = 3U;
                } else {
                    __Vdly__uart_receiver_tb__DOT__dut__DOT__bit_index 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->uart_receiver_tb__DOT__dut__DOT__bit_index)));
                }
            } else {
                __Vdly__uart_receiver_tb__DOT__dut__DOT__clk_count 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->uart_receiver_tb__DOT__dut__DOT__clk_count)));
            }
        } else if ((1U & (IData)(vlSelf->uart_receiver_tb__DOT__dut__DOT__state))) {
            if ((0x6cU == (IData)(vlSelf->uart_receiver_tb__DOT__dut__DOT__clk_count))) {
                __Vdly__uart_receiver_tb__DOT__dut__DOT__clk_count = 0U;
                __Vdly__uart_receiver_tb__DOT__dut__DOT__state 
                    = ((IData)(vlSelf->uart_receiver_tb__DOT__dut__DOT__rx_sync)
                        ? 0U : 2U);
            } else {
                __Vdly__uart_receiver_tb__DOT__dut__DOT__clk_count 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->uart_receiver_tb__DOT__dut__DOT__clk_count)));
            }
        } else {
            __Vdly__uart_receiver_tb__DOT__dut__DOT__bit_index = 0U;
            __Vdly__uart_receiver_tb__DOT__dut__DOT__clk_count = 0U;
            if ((1U & (~ (IData)(vlSelf->uart_receiver_tb__DOT__dut__DOT__rx_sync)))) {
                __Vdly__uart_receiver_tb__DOT__dut__DOT__state = 1U;
            }
        }
    } else {
        __Vdly__uart_receiver_tb__DOT__dut__DOT__bit_index = 0U;
        __Vdly__uart_receiver_tb__DOT__dut__DOT__state = 0U;
        __Vdly__uart_receiver_tb__DOT__dut__DOT__clk_count = 0U;
        vlSelf->uart_receiver_tb__DOT__dut__DOT__data_buf = 0U;
        vlSelf->uart_receiver_tb__DOT__data_out = 0U;
        vlSelf->uart_receiver_tb__DOT__data_ready = 0U;
    }
    vlSelf->uart_receiver_tb__DOT__dut__DOT__clk_count 
        = __Vdly__uart_receiver_tb__DOT__dut__DOT__clk_count;
    vlSelf->uart_receiver_tb__DOT__dut__DOT__state 
        = __Vdly__uart_receiver_tb__DOT__dut__DOT__state;
    vlSelf->uart_receiver_tb__DOT__dut__DOT__bit_index 
        = __Vdly__uart_receiver_tb__DOT__dut__DOT__bit_index;
    vlSelf->uart_receiver_tb__DOT__dut__DOT__rx_sync 
        = vlSelf->uart_receiver_tb__DOT__dut__DOT__rx_meta;
    vlSelf->uart_receiver_tb__DOT__dut__DOT__rx_meta 
        = vlSelf->uart_receiver_tb__DOT__serial_in;
}

void Vuart_receiver_tb___024root___eval_nba(Vuart_receiver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vuart_receiver_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vuart_receiver_tb___024root___eval_triggers__act(Vuart_receiver_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_receiver_tb___024root___dump_triggers__act(Vuart_receiver_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vuart_receiver_tb___024root___timing_resume(Vuart_receiver_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_receiver_tb___024root___dump_triggers__nba(Vuart_receiver_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vuart_receiver_tb___024root___eval(Vuart_receiver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vuart_receiver_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vuart_receiver_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("uart_receiver_tb.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vuart_receiver_tb___024root___timing_resume(vlSelf);
                Vuart_receiver_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vuart_receiver_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("uart_receiver_tb.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vuart_receiver_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vuart_receiver_tb___024root___timing_resume(Vuart_receiver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vuart_receiver_tb___024root___eval_debug_assertions(Vuart_receiver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
