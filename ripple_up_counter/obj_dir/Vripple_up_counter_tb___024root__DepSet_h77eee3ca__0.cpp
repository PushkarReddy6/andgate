// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vripple_up_counter_tb.h for the primary calling header

#include "verilated.h"

#include "Vripple_up_counter_tb__Syms.h"
#include "Vripple_up_counter_tb___024root.h"

VL_ATTR_COLD void Vripple_up_counter_tb___024root___eval_initial__TOP(Vripple_up_counter_tb___024root* vlSelf);
VlCoroutine Vripple_up_counter_tb___024root___eval_initial__TOP__0(Vripple_up_counter_tb___024root* vlSelf);
VlCoroutine Vripple_up_counter_tb___024root___eval_initial__TOP__1(Vripple_up_counter_tb___024root* vlSelf);

void Vripple_up_counter_tb___024root___eval_initial(Vripple_up_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_initial\n"); );
    // Body
    Vripple_up_counter_tb___024root___eval_initial__TOP(vlSelf);
    Vripple_up_counter_tb___024root___eval_initial__TOP__0(vlSelf);
    Vripple_up_counter_tb___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__clk__0 
        = vlSelf->ripple_up_counter_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__reset__0 
        = vlSelf->ripple_up_counter_tb__DOT__reset;
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff1__clk__0 
        = vlSelf->ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff1__clk;
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff2__clk__0 
        = vlSelf->ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff2__clk;
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff3__clk__0 
        = vlSelf->ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff3__clk;
}

VL_INLINE_OPT VlCoroutine Vripple_up_counter_tb___024root___eval_initial__TOP__1(Vripple_up_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "ripple_up_counter_4bit_tb.v", 
                                           12);
        vlSelf->ripple_up_counter_tb__DOT__clk = (1U 
                                                  & (~ (IData)(vlSelf->ripple_up_counter_tb__DOT__clk)));
    }
}

void Vripple_up_counter_tb___024root___act_sequent__TOP__0(Vripple_up_counter_tb___024root* vlSelf);

void Vripple_up_counter_tb___024root___eval_act(Vripple_up_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_act\n"); );
    // Body
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        Vripple_up_counter_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vripple_up_counter_tb___024root___nba_sequent__TOP__0(Vripple_up_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->ripple_up_counter_tb__DOT__uut__DOT__q_out3 
        = (1U & ((~ (IData)(vlSelf->ripple_up_counter_tb__DOT__reset)) 
                 & (~ (IData)(vlSelf->ripple_up_counter_tb__DOT__uut__DOT__q_out3))));
}

VL_INLINE_OPT void Vripple_up_counter_tb___024root___nba_sequent__TOP__1(Vripple_up_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->ripple_up_counter_tb__DOT__uut__DOT__q_out0 
        = (1U & ((~ (IData)(vlSelf->ripple_up_counter_tb__DOT__reset)) 
                 & (~ (IData)(vlSelf->ripple_up_counter_tb__DOT__uut__DOT__q_out0))));
    vlSelf->ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff1__clk 
        = (1U & (~ (IData)(vlSelf->ripple_up_counter_tb__DOT__uut__DOT__q_out0)));
}

VL_INLINE_OPT void Vripple_up_counter_tb___024root___nba_sequent__TOP__2(Vripple_up_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->ripple_up_counter_tb__DOT__uut__DOT__q_out1 
        = (1U & ((~ (IData)(vlSelf->ripple_up_counter_tb__DOT__reset)) 
                 & (~ (IData)(vlSelf->ripple_up_counter_tb__DOT__uut__DOT__q_out1))));
    vlSelf->ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff2__clk 
        = (1U & (~ (IData)(vlSelf->ripple_up_counter_tb__DOT__uut__DOT__q_out1)));
}

VL_INLINE_OPT void Vripple_up_counter_tb___024root___nba_sequent__TOP__3(Vripple_up_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->ripple_up_counter_tb__DOT__uut__DOT__q_out2 
        = (1U & ((~ (IData)(vlSelf->ripple_up_counter_tb__DOT__reset)) 
                 & (~ (IData)(vlSelf->ripple_up_counter_tb__DOT__uut__DOT__q_out2))));
    vlSelf->ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff3__clk 
        = (1U & (~ (IData)(vlSelf->ripple_up_counter_tb__DOT__uut__DOT__q_out2)));
}

void Vripple_up_counter_tb___024root___eval_nba(Vripple_up_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_nba\n"); );
    // Body
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vripple_up_counter_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vripple_up_counter_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vripple_up_counter_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vripple_up_counter_tb___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x1fULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vripple_up_counter_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vripple_up_counter_tb___024root___eval_triggers__act(Vripple_up_counter_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vripple_up_counter_tb___024root___dump_triggers__act(Vripple_up_counter_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vripple_up_counter_tb___024root___timing_resume(Vripple_up_counter_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vripple_up_counter_tb___024root___dump_triggers__nba(Vripple_up_counter_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vripple_up_counter_tb___024root___eval(Vripple_up_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
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
            Vripple_up_counter_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vripple_up_counter_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("ripple_up_counter_4bit_tb.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vripple_up_counter_tb___024root___timing_resume(vlSelf);
                Vripple_up_counter_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vripple_up_counter_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("ripple_up_counter_4bit_tb.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vripple_up_counter_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vripple_up_counter_tb___024root___timing_resume(Vripple_up_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___timing_resume\n"); );
    // Body
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vripple_up_counter_tb___024root___eval_debug_assertions(Vripple_up_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
