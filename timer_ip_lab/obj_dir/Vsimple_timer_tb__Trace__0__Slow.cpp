// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsimple_timer_tb__Syms.h"


VL_ATTR_COLD void Vsimple_timer_tb___024root__trace_init_sub__TOP__0(Vsimple_timer_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("simple_timer_tb ");
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+6,"start", false,-1);
    tracep->declBus(c+7,"load_val", false,-1, 7,0);
    tracep->declBit(c+1,"done", false,-1);
    tracep->pushNamePrefix("uut ");
    tracep->declBus(c+8,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+6,"start", false,-1);
    tracep->declBus(c+7,"load_val", false,-1, 7,0);
    tracep->declBit(c+1,"done", false,-1);
    tracep->declBus(c+2,"count", false,-1, 7,0);
    tracep->declBit(c+3,"running", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vsimple_timer_tb___024root__trace_init_top(Vsimple_timer_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root__trace_init_top\n"); );
    // Body
    Vsimple_timer_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsimple_timer_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsimple_timer_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsimple_timer_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsimple_timer_tb___024root__trace_register(Vsimple_timer_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsimple_timer_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsimple_timer_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsimple_timer_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsimple_timer_tb___024root__trace_full_sub_0(Vsimple_timer_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsimple_timer_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root__trace_full_top_0\n"); );
    // Init
    Vsimple_timer_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimple_timer_tb___024root*>(voidSelf);
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsimple_timer_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsimple_timer_tb___024root__trace_full_sub_0(Vsimple_timer_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_timer_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->simple_timer_tb__DOT__done));
    bufp->fullCData(oldp+2,(vlSelf->simple_timer_tb__DOT__uut__DOT__count),8);
    bufp->fullBit(oldp+3,(vlSelf->simple_timer_tb__DOT__uut__DOT__running));
    bufp->fullBit(oldp+4,(vlSelf->simple_timer_tb__DOT__clk));
    bufp->fullBit(oldp+5,(vlSelf->simple_timer_tb__DOT__rst));
    bufp->fullBit(oldp+6,(vlSelf->simple_timer_tb__DOT__start));
    bufp->fullCData(oldp+7,(vlSelf->simple_timer_tb__DOT__load_val),8);
    bufp->fullIData(oldp+8,(8U),32);
}
