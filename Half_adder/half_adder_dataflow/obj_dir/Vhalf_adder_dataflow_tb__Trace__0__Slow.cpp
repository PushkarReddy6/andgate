// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhalf_adder_dataflow_tb__Syms.h"


VL_ATTR_COLD void Vhalf_adder_dataflow_tb___024root__trace_init_sub__TOP__0(Vhalf_adder_dataflow_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhalf_adder_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_dataflow_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("half_adder_dataflow_tb ");
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"sum", false,-1);
    tracep->declBit(c+4,"carry", false,-1);
    tracep->pushNamePrefix("uut ");
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"sum", false,-1);
    tracep->declBit(c+4,"carry", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vhalf_adder_dataflow_tb___024root__trace_init_top(Vhalf_adder_dataflow_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhalf_adder_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_dataflow_tb___024root__trace_init_top\n"); );
    // Body
    Vhalf_adder_dataflow_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vhalf_adder_dataflow_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhalf_adder_dataflow_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhalf_adder_dataflow_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vhalf_adder_dataflow_tb___024root__trace_register(Vhalf_adder_dataflow_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhalf_adder_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_dataflow_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vhalf_adder_dataflow_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vhalf_adder_dataflow_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vhalf_adder_dataflow_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vhalf_adder_dataflow_tb___024root__trace_full_sub_0(Vhalf_adder_dataflow_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vhalf_adder_dataflow_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_dataflow_tb___024root__trace_full_top_0\n"); );
    // Init
    Vhalf_adder_dataflow_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhalf_adder_dataflow_tb___024root*>(voidSelf);
    Vhalf_adder_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vhalf_adder_dataflow_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vhalf_adder_dataflow_tb___024root__trace_full_sub_0(Vhalf_adder_dataflow_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vhalf_adder_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_dataflow_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->half_adder_dataflow_tb__DOT__a));
    bufp->fullBit(oldp+2,(vlSelf->half_adder_dataflow_tb__DOT__b));
    bufp->fullBit(oldp+3,(((IData)(vlSelf->half_adder_dataflow_tb__DOT__a) 
                           ^ (IData)(vlSelf->half_adder_dataflow_tb__DOT__b))));
    bufp->fullBit(oldp+4,(((IData)(vlSelf->half_adder_dataflow_tb__DOT__a) 
                           & (IData)(vlSelf->half_adder_dataflow_tb__DOT__b))));
}
