// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux4x1_behavioral_tb__Syms.h"


VL_ATTR_COLD void Vmux4x1_behavioral_tb___024root__trace_init_sub__TOP__0(Vmux4x1_behavioral_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux4x1_behavioral_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_behavioral_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("mux4x1_behavioral_tb ");
    tracep->declBus(c+1,"in", false,-1, 3,0);
    tracep->declBus(c+2,"sel", false,-1, 1,0);
    tracep->declBit(c+3,"out", false,-1);
    tracep->pushNamePrefix("uut ");
    tracep->declBus(c+1,"in", false,-1, 3,0);
    tracep->declBus(c+2,"sel", false,-1, 1,0);
    tracep->declBit(c+3,"out", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vmux4x1_behavioral_tb___024root__trace_init_top(Vmux4x1_behavioral_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux4x1_behavioral_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_behavioral_tb___024root__trace_init_top\n"); );
    // Body
    Vmux4x1_behavioral_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmux4x1_behavioral_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux4x1_behavioral_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux4x1_behavioral_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmux4x1_behavioral_tb___024root__trace_register(Vmux4x1_behavioral_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux4x1_behavioral_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_behavioral_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmux4x1_behavioral_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmux4x1_behavioral_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmux4x1_behavioral_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmux4x1_behavioral_tb___024root__trace_full_sub_0(Vmux4x1_behavioral_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmux4x1_behavioral_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_behavioral_tb___024root__trace_full_top_0\n"); );
    // Init
    Vmux4x1_behavioral_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux4x1_behavioral_tb___024root*>(voidSelf);
    Vmux4x1_behavioral_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmux4x1_behavioral_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmux4x1_behavioral_tb___024root__trace_full_sub_0(Vmux4x1_behavioral_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux4x1_behavioral_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_behavioral_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->mux4x1_behavioral_tb__DOT__in),4);
    bufp->fullCData(oldp+2,(vlSelf->mux4x1_behavioral_tb__DOT__sel),2);
    bufp->fullBit(oldp+3,(vlSelf->mux4x1_behavioral_tb__DOT__out));
}
