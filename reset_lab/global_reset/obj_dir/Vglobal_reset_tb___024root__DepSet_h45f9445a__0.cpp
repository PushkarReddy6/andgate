// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vglobal_reset_tb.h for the primary calling header

#include "verilated.h"

#include "Vglobal_reset_tb__Syms.h"
#include "Vglobal_reset_tb__Syms.h"
#include "Vglobal_reset_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vglobal_reset_tb___024root___eval_initial__TOP__0(Vglobal_reset_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vglobal_reset_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vglobal_reset_tb___024root___eval_initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x65736574U;
    __Vtemp_1[2U] = 0x616c5f72U;
    __Vtemp_1[3U] = 0x676c6f62U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "global_reset_tb.v", 
                                       11);
    vlSelf->global_reset_tb__DOT__global_rst = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "global_reset_tb.v", 
                                       12);
    vlSelf->global_reset_tb__DOT__global_rst = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "global_reset_tb.v", 
                                       13);
    VL_FINISH_MT("global_reset_tb.v", 13, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vglobal_reset_tb___024root___dump_triggers__act(Vglobal_reset_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vglobal_reset_tb___024root___eval_triggers__act(Vglobal_reset_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vglobal_reset_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vglobal_reset_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->global_reset_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__global_reset_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__global_reset_tb__DOT__clk__0 
        = vlSelf->global_reset_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vglobal_reset_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
