// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vup_counter_4bit_tb.h for the primary calling header

#include "verilated.h"

#include "Vup_counter_4bit_tb__Syms.h"
#include "Vup_counter_4bit_tb___024root.h"

VL_ATTR_COLD void Vup_counter_4bit_tb___024root___eval_initial__TOP(Vup_counter_4bit_tb___024root* vlSelf);
VlCoroutine Vup_counter_4bit_tb___024root___eval_initial__TOP__0(Vup_counter_4bit_tb___024root* vlSelf);
VlCoroutine Vup_counter_4bit_tb___024root___eval_initial__TOP__1(Vup_counter_4bit_tb___024root* vlSelf);

void Vup_counter_4bit_tb___024root___eval_initial(Vup_counter_4bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_4bit_tb___024root___eval_initial\n"); );
    // Body
    Vup_counter_4bit_tb___024root___eval_initial__TOP(vlSelf);
    Vup_counter_4bit_tb___024root___eval_initial__TOP__0(vlSelf);
    Vup_counter_4bit_tb___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__up_counter_4bit_tb__DOT__clk__0 
        = vlSelf->up_counter_4bit_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__up_counter_4bit_tb__DOT__reset__0 
        = vlSelf->up_counter_4bit_tb__DOT__reset;
}

VL_INLINE_OPT VlCoroutine Vup_counter_4bit_tb___024root___eval_initial__TOP__1(Vup_counter_4bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_4bit_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "up_counter_4bit_tb.v", 
                                           12);
        vlSelf->__Vdlyvval__up_counter_4bit_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->up_counter_4bit_tb__DOT__clk)));
        vlSelf->__Vdlyvset__up_counter_4bit_tb__DOT__clk__v0 = 1U;
    }
}

void Vup_counter_4bit_tb___024root___act_sequent__TOP__0(Vup_counter_4bit_tb___024root* vlSelf);

void Vup_counter_4bit_tb___024root___eval_act(Vup_counter_4bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_4bit_tb___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vup_counter_4bit_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vup_counter_4bit_tb___024root___nba_sequent__TOP__0(Vup_counter_4bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_4bit_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->up_counter_4bit_tb__DOT__count = ((IData)(vlSelf->up_counter_4bit_tb__DOT__reset)
                                               ? 0U
                                               : (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->up_counter_4bit_tb__DOT__count))));
}

VL_INLINE_OPT void Vup_counter_4bit_tb___024root___nba_sequent__TOP__1(Vup_counter_4bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_4bit_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__up_counter_4bit_tb__DOT__clk__v0) {
        vlSelf->up_counter_4bit_tb__DOT__clk = vlSelf->__Vdlyvval__up_counter_4bit_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__up_counter_4bit_tb__DOT__clk__v0 = 0U;
    }
}

void Vup_counter_4bit_tb___024root___eval_nba(Vup_counter_4bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_4bit_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vup_counter_4bit_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vup_counter_4bit_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vup_counter_4bit_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vup_counter_4bit_tb___024root___eval_triggers__act(Vup_counter_4bit_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vup_counter_4bit_tb___024root___dump_triggers__act(Vup_counter_4bit_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vup_counter_4bit_tb___024root___timing_resume(Vup_counter_4bit_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vup_counter_4bit_tb___024root___dump_triggers__nba(Vup_counter_4bit_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vup_counter_4bit_tb___024root___eval(Vup_counter_4bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_4bit_tb___024root___eval\n"); );
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
            Vup_counter_4bit_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vup_counter_4bit_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("up_counter_4bit_tb.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vup_counter_4bit_tb___024root___timing_resume(vlSelf);
                Vup_counter_4bit_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vup_counter_4bit_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("up_counter_4bit_tb.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vup_counter_4bit_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vup_counter_4bit_tb___024root___timing_resume(Vup_counter_4bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_4bit_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vup_counter_4bit_tb___024root___eval_debug_assertions(Vup_counter_4bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_4bit_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
