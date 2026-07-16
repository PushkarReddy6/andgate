// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcdc_sync_tb__Syms.h"


void Vcdc_sync_tb___024root__trace_chg_sub_0(Vcdc_sync_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcdc_sync_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_sync_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vcdc_sync_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcdc_sync_tb___024root*>(voidSelf);
    Vcdc_sync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcdc_sync_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcdc_sync_tb___024root__trace_chg_sub_0(Vcdc_sync_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_sync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_sync_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->cdc_sync_tb__DOT__clk));
    bufp->chgBit(oldp+1,(vlSelf->cdc_sync_tb__DOT__async_in));
    bufp->chgBit(oldp+2,(vlSelf->cdc_sync_tb__DOT__synced));
    bufp->chgBit(oldp+3,(vlSelf->cdc_sync_tb__DOT__uut__DOT__stage1));
}

void Vcdc_sync_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_sync_tb___024root__trace_cleanup\n"); );
    // Init
    Vcdc_sync_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcdc_sync_tb___024root*>(voidSelf);
    Vcdc_sync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
