// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux4x1_dataflow_tb.h for the primary calling header

#include "verilated.h"

#include "Vmux4x1_dataflow_tb__Syms.h"
#include "Vmux4x1_dataflow_tb___024root.h"

VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root___eval_static(Vmux4x1_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root___eval_final(Vmux4x1_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root___eval_triggers__stl(Vmux4x1_dataflow_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root___dump_triggers__stl(Vmux4x1_dataflow_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root___eval_stl(Vmux4x1_dataflow_tb___024root* vlSelf);

VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root___eval_settle(Vmux4x1_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vmux4x1_dataflow_tb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vmux4x1_dataflow_tb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("mux4x1_dataflow_tb.v", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vmux4x1_dataflow_tb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root___dump_triggers__stl(Vmux4x1_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vmux4x1_dataflow_tb___024root___act_sequent__TOP__0(Vmux4x1_dataflow_tb___024root* vlSelf);

VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root___eval_stl(Vmux4x1_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vmux4x1_dataflow_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root___dump_triggers__act(Vmux4x1_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root___dump_triggers__nba(Vmux4x1_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root___ctor_var_reset(Vmux4x1_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->mux4x1_dataflow_tb__DOT__in = VL_RAND_RESET_I(4);
    vlSelf->mux4x1_dataflow_tb__DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->mux4x1_dataflow_tb__DOT__out = VL_RAND_RESET_I(1);
    }
