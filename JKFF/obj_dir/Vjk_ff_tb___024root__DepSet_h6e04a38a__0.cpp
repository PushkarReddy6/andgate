// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjk_ff_tb.h for the primary calling header

#include "verilated.h"

#include "Vjk_ff_tb__Syms.h"
#include "Vjk_ff_tb___024root.h"

VL_ATTR_COLD void Vjk_ff_tb___024root___eval_initial__TOP(Vjk_ff_tb___024root* vlSelf);
VlCoroutine Vjk_ff_tb___024root___eval_initial__TOP__0(Vjk_ff_tb___024root* vlSelf);
VlCoroutine Vjk_ff_tb___024root___eval_initial__TOP__1(Vjk_ff_tb___024root* vlSelf);

void Vjk_ff_tb___024root___eval_initial(Vjk_ff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___eval_initial\n"); );
    // Body
    Vjk_ff_tb___024root___eval_initial__TOP(vlSelf);
    Vjk_ff_tb___024root___eval_initial__TOP__0(vlSelf);
    Vjk_ff_tb___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__jk_ff_tb__DOT__clk__0 
        = vlSelf->jk_ff_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__jk_ff_tb__DOT__preset__0 
        = vlSelf->jk_ff_tb__DOT__preset;
}

VL_INLINE_OPT VlCoroutine Vjk_ff_tb___024root___eval_initial__TOP__0(Vjk_ff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->jk_ff_tb__DOT__clk = 0U;
    vlSelf->jk_ff_tb__DOT__preset = 1U;
    vlSelf->jk_ff_tb__DOT__j = 0U;
    vlSelf->jk_ff_tb__DOT__k = 0U;
    co_await vlSelf->__VdlySched.delay(7ULL, nullptr, 
                                       "jk_ff_tb.v", 
                                       28);
    vlSelf->jk_ff_tb__DOT__preset = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "jk_ff_tb.v", 
                                       31);
    vlSelf->jk_ff_tb__DOT__j = 0U;
    vlSelf->jk_ff_tb__DOT__k = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "jk_ff_tb.v", 
                                       32);
    vlSelf->jk_ff_tb__DOT__j = 0U;
    vlSelf->jk_ff_tb__DOT__k = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "jk_ff_tb.v", 
                                       33);
    vlSelf->jk_ff_tb__DOT__j = 1U;
    vlSelf->jk_ff_tb__DOT__k = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "jk_ff_tb.v", 
                                       34);
    vlSelf->jk_ff_tb__DOT__j = 1U;
    vlSelf->jk_ff_tb__DOT__k = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "jk_ff_tb.v", 
                                       35);
    vlSelf->jk_ff_tb__DOT__j = 1U;
    vlSelf->jk_ff_tb__DOT__k = 1U;
    co_await vlSelf->__VdlySched.delay(3ULL, nullptr, 
                                       "jk_ff_tb.v", 
                                       36);
    vlSelf->jk_ff_tb__DOT__preset = 1U;
    co_await vlSelf->__VdlySched.delay(4ULL, nullptr, 
                                       "jk_ff_tb.v", 
                                       37);
    vlSelf->jk_ff_tb__DOT__preset = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "jk_ff_tb.v", 
                                       39);
    VL_FINISH_MT("jk_ff_tb.v", 39, "");
}

VL_INLINE_OPT VlCoroutine Vjk_ff_tb___024root___eval_initial__TOP__1(Vjk_ff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "jk_ff_tb.v", 
                                           16);
        vlSelf->__Vdlyvval__jk_ff_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->jk_ff_tb__DOT__clk)));
        vlSelf->__Vdlyvset__jk_ff_tb__DOT__clk__v0 = 1U;
    }
}

void Vjk_ff_tb___024root___act_sequent__TOP__0(Vjk_ff_tb___024root* vlSelf);

void Vjk_ff_tb___024root___eval_act(Vjk_ff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vjk_ff_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vjk_ff_tb___024root___nba_sequent__TOP__0(Vjk_ff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->jk_ff_tb__DOT__q = (1U & ((IData)(vlSelf->jk_ff_tb__DOT__preset) 
                                      | ((IData)(vlSelf->jk_ff_tb__DOT__j)
                                          ? ((~ (IData)(vlSelf->jk_ff_tb__DOT__k)) 
                                             | (~ (IData)(vlSelf->jk_ff_tb__DOT__q)))
                                          : ((~ (IData)(vlSelf->jk_ff_tb__DOT__k)) 
                                             & (IData)(vlSelf->jk_ff_tb__DOT__q)))));
}

VL_INLINE_OPT void Vjk_ff_tb___024root___nba_sequent__TOP__1(Vjk_ff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__jk_ff_tb__DOT__clk__v0) {
        vlSelf->jk_ff_tb__DOT__clk = vlSelf->__Vdlyvval__jk_ff_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__jk_ff_tb__DOT__clk__v0 = 0U;
    }
}

void Vjk_ff_tb___024root___eval_nba(Vjk_ff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vjk_ff_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vjk_ff_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vjk_ff_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vjk_ff_tb___024root___eval_triggers__act(Vjk_ff_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vjk_ff_tb___024root___dump_triggers__act(Vjk_ff_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vjk_ff_tb___024root___timing_resume(Vjk_ff_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vjk_ff_tb___024root___dump_triggers__nba(Vjk_ff_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vjk_ff_tb___024root___eval(Vjk_ff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___eval\n"); );
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
            Vjk_ff_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vjk_ff_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("jk_ff_tb.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vjk_ff_tb___024root___timing_resume(vlSelf);
                Vjk_ff_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vjk_ff_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("jk_ff_tb.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vjk_ff_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vjk_ff_tb___024root___timing_resume(Vjk_ff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vjk_ff_tb___024root___eval_debug_assertions(Vjk_ff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
