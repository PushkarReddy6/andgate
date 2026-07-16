// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmetastability_tb__Syms.h"


VL_ATTR_COLD void Vmetastability_tb___024root__trace_init_sub__TOP__0(Vmetastability_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmetastability_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmetastability_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("metastability_tb ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"async_in", false,-1);
    tracep->declBit(c+3,"sampled", false,-1);
    tracep->pushNamePrefix("uut ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"async_in", false,-1);
    tracep->declBit(c+3,"sample", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vmetastability_tb___024root__trace_init_top(Vmetastability_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmetastability_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmetastability_tb___024root__trace_init_top\n"); );
    // Body
    Vmetastability_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmetastability_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmetastability_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmetastability_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmetastability_tb___024root__trace_register(Vmetastability_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmetastability_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmetastability_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmetastability_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmetastability_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmetastability_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmetastability_tb___024root__trace_full_sub_0(Vmetastability_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmetastability_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmetastability_tb___024root__trace_full_top_0\n"); );
    // Init
    Vmetastability_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmetastability_tb___024root*>(voidSelf);
    Vmetastability_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmetastability_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmetastability_tb___024root__trace_full_sub_0(Vmetastability_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmetastability_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmetastability_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->metastability_tb__DOT__clk));
    bufp->fullBit(oldp+2,(vlSelf->metastability_tb__DOT__async_in));
    bufp->fullBit(oldp+3,(vlSelf->metastability_tb__DOT__sampled));
}
