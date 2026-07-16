// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vripple_up_counter_tb.h for the primary calling header

#include "verilated.h"

#include "Vripple_up_counter_tb__Syms.h"
#include "Vripple_up_counter_tb__Syms.h"
#include "Vripple_up_counter_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vripple_up_counter_tb___024root___eval_initial__TOP__0(Vripple_up_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->ripple_up_counter_tb__DOT__clk = 0U;
    vlSelf->ripple_up_counter_tb__DOT__reset = 1U;
    VL_WRITEF("Time\treset\tq\n");
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ripple_up_counter_4bit_tb.v", 
                                       20);
    vlSelf->ripple_up_counter_tb__DOT__reset = 0U;
    co_await vlSelf->__VdlySched.delay(0xc8ULL, nullptr, 
                                       "ripple_up_counter_4bit_tb.v", 
                                       22);
    VL_FINISH_MT("ripple_up_counter_4bit_tb.v", 23, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vripple_up_counter_tb___024root___dump_triggers__act(Vripple_up_counter_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vripple_up_counter_tb___024root___eval_triggers__act(Vripple_up_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->ripple_up_counter_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__clk__0))) 
                                     | ((IData)(vlSelf->ripple_up_counter_tb__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->ripple_up_counter_tb__DOT__reset) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__reset__0))) 
                                     | ((IData)(vlSelf->ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff1__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff1__clk__0)))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->ripple_up_counter_tb__DOT__reset) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__reset__0))) 
                                     | ((IData)(vlSelf->ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff2__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff2__clk__0)))));
    vlSelf->__VactTriggered.set(3U, (((IData)(vlSelf->ripple_up_counter_tb__DOT__reset) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__reset__0))) 
                                     | ((IData)(vlSelf->ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff3__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff3__clk__0)))));
    vlSelf->__VactTriggered.set(4U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__clk__0 
        = vlSelf->ripple_up_counter_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__reset__0 
        = vlSelf->ripple_up_counter_tb__DOT__reset;
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff1__clk__0 
        = vlSelf->ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff1__clk;
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff2__clk__0 
        = vlSelf->ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff2__clk;
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff3__clk__0 
        = vlSelf->ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff3__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vripple_up_counter_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vripple_up_counter_tb___024root___act_sequent__TOP__0(Vripple_up_counter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("%0#ns\t%b\t%b\n",64,VL_TIME_UNITED_Q(1),
                  1,(IData)(vlSelf->ripple_up_counter_tb__DOT__reset),
                  4,(((IData)(vlSelf->ripple_up_counter_tb__DOT__uut__DOT__q_out3) 
                      << 3U) | (((IData)(vlSelf->ripple_up_counter_tb__DOT__uut__DOT__q_out2) 
                                 << 2U) | (((IData)(vlSelf->ripple_up_counter_tb__DOT__uut__DOT__q_out1) 
                                            << 1U) 
                                           | (IData)(vlSelf->ripple_up_counter_tb__DOT__uut__DOT__q_out0)))));
    }
}
