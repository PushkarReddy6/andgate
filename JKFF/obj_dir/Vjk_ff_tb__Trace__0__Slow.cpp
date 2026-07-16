// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vjk_ff_tb__Syms.h"


VL_ATTR_COLD void Vjk_ff_tb___024root__trace_init_sub__TOP__0(Vjk_ff_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("jk_ff_tb ");
    tracep->declBit(c+1,"preset", false,-1);
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBit(c+3,"j", false,-1);
    tracep->declBit(c+4,"k", false,-1);
    tracep->declBit(c+5,"q", false,-1);
    tracep->declBit(c+6,"qn", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+1,"preset", false,-1);
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBit(c+3,"j", false,-1);
    tracep->declBit(c+4,"k", false,-1);
    tracep->declBit(c+5,"q", false,-1);
    tracep->declBit(c+6,"qn", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vjk_ff_tb___024root__trace_init_top(Vjk_ff_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root__trace_init_top\n"); );
    // Body
    Vjk_ff_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vjk_ff_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vjk_ff_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vjk_ff_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vjk_ff_tb___024root__trace_register(Vjk_ff_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vjk_ff_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vjk_ff_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vjk_ff_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vjk_ff_tb___024root__trace_full_sub_0(Vjk_ff_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vjk_ff_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root__trace_full_top_0\n"); );
    // Init
    Vjk_ff_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vjk_ff_tb___024root*>(voidSelf);
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vjk_ff_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vjk_ff_tb___024root__trace_full_sub_0(Vjk_ff_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->jk_ff_tb__DOT__preset));
    bufp->fullBit(oldp+2,(vlSelf->jk_ff_tb__DOT__clk));
    bufp->fullBit(oldp+3,(vlSelf->jk_ff_tb__DOT__j));
    bufp->fullBit(oldp+4,(vlSelf->jk_ff_tb__DOT__k));
    bufp->fullBit(oldp+5,(vlSelf->jk_ff_tb__DOT__q));
    bufp->fullBit(oldp+6,((1U & (~ (IData)(vlSelf->jk_ff_tb__DOT__q)))));
}
