// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdown_counter_tb.h for the primary calling header

#include "verilated.h"

#include "Vdown_counter_tb__Syms.h"
#include "Vdown_counter_tb__Syms.h"
#include "Vdown_counter_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vdown_counter_tb___024root___eval_initial__TOP__0(Vdown_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdown_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdown_counter_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->down_counter_tb__DOT__clk = 0U;
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelf->down_counter_tb__DOT__reset = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "down_counter_tb.v", 
                                       14);
    vlSelf->down_counter_tb__DOT__reset = 0U;
    co_await vlSelf->__VdlySched.delay(0xc8ULL, nullptr, 
                                       "down_counter_tb.v", 
                                       15);
    VL_FINISH_MT("down_counter_tb.v", 16, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdown_counter_tb___024root___dump_triggers__act(Vdown_counter_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vdown_counter_tb___024root___eval_triggers__act(Vdown_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdown_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdown_counter_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->down_counter_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__down_counter_tb__DOT__clk__0))) 
                                     | ((IData)(vlSelf->down_counter_tb__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__down_counter_tb__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__down_counter_tb__DOT__clk__0 
        = vlSelf->down_counter_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__down_counter_tb__DOT__reset__0 
        = vlSelf->down_counter_tb__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdown_counter_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vdown_counter_tb___024root___act_sequent__TOP__0(Vdown_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdown_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdown_counter_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("Time=%t|Reset=%b|count=%b\n",64,
                  VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->down_counter_tb__DOT__reset),
                  4,vlSelf->down_counter_tb__DOT__count);
    }
}
