// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vripple_up_counter_4bit_tb.h for the primary calling header

#include "verilated.h"

#include "Vripple_up_counter_4bit_tb__Syms.h"
#include "Vripple_up_counter_4bit_tb___024root.h"

VL_ATTR_COLD void Vripple_up_counter_4bit_tb___024root___eval_static(Vripple_up_counter_4bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_4bit_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vripple_up_counter_4bit_tb___024root___eval_final(Vripple_up_counter_4bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_4bit_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vripple_up_counter_4bit_tb___024root___eval_triggers__stl(Vripple_up_counter_4bit_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vripple_up_counter_4bit_tb___024root___dump_triggers__stl(Vripple_up_counter_4bit_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vripple_up_counter_4bit_tb___024root___eval_stl(Vripple_up_counter_4bit_tb___024root* vlSelf);

VL_ATTR_COLD void Vripple_up_counter_4bit_tb___024root___eval_settle(Vripple_up_counter_4bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_4bit_tb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vripple_up_counter_4bit_tb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vripple_up_counter_4bit_tb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("ripple_up_counter_4bit_tb.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vripple_up_counter_4bit_tb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vripple_up_counter_4bit_tb___024root___dump_triggers__stl(Vripple_up_counter_4bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_4bit_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vripple_up_counter_4bit_tb___024root___stl_sequent__TOP__0(Vripple_up_counter_4bit_tb___024root* vlSelf);

VL_ATTR_COLD void Vripple_up_counter_4bit_tb___024root___eval_stl(Vripple_up_counter_4bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_4bit_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vripple_up_counter_4bit_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vripple_up_counter_4bit_tb___024root___dump_triggers__act(Vripple_up_counter_4bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_4bit_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge ripple_up_counter_4bit_tb.clk or posedge ripple_up_counter_4bit_tb.reset)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge ripple_up_counter_4bit_tb.reset or posedge ripple_up_counter_4bit_tb.uut.__Vcellinp__tff1__clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge ripple_up_counter_4bit_tb.reset or posedge ripple_up_counter_4bit_tb.uut.__Vcellinp__tff2__clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge ripple_up_counter_4bit_tb.reset or posedge ripple_up_counter_4bit_tb.uut.__Vcellinp__tff3__clk)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vripple_up_counter_4bit_tb___024root___dump_triggers__nba(Vripple_up_counter_4bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_4bit_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge ripple_up_counter_4bit_tb.clk or posedge ripple_up_counter_4bit_tb.reset)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge ripple_up_counter_4bit_tb.reset or posedge ripple_up_counter_4bit_tb.uut.__Vcellinp__tff1__clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge ripple_up_counter_4bit_tb.reset or posedge ripple_up_counter_4bit_tb.uut.__Vcellinp__tff2__clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge ripple_up_counter_4bit_tb.reset or posedge ripple_up_counter_4bit_tb.uut.__Vcellinp__tff3__clk)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vripple_up_counter_4bit_tb___024root___ctor_var_reset(Vripple_up_counter_4bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_4bit_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->ripple_up_counter_4bit_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->ripple_up_counter_4bit_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT__q_out0 = VL_RAND_RESET_I(1);
    vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT__q_out1 = VL_RAND_RESET_I(1);
    vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT__q_out2 = VL_RAND_RESET_I(1);
    vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT__q_out3 = VL_RAND_RESET_I(1);
    vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT____Vcellinp__tff1__clk = VL_RAND_RESET_I(1);
    vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT____Vcellinp__tff2__clk = VL_RAND_RESET_I(1);
    vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT____Vcellinp__tff3__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ripple_up_counter_4bit_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ripple_up_counter_4bit_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_4bit_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_4bit_tb__DOT__reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_4bit_tb__DOT__uut__DOT____Vcellinp__tff1__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_4bit_tb__DOT__uut__DOT____Vcellinp__tff2__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_4bit_tb__DOT__uut__DOT____Vcellinp__tff3__clk__0 = VL_RAND_RESET_I(1);
}
