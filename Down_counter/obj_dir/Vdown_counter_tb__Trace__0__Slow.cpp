// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdown_counter_tb__Syms.h"


VL_ATTR_COLD void Vdown_counter_tb___024root__trace_init_sub__TOP__0(Vdown_counter_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdown_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdown_counter_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("down_counter_tb ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"count", false,-1, 3,0);
    tracep->pushNamePrefix("uut ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"count", false,-1, 3,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vdown_counter_tb___024root__trace_init_top(Vdown_counter_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdown_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdown_counter_tb___024root__trace_init_top\n"); );
    // Body
    Vdown_counter_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdown_counter_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdown_counter_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdown_counter_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdown_counter_tb___024root__trace_register(Vdown_counter_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdown_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdown_counter_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vdown_counter_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vdown_counter_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vdown_counter_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdown_counter_tb___024root__trace_full_sub_0(Vdown_counter_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdown_counter_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdown_counter_tb___024root__trace_full_top_0\n"); );
    // Init
    Vdown_counter_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdown_counter_tb___024root*>(voidSelf);
    Vdown_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdown_counter_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdown_counter_tb___024root__trace_full_sub_0(Vdown_counter_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdown_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdown_counter_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->down_counter_tb__DOT__clk));
    bufp->fullBit(oldp+2,(vlSelf->down_counter_tb__DOT__reset));
    bufp->fullCData(oldp+3,(vlSelf->down_counter_tb__DOT__count),4);
}
