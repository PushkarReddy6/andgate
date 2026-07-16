// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmetastability_tb.h for the primary calling header

#include "verilated.h"

#include "Vmetastability_tb__Syms.h"
#include "Vmetastability_tb__Syms.h"
#include "Vmetastability_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vmetastability_tb___024root___eval_initial__TOP__0(Vmetastability_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmetastability_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmetastability_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0xcULL, nullptr, 
                                       "metastability_tb.v", 
                                       19);
    vlSelf->metastability_tb__DOT__async_in = 1U;
    co_await vlSelf->__VdlySched.delay(7ULL, nullptr, 
                                       "metastability_tb.v", 
                                       20);
    vlSelf->metastability_tb__DOT__async_in = 0U;
    co_await vlSelf->__VdlySched.delay(6ULL, nullptr, 
                                       "metastability_tb.v", 
                                       21);
    vlSelf->metastability_tb__DOT__async_in = 1U;
    co_await vlSelf->__VdlySched.delay(9ULL, nullptr, 
                                       "metastability_tb.v", 
                                       22);
    vlSelf->metastability_tb__DOT__async_in = 0U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "metastability_tb.v", 
                                       24);
    VL_FINISH_MT("metastability_tb.v", 24, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmetastability_tb___024root___dump_triggers__act(Vmetastability_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmetastability_tb___024root___eval_triggers__act(Vmetastability_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmetastability_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmetastability_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->metastability_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__metastability_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__metastability_tb__DOT__clk__0 
        = vlSelf->metastability_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmetastability_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
