// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vup_counter_4bit_tb.h for the primary calling header

#include "verilated.h"

#include "Vup_counter_4bit_tb__Syms.h"
#include "Vup_counter_4bit_tb__Syms.h"
#include "Vup_counter_4bit_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vup_counter_4bit_tb___024root___eval_initial__TOP__0(Vup_counter_4bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_4bit_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelf->up_counter_4bit_tb__DOT__reset = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "up_counter_4bit_tb.v", 
                                       16);
    vlSelf->up_counter_4bit_tb__DOT__reset = 0U;
    co_await vlSelf->__VdlySched.delay(0xc8ULL, nullptr, 
                                       "up_counter_4bit_tb.v", 
                                       17);
    VL_FINISH_MT("up_counter_4bit_tb.v", 18, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vup_counter_4bit_tb___024root___dump_triggers__act(Vup_counter_4bit_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vup_counter_4bit_tb___024root___eval_triggers__act(Vup_counter_4bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_4bit_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->up_counter_4bit_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__up_counter_4bit_tb__DOT__clk__0))) 
                                     | ((IData)(vlSelf->up_counter_4bit_tb__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__up_counter_4bit_tb__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__up_counter_4bit_tb__DOT__clk__0 
        = vlSelf->up_counter_4bit_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__up_counter_4bit_tb__DOT__reset__0 
        = vlSelf->up_counter_4bit_tb__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vup_counter_4bit_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vup_counter_4bit_tb___024root___act_sequent__TOP__0(Vup_counter_4bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_4bit_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("Time=%t|Reset=%b |count=%b\n",64,
                  VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->up_counter_4bit_tb__DOT__reset),
                  4,vlSelf->up_counter_4bit_tb__DOT__count);
    }
}
