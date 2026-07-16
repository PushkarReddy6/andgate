// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux_gatelevel_tb.h for the primary calling header

#include "verilated.h"

#include "Vmux_gatelevel_tb__Syms.h"
#include "Vmux_gatelevel_tb___024root.h"

VL_ATTR_COLD void Vmux_gatelevel_tb___024root___eval_initial__TOP(Vmux_gatelevel_tb___024root* vlSelf);
VlCoroutine Vmux_gatelevel_tb___024root___eval_initial__TOP__0(Vmux_gatelevel_tb___024root* vlSelf);

void Vmux_gatelevel_tb___024root___eval_initial(Vmux_gatelevel_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux_gatelevel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_gatelevel_tb___024root___eval_initial\n"); );
    // Body
    Vmux_gatelevel_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vmux_gatelevel_tb___024root___eval_initial__TOP__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vmux_gatelevel_tb___024root___eval_initial__TOP__0(Vmux_gatelevel_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux_gatelevel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_gatelevel_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    VL_WRITEF("GATE LEVEL MUX4x1 TEST\nSEL | IN     | OUT\n---------------------\n");
    vlSelf->mux_gatelevel_tb__DOT__in = 0xdU;
    vlSelf->mux_gatelevel_tb__DOT__sel = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "mux_gatelevel_tb.v", 
                                       20);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("%b | %b | %b\n",2,vlSelf->mux_gatelevel_tb__DOT__sel,
              4,(IData)(vlSelf->mux_gatelevel_tb__DOT__in),
              1,((IData)(vlSelf->mux_gatelevel_tb__DOT__uut__DOT__and0) 
                 | ((IData)(vlSelf->mux_gatelevel_tb__DOT__uut__DOT__and1) 
                    | ((IData)(vlSelf->mux_gatelevel_tb__DOT__uut__DOT__and2) 
                       | (IData)(vlSelf->mux_gatelevel_tb__DOT__uut__DOT__and3)))));
    vlSelf->mux_gatelevel_tb__DOT__sel = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "mux_gatelevel_tb.v", 
                                       21);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("%b | %b | %b\n",2,vlSelf->mux_gatelevel_tb__DOT__sel,
              4,(IData)(vlSelf->mux_gatelevel_tb__DOT__in),
              1,((IData)(vlSelf->mux_gatelevel_tb__DOT__uut__DOT__and0) 
                 | ((IData)(vlSelf->mux_gatelevel_tb__DOT__uut__DOT__and1) 
                    | ((IData)(vlSelf->mux_gatelevel_tb__DOT__uut__DOT__and2) 
                       | (IData)(vlSelf->mux_gatelevel_tb__DOT__uut__DOT__and3)))));
    vlSelf->mux_gatelevel_tb__DOT__sel = 2U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "mux_gatelevel_tb.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("%b | %b | %b\n",2,vlSelf->mux_gatelevel_tb__DOT__sel,
              4,(IData)(vlSelf->mux_gatelevel_tb__DOT__in),
              1,((IData)(vlSelf->mux_gatelevel_tb__DOT__uut__DOT__and0) 
                 | ((IData)(vlSelf->mux_gatelevel_tb__DOT__uut__DOT__and1) 
                    | ((IData)(vlSelf->mux_gatelevel_tb__DOT__uut__DOT__and2) 
                       | (IData)(vlSelf->mux_gatelevel_tb__DOT__uut__DOT__and3)))));
    vlSelf->mux_gatelevel_tb__DOT__sel = 3U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "mux_gatelevel_tb.v", 
                                       23);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("%b | %b | %b\n",2,vlSelf->mux_gatelevel_tb__DOT__sel,
              4,(IData)(vlSelf->mux_gatelevel_tb__DOT__in),
              1,((IData)(vlSelf->mux_gatelevel_tb__DOT__uut__DOT__and0) 
                 | ((IData)(vlSelf->mux_gatelevel_tb__DOT__uut__DOT__and1) 
                    | ((IData)(vlSelf->mux_gatelevel_tb__DOT__uut__DOT__and2) 
                       | (IData)(vlSelf->mux_gatelevel_tb__DOT__uut__DOT__and3)))));
    VL_FINISH_MT("mux_gatelevel_tb.v", 24, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT void Vmux_gatelevel_tb___024root___act_sequent__TOP__0(Vmux_gatelevel_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux_gatelevel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_gatelevel_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->mux_gatelevel_tb__DOT__uut__DOT__and0 = 
        (1U & (IData)(((0U == (IData)(vlSelf->mux_gatelevel_tb__DOT__sel)) 
                       & (IData)(vlSelf->mux_gatelevel_tb__DOT__in))));
    vlSelf->mux_gatelevel_tb__DOT__uut__DOT__and1 = 
        (1U & (IData)(((1U == (IData)(vlSelf->mux_gatelevel_tb__DOT__sel)) 
                       & ((IData)(vlSelf->mux_gatelevel_tb__DOT__in) 
                          >> 1U))));
    vlSelf->mux_gatelevel_tb__DOT__uut__DOT__and2 = 
        (1U & (IData)(((2U == (IData)(vlSelf->mux_gatelevel_tb__DOT__sel)) 
                       & ((IData)(vlSelf->mux_gatelevel_tb__DOT__in) 
                          >> 2U))));
    vlSelf->mux_gatelevel_tb__DOT__uut__DOT__and3 = 
        (1U & (IData)(((3U == (IData)(vlSelf->mux_gatelevel_tb__DOT__sel)) 
                       & ((IData)(vlSelf->mux_gatelevel_tb__DOT__in) 
                          >> 3U))));
}

void Vmux_gatelevel_tb___024root___eval_act(Vmux_gatelevel_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux_gatelevel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_gatelevel_tb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmux_gatelevel_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vmux_gatelevel_tb___024root___eval_nba(Vmux_gatelevel_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux_gatelevel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_gatelevel_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmux_gatelevel_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vmux_gatelevel_tb___024root___eval_triggers__act(Vmux_gatelevel_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux_gatelevel_tb___024root___dump_triggers__act(Vmux_gatelevel_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux_gatelevel_tb___024root___timing_resume(Vmux_gatelevel_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux_gatelevel_tb___024root___dump_triggers__nba(Vmux_gatelevel_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux_gatelevel_tb___024root___eval(Vmux_gatelevel_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux_gatelevel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_gatelevel_tb___024root___eval\n"); );
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
            Vmux_gatelevel_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vmux_gatelevel_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("mux_gatelevel_tb.v", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vmux_gatelevel_tb___024root___timing_resume(vlSelf);
                Vmux_gatelevel_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vmux_gatelevel_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("mux_gatelevel_tb.v", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vmux_gatelevel_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vmux_gatelevel_tb___024root___timing_resume(Vmux_gatelevel_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux_gatelevel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_gatelevel_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vmux_gatelevel_tb___024root___eval_debug_assertions(Vmux_gatelevel_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux_gatelevel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_gatelevel_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
