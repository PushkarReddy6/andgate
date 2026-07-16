// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux_gatelevel_tb__Syms.h"


VL_ATTR_COLD void Vmux_gatelevel_tb___024root__trace_init_sub__TOP__0(Vmux_gatelevel_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux_gatelevel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_gatelevel_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("mux_gatelevel_tb ");
    tracep->declBus(c+1,"in", false,-1, 3,0);
    tracep->declBus(c+2,"sel", false,-1, 1,0);
    tracep->declBit(c+3,"out", false,-1);
    tracep->pushNamePrefix("uut ");
    tracep->declBus(c+1,"in", false,-1, 3,0);
    tracep->declBus(c+2,"sel", false,-1, 1,0);
    tracep->declBit(c+3,"out", false,-1);
    tracep->declBit(c+4,"not_s0", false,-1);
    tracep->declBit(c+5,"not_s1", false,-1);
    tracep->declBit(c+6,"and0", false,-1);
    tracep->declBit(c+7,"and1", false,-1);
    tracep->declBit(c+8,"and2", false,-1);
    tracep->declBit(c+9,"and3", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vmux_gatelevel_tb___024root__trace_init_top(Vmux_gatelevel_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux_gatelevel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_gatelevel_tb___024root__trace_init_top\n"); );
    // Body
    Vmux_gatelevel_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmux_gatelevel_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux_gatelevel_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux_gatelevel_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmux_gatelevel_tb___024root__trace_register(Vmux_gatelevel_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux_gatelevel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_gatelevel_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmux_gatelevel_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmux_gatelevel_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmux_gatelevel_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmux_gatelevel_tb___024root__trace_full_sub_0(Vmux_gatelevel_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmux_gatelevel_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_gatelevel_tb___024root__trace_full_top_0\n"); );
    // Init
    Vmux_gatelevel_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux_gatelevel_tb___024root*>(voidSelf);
    Vmux_gatelevel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmux_gatelevel_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmux_gatelevel_tb___024root__trace_full_sub_0(Vmux_gatelevel_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux_gatelevel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_gatelevel_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->mux_gatelevel_tb__DOT__in),4);
    bufp->fullCData(oldp+2,(vlSelf->mux_gatelevel_tb__DOT__sel),2);
    bufp->fullBit(oldp+3,((1U & ((IData)(((0U == (IData)(vlSelf->mux_gatelevel_tb__DOT__sel)) 
                                          & (IData)(vlSelf->mux_gatelevel_tb__DOT__in))) 
                                 | ((IData)(((1U == (IData)(vlSelf->mux_gatelevel_tb__DOT__sel)) 
                                             & ((IData)(vlSelf->mux_gatelevel_tb__DOT__in) 
                                                >> 1U))) 
                                    | ((IData)(((2U 
                                                 == (IData)(vlSelf->mux_gatelevel_tb__DOT__sel)) 
                                                & ((IData)(vlSelf->mux_gatelevel_tb__DOT__in) 
                                                   >> 2U))) 
                                       | (IData)(((3U 
                                                   == (IData)(vlSelf->mux_gatelevel_tb__DOT__sel)) 
                                                  & ((IData)(vlSelf->mux_gatelevel_tb__DOT__in) 
                                                     >> 3U)))))))));
    bufp->fullBit(oldp+4,((1U & (~ (IData)(vlSelf->mux_gatelevel_tb__DOT__sel)))));
    bufp->fullBit(oldp+5,((1U & (~ ((IData)(vlSelf->mux_gatelevel_tb__DOT__sel) 
                                    >> 1U)))));
    bufp->fullBit(oldp+6,((1U & (IData)(((0U == (IData)(vlSelf->mux_gatelevel_tb__DOT__sel)) 
                                         & (IData)(vlSelf->mux_gatelevel_tb__DOT__in))))));
    bufp->fullBit(oldp+7,((1U & (IData)(((1U == (IData)(vlSelf->mux_gatelevel_tb__DOT__sel)) 
                                         & ((IData)(vlSelf->mux_gatelevel_tb__DOT__in) 
                                            >> 1U))))));
    bufp->fullBit(oldp+8,((1U & (IData)(((2U == (IData)(vlSelf->mux_gatelevel_tb__DOT__sel)) 
                                         & ((IData)(vlSelf->mux_gatelevel_tb__DOT__in) 
                                            >> 2U))))));
    bufp->fullBit(oldp+9,((1U & (IData)(((3U == (IData)(vlSelf->mux_gatelevel_tb__DOT__sel)) 
                                         & ((IData)(vlSelf->mux_gatelevel_tb__DOT__in) 
                                            >> 3U))))));
}
