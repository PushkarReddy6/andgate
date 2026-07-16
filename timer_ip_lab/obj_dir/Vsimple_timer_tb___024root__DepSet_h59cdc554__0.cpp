// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_timer_tb.h for the primary calling header

#include "verilated.h"

#include "Vsimple_timer_tb__Syms.h"
#include "Vsimple_timer_tb___024root.h"

VlCoroutine Vsimple_timer_tb___024root___eval_initial__TOP__0(Vsimple_timer_tb___024root* vlSelf);
VlCoroutine Vsimple_timer_tb___024root___eval_initial__TOP__1(Vsimple_timer_tb___024root* vlSelf);

void Vsimple_timer_tb___024root___eval_initial(Vsimple_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root___eval_initial\n"); );
    // Body
    Vsimple_timer_tb___024root___eval_initial__TOP__0(vlSelf);
    Vsimple_timer_tb___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__simple_timer_tb__DOT__clk__0 
        = vlSelf->simple_timer_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__simple_timer_tb__DOT__rst__0 
        = vlSelf->simple_timer_tb__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vsimple_timer_tb___024root___eval_initial__TOP__1(Vsimple_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "simple_timer_tb.v", 
                                           17);
        vlSelf->simple_timer_tb__DOT__clk = (1U & (~ (IData)(vlSelf->simple_timer_tb__DOT__clk)));
    }
}

void Vsimple_timer_tb___024root___eval_act(Vsimple_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vsimple_timer_tb___024root___nba_sequent__TOP__0(Vsimple_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__simple_timer_tb__DOT__uut__DOT__count;
    __Vdly__simple_timer_tb__DOT__uut__DOT__count = 0;
    CData/*0:0*/ __Vdly__simple_timer_tb__DOT__uut__DOT__running;
    __Vdly__simple_timer_tb__DOT__uut__DOT__running = 0;
    // Body
    __Vdly__simple_timer_tb__DOT__uut__DOT__running 
        = vlSelf->simple_timer_tb__DOT__uut__DOT__running;
    __Vdly__simple_timer_tb__DOT__uut__DOT__count = vlSelf->simple_timer_tb__DOT__uut__DOT__count;
    if (vlSelf->simple_timer_tb__DOT__rst) {
        __Vdly__simple_timer_tb__DOT__uut__DOT__count = 0U;
        __Vdly__simple_timer_tb__DOT__uut__DOT__running = 0U;
        vlSelf->simple_timer_tb__DOT__done = 0U;
    } else if (vlSelf->simple_timer_tb__DOT__start) {
        __Vdly__simple_timer_tb__DOT__uut__DOT__count 
            = vlSelf->simple_timer_tb__DOT__load_val;
        __Vdly__simple_timer_tb__DOT__uut__DOT__running = 1U;
        vlSelf->simple_timer_tb__DOT__done = 0U;
    } else if (vlSelf->simple_timer_tb__DOT__uut__DOT__running) {
        if ((0U < (IData)(vlSelf->simple_timer_tb__DOT__uut__DOT__count))) {
            __Vdly__simple_timer_tb__DOT__uut__DOT__count 
                = (0xffU & ((IData)(vlSelf->simple_timer_tb__DOT__uut__DOT__count) 
                            - (IData)(1U)));
        } else {
            __Vdly__simple_timer_tb__DOT__uut__DOT__running = 0U;
            vlSelf->simple_timer_tb__DOT__done = 1U;
        }
    }
    vlSelf->simple_timer_tb__DOT__uut__DOT__count = __Vdly__simple_timer_tb__DOT__uut__DOT__count;
    vlSelf->simple_timer_tb__DOT__uut__DOT__running 
        = __Vdly__simple_timer_tb__DOT__uut__DOT__running;
}

void Vsimple_timer_tb___024root___eval_nba(Vsimple_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsimple_timer_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vsimple_timer_tb___024root___eval_triggers__act(Vsimple_timer_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_timer_tb___024root___dump_triggers__act(Vsimple_timer_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vsimple_timer_tb___024root___timing_resume(Vsimple_timer_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_timer_tb___024root___dump_triggers__nba(Vsimple_timer_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimple_timer_tb___024root___eval(Vsimple_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root___eval\n"); );
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
            Vsimple_timer_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vsimple_timer_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("simple_timer_tb.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vsimple_timer_tb___024root___timing_resume(vlSelf);
                Vsimple_timer_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vsimple_timer_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("simple_timer_tb.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vsimple_timer_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vsimple_timer_tb___024root___timing_resume(Vsimple_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vsimple_timer_tb___024root___eval_debug_assertions(Vsimple_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
