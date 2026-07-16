// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vand_gate_tb__Syms.h"


VL_ATTR_COLD void Vand_gate_tb___024root__trace_init_sub__TOP__0(Vand_gate_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("and_gate_tb ");
    tracep->declBit(c+1,"A", false,-1);
    tracep->declBit(c+2,"B", false,-1);
    tracep->declBit(c+3,"out", false,-1);
    tracep->pushNamePrefix("uut ");
    tracep->declBit(c+1,"A", false,-1);
    tracep->declBit(c+2,"B", false,-1);
    tracep->declBit(c+3,"out", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vand_gate_tb___024root__trace_init_top(Vand_gate_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root__trace_init_top\n"); );
    // Body
    Vand_gate_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vand_gate_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vand_gate_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vand_gate_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vand_gate_tb___024root__trace_register(Vand_gate_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vand_gate_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vand_gate_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vand_gate_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vand_gate_tb___024root__trace_full_sub_0(Vand_gate_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vand_gate_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root__trace_full_top_0\n"); );
    // Init
    Vand_gate_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vand_gate_tb___024root*>(voidSelf);
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vand_gate_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vand_gate_tb___024root__trace_full_sub_0(Vand_gate_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->and_gate_tb__DOT__A));
    bufp->fullBit(oldp+2,(vlSelf->and_gate_tb__DOT__B));
    bufp->fullBit(oldp+3,(((IData)(vlSelf->and_gate_tb__DOT__A) 
                           & (IData)(vlSelf->and_gate_tb__DOT__B))));
}
