// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjk_ff_tb.h for the primary calling header

#include "verilated.h"

#include "Vjk_ff_tb__Syms.h"
#include "Vjk_ff_tb__Syms.h"
#include "Vjk_ff_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjk_ff_tb___024root___dump_triggers__act(Vjk_ff_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vjk_ff_tb___024root___eval_triggers__act(Vjk_ff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->jk_ff_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__jk_ff_tb__DOT__clk__0))) 
                                     | ((IData)(vlSelf->jk_ff_tb__DOT__preset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__jk_ff_tb__DOT__preset__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__jk_ff_tb__DOT__clk__0 
        = vlSelf->jk_ff_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__jk_ff_tb__DOT__preset__0 
        = vlSelf->jk_ff_tb__DOT__preset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vjk_ff_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vjk_ff_tb___024root___act_sequent__TOP__0(Vjk_ff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF("%0t|preset=%b j=%b k=%b|q=%b qn=%b\n",
                  64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->jk_ff_tb__DOT__preset),
                  1,vlSelf->jk_ff_tb__DOT__j,1,(IData)(vlSelf->jk_ff_tb__DOT__k),
                  1,vlSelf->jk_ff_tb__DOT__q,1,(1U 
                                                & (~ (IData)(vlSelf->jk_ff_tb__DOT__q))));
    }
}
