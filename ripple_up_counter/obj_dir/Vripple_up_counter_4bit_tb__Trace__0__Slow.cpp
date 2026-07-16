// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vripple_up_counter_4bit_tb__Syms.h"


VL_ATTR_COLD void Vripple_up_counter_4bit_tb___024root__trace_init_sub__TOP__0(Vripple_up_counter_4bit_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_4bit_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("ripple_up_counter_4bit_tb ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"q", false,-1, 3,0);
    tracep->pushNamePrefix("uut ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"q", false,-1, 3,0);
    tracep->declBit(c+4,"q_out0", false,-1);
    tracep->declBit(c+5,"q_out1", false,-1);
    tracep->declBit(c+6,"q_out2", false,-1);
    tracep->declBit(c+7,"q_out3", false,-1);
    tracep->pushNamePrefix("tff0 ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+4,"q", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tff1 ");
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+5,"q", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tff2 ");
    tracep->declBit(c+9,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+6,"q", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tff3 ");
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+7,"q", false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vripple_up_counter_4bit_tb___024root__trace_init_top(Vripple_up_counter_4bit_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_4bit_tb___024root__trace_init_top\n"); );
    // Body
    Vripple_up_counter_4bit_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vripple_up_counter_4bit_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vripple_up_counter_4bit_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vripple_up_counter_4bit_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vripple_up_counter_4bit_tb___024root__trace_register(Vripple_up_counter_4bit_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_4bit_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vripple_up_counter_4bit_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vripple_up_counter_4bit_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vripple_up_counter_4bit_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vripple_up_counter_4bit_tb___024root__trace_full_sub_0(Vripple_up_counter_4bit_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vripple_up_counter_4bit_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_4bit_tb___024root__trace_full_top_0\n"); );
    // Init
    Vripple_up_counter_4bit_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vripple_up_counter_4bit_tb___024root*>(voidSelf);
    Vripple_up_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vripple_up_counter_4bit_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vripple_up_counter_4bit_tb___024root__trace_full_sub_0(Vripple_up_counter_4bit_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_4bit_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ripple_up_counter_4bit_tb__DOT__clk));
    bufp->fullBit(oldp+2,(vlSelf->ripple_up_counter_4bit_tb__DOT__reset));
    bufp->fullCData(oldp+3,((((IData)(vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT__q_out3) 
                              << 3U) | (((IData)(vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT__q_out2) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT__q_out1) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT__q_out0))))),4);
    bufp->fullBit(oldp+4,(vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT__q_out0));
    bufp->fullBit(oldp+5,(vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT__q_out1));
    bufp->fullBit(oldp+6,(vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT__q_out2));
    bufp->fullBit(oldp+7,(vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT__q_out3));
    bufp->fullBit(oldp+8,(vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT____Vcellinp__tff1__clk));
    bufp->fullBit(oldp+9,(vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT____Vcellinp__tff2__clk));
    bufp->fullBit(oldp+10,(vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT____Vcellinp__tff3__clk));
}
