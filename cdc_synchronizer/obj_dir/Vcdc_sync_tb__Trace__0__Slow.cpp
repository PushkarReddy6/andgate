// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcdc_sync_tb__Syms.h"


VL_ATTR_COLD void Vcdc_sync_tb___024root__trace_init_sub__TOP__0(Vcdc_sync_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_sync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_sync_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("cdc_sync_tb ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"async_in", false,-1);
    tracep->declBit(c+3,"synced", false,-1);
    tracep->pushNamePrefix("uut ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"async_in", false,-1);
    tracep->declBit(c+3,"synced", false,-1);
    tracep->declBit(c+4,"stage1", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcdc_sync_tb___024root__trace_init_top(Vcdc_sync_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_sync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_sync_tb___024root__trace_init_top\n"); );
    // Body
    Vcdc_sync_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcdc_sync_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcdc_sync_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcdc_sync_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcdc_sync_tb___024root__trace_register(Vcdc_sync_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_sync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_sync_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcdc_sync_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcdc_sync_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcdc_sync_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcdc_sync_tb___024root__trace_full_sub_0(Vcdc_sync_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcdc_sync_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_sync_tb___024root__trace_full_top_0\n"); );
    // Init
    Vcdc_sync_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcdc_sync_tb___024root*>(voidSelf);
    Vcdc_sync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcdc_sync_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcdc_sync_tb___024root__trace_full_sub_0(Vcdc_sync_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_sync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_sync_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->cdc_sync_tb__DOT__clk));
    bufp->fullBit(oldp+2,(vlSelf->cdc_sync_tb__DOT__async_in));
    bufp->fullBit(oldp+3,(vlSelf->cdc_sync_tb__DOT__synced));
    bufp->fullBit(oldp+4,(vlSelf->cdc_sync_tb__DOT__uut__DOT__stage1));
}
