// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjk_ff_tb.h for the primary calling header

#include "verilated.h"

#include "Vjk_ff_tb__Syms.h"
#include "Vjk_ff_tb___024root.h"

VL_ATTR_COLD void Vjk_ff_tb___024root___eval_static(Vjk_ff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vjk_ff_tb___024root___eval_final(Vjk_ff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vjk_ff_tb___024root___eval_triggers__stl(Vjk_ff_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vjk_ff_tb___024root___dump_triggers__stl(Vjk_ff_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vjk_ff_tb___024root___eval_stl(Vjk_ff_tb___024root* vlSelf);

VL_ATTR_COLD void Vjk_ff_tb___024root___eval_settle(Vjk_ff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vjk_ff_tb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vjk_ff_tb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("jk_ff_tb.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vjk_ff_tb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjk_ff_tb___024root___dump_triggers__stl(Vjk_ff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vjk_ff_tb___024root___act_sequent__TOP__0(Vjk_ff_tb___024root* vlSelf);

VL_ATTR_COLD void Vjk_ff_tb___024root___eval_stl(Vjk_ff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vjk_ff_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjk_ff_tb___024root___dump_triggers__act(Vjk_ff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge jk_ff_tb.clk or posedge jk_ff_tb.preset)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjk_ff_tb___024root___dump_triggers__nba(Vjk_ff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge jk_ff_tb.clk or posedge jk_ff_tb.preset)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vjk_ff_tb___024root___ctor_var_reset(Vjk_ff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->jk_ff_tb__DOT__preset = VL_RAND_RESET_I(1);
    vlSelf->jk_ff_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->jk_ff_tb__DOT__j = VL_RAND_RESET_I(1);
    vlSelf->jk_ff_tb__DOT__k = VL_RAND_RESET_I(1);
    vlSelf->jk_ff_tb__DOT__q = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__jk_ff_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__jk_ff_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__jk_ff_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__jk_ff_tb__DOT__preset__0 = VL_RAND_RESET_I(1);
}
