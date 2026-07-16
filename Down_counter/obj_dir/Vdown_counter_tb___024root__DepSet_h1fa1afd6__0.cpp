// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdown_counter_tb.h for the primary calling header

#include "verilated.h"

#include "Vdown_counter_tb__Syms.h"
#include "Vdown_counter_tb___024root.h"

VL_ATTR_COLD void Vdown_counter_tb___024root___eval_initial__TOP(Vdown_counter_tb___024root* vlSelf);
VlCoroutine Vdown_counter_tb___024root___eval_initial__TOP__0(Vdown_counter_tb___024root* vlSelf);
VlCoroutine Vdown_counter_tb___024root___eval_initial__TOP__1(Vdown_counter_tb___024root* vlSelf);

void Vdown_counter_tb___024root___eval_initial(Vdown_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdown_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdown_counter_tb___024root___eval_initial\n"); );
    // Body
    Vdown_counter_tb___024root___eval_initial__TOP(vlSelf);
    Vdown_counter_tb___024root___eval_initial__TOP__0(vlSelf);
    Vdown_counter_tb___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__down_counter_tb__DOT__clk__0 
        = vlSelf->down_counter_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__down_counter_tb__DOT__reset__0 
        = vlSelf->down_counter_tb__DOT__reset;
}

VL_INLINE_OPT VlCoroutine Vdown_counter_tb___024root___eval_initial__TOP__1(Vdown_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdown_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdown_counter_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "down_counter_tb.v", 
                                           10);
        vlSelf->__Vdlyvval__down_counter_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->down_counter_tb__DOT__clk)));
        vlSelf->__Vdlyvset__down_counter_tb__DOT__clk__v0 = 1U;
    }
}

void Vdown_counter_tb___024root___act_sequent__TOP__0(Vdown_counter_tb___024root* vlSelf);

void Vdown_counter_tb___024root___eval_act(Vdown_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdown_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdown_counter_tb___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vdown_counter_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vdown_counter_tb___024root___nba_sequent__TOP__0(Vdown_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdown_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdown_counter_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->down_counter_tb__DOT__count = ((IData)(vlSelf->down_counter_tb__DOT__reset)
                                            ? 0xfU : 
                                           (0xfU & 
                                            ((IData)(vlSelf->down_counter_tb__DOT__count) 
                                             - (IData)(1U))));
}

VL_INLINE_OPT void Vdown_counter_tb___024root___nba_sequent__TOP__1(Vdown_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdown_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdown_counter_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__down_counter_tb__DOT__clk__v0) {
        vlSelf->down_counter_tb__DOT__clk = vlSelf->__Vdlyvval__down_counter_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__down_counter_tb__DOT__clk__v0 = 0U;
    }
}

void Vdown_counter_tb___024root___eval_nba(Vdown_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdown_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdown_counter_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdown_counter_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdown_counter_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdown_counter_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vdown_counter_tb___024root___eval_triggers__act(Vdown_counter_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdown_counter_tb___024root___dump_triggers__act(Vdown_counter_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vdown_counter_tb___024root___timing_resume(Vdown_counter_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdown_counter_tb___024root___dump_triggers__nba(Vdown_counter_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vdown_counter_tb___024root___eval(Vdown_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdown_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdown_counter_tb___024root___eval\n"); );
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
            Vdown_counter_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vdown_counter_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("down_counter_tb.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vdown_counter_tb___024root___timing_resume(vlSelf);
                Vdown_counter_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vdown_counter_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("down_counter_tb.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vdown_counter_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vdown_counter_tb___024root___timing_resume(Vdown_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdown_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdown_counter_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vdown_counter_tb___024root___eval_debug_assertions(Vdown_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdown_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdown_counter_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
