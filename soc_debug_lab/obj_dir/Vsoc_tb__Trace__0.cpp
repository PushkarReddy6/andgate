// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsoc_tb__Syms.h"


void Vsoc_tb___024root__trace_chg_sub_0(Vsoc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsoc_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vsoc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_tb___024root*>(voidSelf);
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsoc_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vsoc_tb___024root__trace_chg_sub_0(Vsoc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->soc_tb__DOT__rst_n));
        bufp->chgCData(oldp+1,(vlSelf->soc_tb__DOT__in1),4);
        bufp->chgCData(oldp+2,(vlSelf->soc_tb__DOT__in2),4);
        bufp->chgBit(oldp+3,(vlSelf->soc_tb__DOT__sel));
        bufp->chgBit(oldp+4,(vlSelf->soc_tb__DOT__tx_en));
        bufp->chgCData(oldp+5,((0xfU & ((IData)(vlSelf->soc_tb__DOT__sel)
                                         ? ((IData)(vlSelf->soc_tb__DOT__sel)
                                             ? ((IData)(vlSelf->soc_tb__DOT__in1) 
                                                + (IData)(vlSelf->soc_tb__DOT__in2))
                                             : 0U) : 
                                        ((IData)(vlSelf->soc_tb__DOT__in1) 
                                         & (IData)(vlSelf->soc_tb__DOT__in2))))),4);
        bufp->chgCData(oldp+6,((0xfU & ((IData)(vlSelf->soc_tb__DOT__sel)
                                         ? ((IData)(vlSelf->soc_tb__DOT__sel)
                                             ? ((IData)(vlSelf->soc_tb__DOT__in1) 
                                                + (IData)(vlSelf->soc_tb__DOT__in2))
                                             : 0U) : 
                                        ((IData)(vlSelf->soc_tb__DOT__in1) 
                                         & (IData)(vlSelf->soc_tb__DOT__in2))))),8);
    }
    bufp->chgBit(oldp+7,(vlSelf->soc_tb__DOT__clk));
    bufp->chgBit(oldp+8,(vlSelf->soc_tb__DOT__tx_done));
}

void Vsoc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root__trace_cleanup\n"); );
    // Init
    Vsoc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_tb___024root*>(voidSelf);
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
