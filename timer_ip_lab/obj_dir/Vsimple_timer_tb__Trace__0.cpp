// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsimple_timer_tb__Syms.h"


void Vsimple_timer_tb___024root__trace_chg_sub_0(Vsimple_timer_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsimple_timer_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vsimple_timer_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimple_timer_tb___024root*>(voidSelf);
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsimple_timer_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vsimple_timer_tb___024root__trace_chg_sub_0(Vsimple_timer_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->simple_timer_tb__DOT__done));
        bufp->chgCData(oldp+1,(vlSelf->simple_timer_tb__DOT__uut__DOT__count),8);
        bufp->chgBit(oldp+2,(vlSelf->simple_timer_tb__DOT__uut__DOT__running));
    }
    bufp->chgBit(oldp+3,(vlSelf->simple_timer_tb__DOT__clk));
    bufp->chgBit(oldp+4,(vlSelf->simple_timer_tb__DOT__rst));
    bufp->chgBit(oldp+5,(vlSelf->simple_timer_tb__DOT__start));
    bufp->chgCData(oldp+6,(vlSelf->simple_timer_tb__DOT__load_val),8);
}

void Vsimple_timer_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root__trace_cleanup\n"); );
    // Init
    Vsimple_timer_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimple_timer_tb___024root*>(voidSelf);
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
