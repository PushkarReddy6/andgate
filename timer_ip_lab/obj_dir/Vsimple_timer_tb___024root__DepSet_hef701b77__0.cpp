// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_timer_tb.h for the primary calling header

#include "verilated.h"

#include "Vsimple_timer_tb__Syms.h"
#include "Vsimple_timer_tb__Syms.h"
#include "Vsimple_timer_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vsimple_timer_tb___024root___eval_initial__TOP__0(Vsimple_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root___eval_initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x696d6572U;
    __Vtemp_1[2U] = 0x6c655f74U;
    __Vtemp_1[3U] = 0x73696d70U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "simple_timer_tb.v", 
                                       22);
    vlSelf->simple_timer_tb__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "simple_timer_tb.v", 
                                       24);
    vlSelf->simple_timer_tb__DOT__load_val = 5U;
    vlSelf->simple_timer_tb__DOT__start = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "simple_timer_tb.v", 
                                       25);
    vlSelf->simple_timer_tb__DOT__start = 0U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "simple_timer_tb.v", 
                                       27);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "simple_timer_tb.v", 
                                       29);
    vlSelf->simple_timer_tb__DOT__load_val = 3U;
    vlSelf->simple_timer_tb__DOT__start = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "simple_timer_tb.v", 
                                       30);
    vlSelf->simple_timer_tb__DOT__start = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "simple_timer_tb.v", 
                                       31);
    VL_FINISH_MT("simple_timer_tb.v", 31, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_timer_tb___024root___dump_triggers__act(Vsimple_timer_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimple_timer_tb___024root___eval_triggers__act(Vsimple_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->simple_timer_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__simple_timer_tb__DOT__clk__0))) 
                                     | ((IData)(vlSelf->simple_timer_tb__DOT__rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__simple_timer_tb__DOT__rst__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__simple_timer_tb__DOT__clk__0 
        = vlSelf->simple_timer_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__simple_timer_tb__DOT__rst__0 
        = vlSelf->simple_timer_tb__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimple_timer_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
