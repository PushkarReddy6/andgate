// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsoc_tb__Syms.h"


VL_ATTR_COLD void Vsoc_tb___024root__trace_init_sub__TOP__0(Vsoc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("soc_tb ");
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBus(c+2,"in1", false,-1, 3,0);
    tracep->declBus(c+3,"in2", false,-1, 3,0);
    tracep->declBit(c+4,"sel", false,-1);
    tracep->declBit(c+5,"tx_en", false,-1);
    tracep->declBit(c+9,"tx_done", false,-1);
    tracep->declBus(c+6,"alu_out", false,-1, 3,0);
    tracep->pushNamePrefix("uut ");
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBus(c+2,"in1", false,-1, 3,0);
    tracep->declBus(c+3,"in2", false,-1, 3,0);
    tracep->declBit(c+4,"sel", false,-1);
    tracep->declBit(c+5,"tx_en", false,-1);
    tracep->declBit(c+9,"tx_done", false,-1);
    tracep->declBus(c+6,"alu_out", false,-1, 3,0);
    tracep->declBus(c+6,"alu_result", false,-1, 3,0);
    tracep->pushNamePrefix("alu_dut ");
    tracep->declBus(c+2,"a", false,-1, 3,0);
    tracep->declBus(c+3,"b", false,-1, 3,0);
    tracep->declBit(c+4,"sel", false,-1);
    tracep->declBus(c+6,"y", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart_dut ");
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+5,"tx_en", false,-1);
    tracep->declBus(c+7,"tx_data", false,-1, 7,0);
    tracep->declBit(c+9,"tx_done", false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vsoc_tb___024root__trace_init_top(Vsoc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root__trace_init_top\n"); );
    // Body
    Vsoc_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsoc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsoc_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsoc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsoc_tb___024root__trace_register(Vsoc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsoc_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsoc_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsoc_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsoc_tb___024root__trace_full_sub_0(Vsoc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsoc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root__trace_full_top_0\n"); );
    // Init
    Vsoc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_tb___024root*>(voidSelf);
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsoc_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsoc_tb___024root__trace_full_sub_0(Vsoc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->soc_tb__DOT__rst_n));
    bufp->fullCData(oldp+2,(vlSelf->soc_tb__DOT__in1),4);
    bufp->fullCData(oldp+3,(vlSelf->soc_tb__DOT__in2),4);
    bufp->fullBit(oldp+4,(vlSelf->soc_tb__DOT__sel));
    bufp->fullBit(oldp+5,(vlSelf->soc_tb__DOT__tx_en));
    bufp->fullCData(oldp+6,((0xfU & ((IData)(vlSelf->soc_tb__DOT__sel)
                                      ? ((IData)(vlSelf->soc_tb__DOT__sel)
                                          ? ((IData)(vlSelf->soc_tb__DOT__in1) 
                                             + (IData)(vlSelf->soc_tb__DOT__in2))
                                          : 0U) : ((IData)(vlSelf->soc_tb__DOT__in1) 
                                                   & (IData)(vlSelf->soc_tb__DOT__in2))))),4);
    bufp->fullCData(oldp+7,((0xfU & ((IData)(vlSelf->soc_tb__DOT__sel)
                                      ? ((IData)(vlSelf->soc_tb__DOT__sel)
                                          ? ((IData)(vlSelf->soc_tb__DOT__in1) 
                                             + (IData)(vlSelf->soc_tb__DOT__in2))
                                          : 0U) : ((IData)(vlSelf->soc_tb__DOT__in1) 
                                                   & (IData)(vlSelf->soc_tb__DOT__in2))))),8);
    bufp->fullBit(oldp+8,(vlSelf->soc_tb__DOT__clk));
    bufp->fullBit(oldp+9,(vlSelf->soc_tb__DOT__tx_done));
}
