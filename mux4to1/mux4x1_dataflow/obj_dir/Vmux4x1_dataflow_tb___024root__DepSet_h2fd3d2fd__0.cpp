// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux4x1_dataflow_tb.h for the primary calling header

#include "verilated.h"

#include "Vmux4x1_dataflow_tb__Syms.h"
#include "Vmux4x1_dataflow_tb___024root.h"

VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root___eval_initial__TOP(Vmux4x1_dataflow_tb___024root* vlSelf);
VlCoroutine Vmux4x1_dataflow_tb___024root___eval_initial__TOP__0(Vmux4x1_dataflow_tb___024root* vlSelf);

void Vmux4x1_dataflow_tb___024root___eval_initial(Vmux4x1_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___eval_initial\n"); );
    // Body
    Vmux4x1_dataflow_tb___024root___eval_initial__TOP(vlSelf);
    Vmux4x1_dataflow_tb___024root___eval_initial__TOP__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vmux4x1_dataflow_tb___024root___eval_initial__TOP__0(Vmux4x1_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    VL_WRITEF("DATAFLOW 4x1 MUX TEST\n----------------------\nSEL | IN     | OUT\n----------------------\n");
    vlSelf->mux4x1_dataflow_tb__DOT__in = 0xaU;
    vlSelf->mux4x1_dataflow_tb__DOT__sel = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "mux4x1_dataflow_tb.v", 
                                       19);
    VL_WRITEF("%b  | %b |  %b\n",2,vlSelf->mux4x1_dataflow_tb__DOT__sel,
              4,(IData)(vlSelf->mux4x1_dataflow_tb__DOT__in),
              1,vlSelf->mux4x1_dataflow_tb__DOT__out);
    vlSelf->mux4x1_dataflow_tb__DOT__sel = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "mux4x1_dataflow_tb.v", 
                                       20);
    VL_WRITEF("%b  | %b |  %b\n",2,vlSelf->mux4x1_dataflow_tb__DOT__sel,
              4,(IData)(vlSelf->mux4x1_dataflow_tb__DOT__in),
              1,vlSelf->mux4x1_dataflow_tb__DOT__out);
    vlSelf->mux4x1_dataflow_tb__DOT__sel = 2U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "mux4x1_dataflow_tb.v", 
                                       21);
    VL_WRITEF("%b  | %b |  %b\n",2,vlSelf->mux4x1_dataflow_tb__DOT__sel,
              4,(IData)(vlSelf->mux4x1_dataflow_tb__DOT__in),
              1,vlSelf->mux4x1_dataflow_tb__DOT__out);
    VL_FINISH_MT("mux4x1_dataflow_tb.v", 22, "");
}

VL_INLINE_OPT void Vmux4x1_dataflow_tb___024root___act_sequent__TOP__0(Vmux4x1_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->mux4x1_dataflow_tb__DOT__out = (1U & ((IData)(
                                                          ((0U 
                                                            == (IData)(vlSelf->mux4x1_dataflow_tb__DOT__sel)) 
                                                           & (IData)(vlSelf->mux4x1_dataflow_tb__DOT__in))) 
                                                  | ((IData)(
                                                             ((1U 
                                                               == (IData)(vlSelf->mux4x1_dataflow_tb__DOT__sel)) 
                                                              & ((IData)(vlSelf->mux4x1_dataflow_tb__DOT__in) 
                                                                 >> 1U))) 
                                                     | (((IData)(vlSelf->mux4x1_dataflow_tb__DOT__sel) 
                                                         >> 1U) 
                                                        & (((~ (IData)(vlSelf->mux4x1_dataflow_tb__DOT__sel)) 
                                                            & ((IData)(vlSelf->mux4x1_dataflow_tb__DOT__in) 
                                                               >> 2U)) 
                                                           | ((IData)(vlSelf->mux4x1_dataflow_tb__DOT__sel) 
                                                              & ((IData)(vlSelf->mux4x1_dataflow_tb__DOT__in) 
                                                                 >> 3U)))))));
}

void Vmux4x1_dataflow_tb___024root___eval_act(Vmux4x1_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmux4x1_dataflow_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vmux4x1_dataflow_tb___024root___eval_nba(Vmux4x1_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmux4x1_dataflow_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vmux4x1_dataflow_tb___024root___eval_triggers__act(Vmux4x1_dataflow_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root___dump_triggers__act(Vmux4x1_dataflow_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux4x1_dataflow_tb___024root___timing_resume(Vmux4x1_dataflow_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root___dump_triggers__nba(Vmux4x1_dataflow_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux4x1_dataflow_tb___024root___eval(Vmux4x1_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
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
            Vmux4x1_dataflow_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vmux4x1_dataflow_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("mux4x1_dataflow_tb.v", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vmux4x1_dataflow_tb___024root___timing_resume(vlSelf);
                Vmux4x1_dataflow_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vmux4x1_dataflow_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("mux4x1_dataflow_tb.v", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vmux4x1_dataflow_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vmux4x1_dataflow_tb___024root___timing_resume(Vmux4x1_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vmux4x1_dataflow_tb___024root___eval_debug_assertions(Vmux4x1_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
