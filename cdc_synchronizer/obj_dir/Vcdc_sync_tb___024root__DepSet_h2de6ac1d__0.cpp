// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcdc_sync_tb.h for the primary calling header

#include "verilated.h"

#include "Vcdc_sync_tb__Syms.h"
#include "Vcdc_sync_tb___024root.h"

VlCoroutine Vcdc_sync_tb___024root___eval_initial__TOP__0(Vcdc_sync_tb___024root* vlSelf);
VlCoroutine Vcdc_sync_tb___024root___eval_initial__TOP__1(Vcdc_sync_tb___024root* vlSelf);

void Vcdc_sync_tb___024root___eval_initial(Vcdc_sync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_sync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_sync_tb___024root___eval_initial\n"); );
    // Body
    Vcdc_sync_tb___024root___eval_initial__TOP__0(vlSelf);
    Vcdc_sync_tb___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__cdc_sync_tb__DOT__clk__0 
        = vlSelf->cdc_sync_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vcdc_sync_tb___024root___eval_initial__TOP__1(Vcdc_sync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_sync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_sync_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "cdc_sync_tb.v", 
                                           5);
        vlSelf->cdc_sync_tb__DOT__clk = (1U & (~ (IData)(vlSelf->cdc_sync_tb__DOT__clk)));
    }
}

void Vcdc_sync_tb___024root___eval_act(Vcdc_sync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_sync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_sync_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vcdc_sync_tb___024root___nba_sequent__TOP__0(Vcdc_sync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_sync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_sync_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->cdc_sync_tb__DOT__synced = vlSelf->cdc_sync_tb__DOT__uut__DOT__stage1;
    vlSelf->cdc_sync_tb__DOT__uut__DOT__stage1 = vlSelf->cdc_sync_tb__DOT__async_in;
}

void Vcdc_sync_tb___024root___eval_nba(Vcdc_sync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_sync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_sync_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcdc_sync_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vcdc_sync_tb___024root___eval_triggers__act(Vcdc_sync_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcdc_sync_tb___024root___dump_triggers__act(Vcdc_sync_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vcdc_sync_tb___024root___timing_resume(Vcdc_sync_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcdc_sync_tb___024root___dump_triggers__nba(Vcdc_sync_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcdc_sync_tb___024root___eval(Vcdc_sync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_sync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_sync_tb___024root___eval\n"); );
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
            Vcdc_sync_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vcdc_sync_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("cdc_sync_tb.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vcdc_sync_tb___024root___timing_resume(vlSelf);
                Vcdc_sync_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vcdc_sync_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("cdc_sync_tb.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vcdc_sync_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vcdc_sync_tb___024root___timing_resume(Vcdc_sync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_sync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_sync_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vcdc_sync_tb___024root___eval_debug_assertions(Vcdc_sync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_sync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_sync_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
