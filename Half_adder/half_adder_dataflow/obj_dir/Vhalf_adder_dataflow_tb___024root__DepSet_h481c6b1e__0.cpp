// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhalf_adder_dataflow_tb.h for the primary calling header

#include "verilated.h"

#include "Vhalf_adder_dataflow_tb__Syms.h"
#include "Vhalf_adder_dataflow_tb___024root.h"

VL_ATTR_COLD void Vhalf_adder_dataflow_tb___024root___eval_initial__TOP(Vhalf_adder_dataflow_tb___024root* vlSelf);
VlCoroutine Vhalf_adder_dataflow_tb___024root___eval_initial__TOP__0(Vhalf_adder_dataflow_tb___024root* vlSelf);

void Vhalf_adder_dataflow_tb___024root___eval_initial(Vhalf_adder_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhalf_adder_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_dataflow_tb___024root___eval_initial\n"); );
    // Body
    Vhalf_adder_dataflow_tb___024root___eval_initial__TOP(vlSelf);
    Vhalf_adder_dataflow_tb___024root___eval_initial__TOP__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vhalf_adder_dataflow_tb___024root___eval_initial__TOP__0(Vhalf_adder_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhalf_adder_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_dataflow_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    VL_WRITEF("Dataflow Half Adder Test\nA B | Sum Carry\n---------------------\n");
    vlSelf->half_adder_dataflow_tb__DOT__a = 0U;
    vlSelf->half_adder_dataflow_tb__DOT__b = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "half_adder_dataflow_tb.v", 
                                       18);
    VL_WRITEF("%b %b|%b %b\n",1,vlSelf->half_adder_dataflow_tb__DOT__a,
              1,(IData)(vlSelf->half_adder_dataflow_tb__DOT__b),
              1,vlSelf->half_adder_dataflow_tb__DOT__sum,
              1,(IData)(vlSelf->half_adder_dataflow_tb__DOT__carry));
    vlSelf->half_adder_dataflow_tb__DOT__a = 0U;
    vlSelf->half_adder_dataflow_tb__DOT__b = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "half_adder_dataflow_tb.v", 
                                       20);
    VL_WRITEF("%b %b |  %b    %b\n",1,vlSelf->half_adder_dataflow_tb__DOT__a,
              1,(IData)(vlSelf->half_adder_dataflow_tb__DOT__b),
              1,vlSelf->half_adder_dataflow_tb__DOT__sum,
              1,(IData)(vlSelf->half_adder_dataflow_tb__DOT__carry));
    vlSelf->half_adder_dataflow_tb__DOT__a = 1U;
    vlSelf->half_adder_dataflow_tb__DOT__b = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "half_adder_dataflow_tb.v", 
                                       22);
    VL_WRITEF("%b %b |  %b    %b\n",1,vlSelf->half_adder_dataflow_tb__DOT__a,
              1,(IData)(vlSelf->half_adder_dataflow_tb__DOT__b),
              1,vlSelf->half_adder_dataflow_tb__DOT__sum,
              1,(IData)(vlSelf->half_adder_dataflow_tb__DOT__carry));
    vlSelf->half_adder_dataflow_tb__DOT__a = 1U;
    vlSelf->half_adder_dataflow_tb__DOT__b = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "half_adder_dataflow_tb.v", 
                                       24);
    VL_WRITEF("%b %b |  %b    %b\n",1,vlSelf->half_adder_dataflow_tb__DOT__a,
              1,(IData)(vlSelf->half_adder_dataflow_tb__DOT__b),
              1,vlSelf->half_adder_dataflow_tb__DOT__sum,
              1,(IData)(vlSelf->half_adder_dataflow_tb__DOT__carry));
    VL_FINISH_MT("half_adder_dataflow_tb.v", 26, "");
}

VL_INLINE_OPT void Vhalf_adder_dataflow_tb___024root___act_sequent__TOP__0(Vhalf_adder_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhalf_adder_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_dataflow_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->half_adder_dataflow_tb__DOT__sum = ((IData)(vlSelf->half_adder_dataflow_tb__DOT__a) 
                                                ^ (IData)(vlSelf->half_adder_dataflow_tb__DOT__b));
    vlSelf->half_adder_dataflow_tb__DOT__carry = ((IData)(vlSelf->half_adder_dataflow_tb__DOT__a) 
                                                  & (IData)(vlSelf->half_adder_dataflow_tb__DOT__b));
}

void Vhalf_adder_dataflow_tb___024root___eval_act(Vhalf_adder_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhalf_adder_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_dataflow_tb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vhalf_adder_dataflow_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vhalf_adder_dataflow_tb___024root___eval_nba(Vhalf_adder_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhalf_adder_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_dataflow_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vhalf_adder_dataflow_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vhalf_adder_dataflow_tb___024root___eval_triggers__act(Vhalf_adder_dataflow_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhalf_adder_dataflow_tb___024root___dump_triggers__act(Vhalf_adder_dataflow_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vhalf_adder_dataflow_tb___024root___timing_resume(Vhalf_adder_dataflow_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhalf_adder_dataflow_tb___024root___dump_triggers__nba(Vhalf_adder_dataflow_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vhalf_adder_dataflow_tb___024root___eval(Vhalf_adder_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhalf_adder_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_dataflow_tb___024root___eval\n"); );
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
            Vhalf_adder_dataflow_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vhalf_adder_dataflow_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("half_adder_dataflow_tb.v", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vhalf_adder_dataflow_tb___024root___timing_resume(vlSelf);
                Vhalf_adder_dataflow_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vhalf_adder_dataflow_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("half_adder_dataflow_tb.v", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vhalf_adder_dataflow_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vhalf_adder_dataflow_tb___024root___timing_resume(Vhalf_adder_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhalf_adder_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_dataflow_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vhalf_adder_dataflow_tb___024root___eval_debug_assertions(Vhalf_adder_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhalf_adder_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_dataflow_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
