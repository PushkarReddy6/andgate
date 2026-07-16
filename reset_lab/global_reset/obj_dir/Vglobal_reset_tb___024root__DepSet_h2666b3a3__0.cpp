// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vglobal_reset_tb.h for the primary calling header

#include "verilated.h"

#include "Vglobal_reset_tb__Syms.h"
#include "Vglobal_reset_tb___024root.h"

VlCoroutine Vglobal_reset_tb___024root___eval_initial__TOP__0(Vglobal_reset_tb___024root* vlSelf);
VlCoroutine Vglobal_reset_tb___024root___eval_initial__TOP__1(Vglobal_reset_tb___024root* vlSelf);

void Vglobal_reset_tb___024root___eval_initial(Vglobal_reset_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vglobal_reset_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vglobal_reset_tb___024root___eval_initial\n"); );
    // Body
    Vglobal_reset_tb___024root___eval_initial__TOP__0(vlSelf);
    Vglobal_reset_tb___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__global_reset_tb__DOT__clk__0 
        = vlSelf->global_reset_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vglobal_reset_tb___024root___eval_initial__TOP__1(Vglobal_reset_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vglobal_reset_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vglobal_reset_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "global_reset_tb.v", 
                                           7);
        vlSelf->global_reset_tb__DOT__clk = (1U & (~ (IData)(vlSelf->global_reset_tb__DOT__clk)));
    }
}

void Vglobal_reset_tb___024root___eval_act(Vglobal_reset_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vglobal_reset_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vglobal_reset_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vglobal_reset_tb___024root___nba_sequent__TOP__0(Vglobal_reset_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vglobal_reset_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vglobal_reset_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->global_reset_tb__DOT__q2 = (1U & (~ (IData)(vlSelf->global_reset_tb__DOT__global_rst)));
    vlSelf->global_reset_tb__DOT__q1 = (1U & (~ (IData)(vlSelf->global_reset_tb__DOT__global_rst)));
}

void Vglobal_reset_tb___024root___eval_nba(Vglobal_reset_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vglobal_reset_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vglobal_reset_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vglobal_reset_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vglobal_reset_tb___024root___eval_triggers__act(Vglobal_reset_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vglobal_reset_tb___024root___dump_triggers__act(Vglobal_reset_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vglobal_reset_tb___024root___timing_resume(Vglobal_reset_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vglobal_reset_tb___024root___dump_triggers__nba(Vglobal_reset_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vglobal_reset_tb___024root___eval(Vglobal_reset_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vglobal_reset_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vglobal_reset_tb___024root___eval\n"); );
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
            Vglobal_reset_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vglobal_reset_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("global_reset_tb.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vglobal_reset_tb___024root___timing_resume(vlSelf);
                Vglobal_reset_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vglobal_reset_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("global_reset_tb.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vglobal_reset_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vglobal_reset_tb___024root___timing_resume(Vglobal_reset_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vglobal_reset_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vglobal_reset_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vglobal_reset_tb___024root___eval_debug_assertions(Vglobal_reset_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vglobal_reset_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vglobal_reset_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
