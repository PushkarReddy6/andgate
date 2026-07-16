// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vand_gate_tb.h for the primary calling header

#include "verilated.h"

#include "Vand_gate_tb__Syms.h"
#include "Vand_gate_tb___024root.h"

VL_ATTR_COLD void Vand_gate_tb___024root___eval_initial__TOP(Vand_gate_tb___024root* vlSelf);
VlCoroutine Vand_gate_tb___024root___eval_initial__TOP__0(Vand_gate_tb___024root* vlSelf);

void Vand_gate_tb___024root___eval_initial(Vand_gate_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_initial\n"); );
    // Body
    Vand_gate_tb___024root___eval_initial__TOP(vlSelf);
    Vand_gate_tb___024root___eval_initial__TOP__0(vlSelf);
}

void Vand_gate_tb___024root___act_sequent__TOP__0(Vand_gate_tb___024root* vlSelf);

void Vand_gate_tb___024root___eval_act(Vand_gate_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vand_gate_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vand_gate_tb___024root___eval_nba(Vand_gate_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vand_gate_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vand_gate_tb___024root___eval_triggers__act(Vand_gate_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vand_gate_tb___024root___dump_triggers__act(Vand_gate_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vand_gate_tb___024root___timing_resume(Vand_gate_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vand_gate_tb___024root___dump_triggers__nba(Vand_gate_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vand_gate_tb___024root___eval(Vand_gate_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval\n"); );
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
            Vand_gate_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vand_gate_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("and_gate_tb.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vand_gate_tb___024root___timing_resume(vlSelf);
                Vand_gate_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vand_gate_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("and_gate_tb.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vand_gate_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vand_gate_tb___024root___timing_resume(Vand_gate_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vand_gate_tb___024root___eval_debug_assertions(Vand_gate_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
