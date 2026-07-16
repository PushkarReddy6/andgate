// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vand_gate_tb.h for the primary calling header

#include "verilated.h"

#include "Vand_gate_tb__Syms.h"
#include "Vand_gate_tb__Syms.h"
#include "Vand_gate_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vand_gate_tb___024root___eval_initial__TOP__0(Vand_gate_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    VL_WRITEF(" time=%t A = %0b| B =%0b |out =%b\n",
              64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->and_gate_tb__DOT__A),
              1,vlSelf->and_gate_tb__DOT__B,1,(IData)(vlSelf->and_gate_tb__DOT__out));
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "and_gate_tb.v", 
                                       9);
    vlSelf->and_gate_tb__DOT__A = 0U;
    vlSelf->and_gate_tb__DOT__B = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "and_gate_tb.v", 
                                       10);
    vlSelf->and_gate_tb__DOT__A = 0U;
    vlSelf->and_gate_tb__DOT__B = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "and_gate_tb.v", 
                                       11);
    vlSelf->and_gate_tb__DOT__A = 1U;
    vlSelf->and_gate_tb__DOT__B = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "and_gate_tb.v", 
                                       12);
    vlSelf->and_gate_tb__DOT__A = 1U;
    vlSelf->and_gate_tb__DOT__B = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "and_gate_tb.v", 
                                       13);
    VL_FINISH_MT("and_gate_tb.v", 14, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vand_gate_tb___024root___dump_triggers__act(Vand_gate_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vand_gate_tb___024root___eval_triggers__act(Vand_gate_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vand_gate_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vand_gate_tb___024root___act_sequent__TOP__0(Vand_gate_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF(" time=%t A = %0b| B =%0b|out = %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->and_gate_tb__DOT__A),
                  1,vlSelf->and_gate_tb__DOT__B,1,((IData)(vlSelf->and_gate_tb__DOT__A) 
                                                   & (IData)(vlSelf->and_gate_tb__DOT__B)));
    }
    vlSelf->and_gate_tb__DOT__out = ((IData)(vlSelf->and_gate_tb__DOT__A) 
                                     & (IData)(vlSelf->and_gate_tb__DOT__B));
}
