// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_tb.h for the primary calling header

#include "verilated.h"

#include "Vsoc_tb__Syms.h"
#include "Vsoc_tb__Syms.h"
#include "Vsoc_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vsoc_tb___024root___eval_initial__TOP__0(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___eval_initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x65627567U;
    __Vtemp_1[2U] = 0x6f635f64U;
    __Vtemp_1[3U] = 0x73U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "soc_tb.v", 
                                       30);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->soc_tb__DOT__rst_n = 1U;
    vlSelf->soc_tb__DOT__in1 = 4U;
    vlSelf->soc_tb__DOT__in2 = 3U;
    vlSelf->soc_tb__DOT__sel = 1U;
    vlSelf->soc_tb__DOT__tx_en = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "soc_tb.v", 
                                       34);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->soc_tb__DOT__tx_en = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "soc_tb.v", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->soc_tb__DOT__in1 = 6U;
    vlSelf->soc_tb__DOT__in2 = 5U;
    vlSelf->soc_tb__DOT__sel = 0U;
    vlSelf->soc_tb__DOT__tx_en = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "soc_tb.v", 
                                       38);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->soc_tb__DOT__tx_en = 0U;
    co_await vlSelf->__VdlySched.delay(0x28ULL, nullptr, 
                                       "soc_tb.v", 
                                       40);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("soc_tb.v", 40, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_tb___024root___dump_triggers__act(Vsoc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsoc_tb___024root___eval_triggers__act(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->soc_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__soc_tb__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->soc_tb__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__soc_tb__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__soc_tb__DOT__clk__0 
        = vlSelf->soc_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__soc_tb__DOT__rst_n__0 
        = vlSelf->soc_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsoc_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
