// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vuart_receiver_tb__Syms.h"


VL_ATTR_COLD void Vuart_receiver_tb___024root__trace_init_sub__TOP__0(Vuart_receiver_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("uart_receiver_tb ");
    tracep->declBus(c+14,"CLK_PERIOD", false,-1, 31,0);
    tracep->declBus(c+15,"CLKS_PER_BIT", false,-1, 31,0);
    tracep->declBus(c+16,"BIT_TIME", false,-1, 31,0);
    tracep->declBit(c+9,"clk", false,-1);
    tracep->declBit(c+10,"rst_n", false,-1);
    tracep->declBit(c+11,"serial_in", false,-1);
    tracep->declBus(c+1,"data_out", false,-1, 7,0);
    tracep->declBit(c+2,"data_ready", false,-1);
    tracep->declBus(c+12,"rx_count", false,-1, 31,0);
    tracep->declBus(c+13,"send_uart_frame__Vstatic__i", false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+17,"CLKS_PER_BIT", false,-1, 31,0);
    tracep->declBit(c+9,"clk", false,-1);
    tracep->declBit(c+10,"rst_n", false,-1);
    tracep->declBit(c+11,"serial_in", false,-1);
    tracep->declBus(c+1,"data_out", false,-1, 7,0);
    tracep->declBit(c+2,"data_ready", false,-1);
    tracep->declBus(c+18,"IDLE", false,-1, 1,0);
    tracep->declBus(c+19,"START", false,-1, 1,0);
    tracep->declBus(c+20,"RECV", false,-1, 1,0);
    tracep->declBus(c+21,"STOP", false,-1, 1,0);
    tracep->declBus(c+3,"state", false,-1, 1,0);
    tracep->declBus(c+4,"clk_count", false,-1, 7,0);
    tracep->declBus(c+5,"bit_index", false,-1, 2,0);
    tracep->declBus(c+6,"data_buf", false,-1, 7,0);
    tracep->declBit(c+7,"rx_meta", false,-1);
    tracep->declBit(c+8,"rx_sync", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vuart_receiver_tb___024root__trace_init_top(Vuart_receiver_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root__trace_init_top\n"); );
    // Body
    Vuart_receiver_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vuart_receiver_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vuart_receiver_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vuart_receiver_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vuart_receiver_tb___024root__trace_register(Vuart_receiver_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vuart_receiver_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vuart_receiver_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vuart_receiver_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vuart_receiver_tb___024root__trace_full_sub_0(Vuart_receiver_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vuart_receiver_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root__trace_full_top_0\n"); );
    // Init
    Vuart_receiver_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_receiver_tb___024root*>(voidSelf);
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vuart_receiver_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vuart_receiver_tb___024root__trace_full_sub_0(Vuart_receiver_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->uart_receiver_tb__DOT__data_out),8);
    bufp->fullBit(oldp+2,(vlSelf->uart_receiver_tb__DOT__data_ready));
    bufp->fullCData(oldp+3,(vlSelf->uart_receiver_tb__DOT__dut__DOT__state),2);
    bufp->fullCData(oldp+4,(vlSelf->uart_receiver_tb__DOT__dut__DOT__clk_count),8);
    bufp->fullCData(oldp+5,(vlSelf->uart_receiver_tb__DOT__dut__DOT__bit_index),3);
    bufp->fullCData(oldp+6,(vlSelf->uart_receiver_tb__DOT__dut__DOT__data_buf),8);
    bufp->fullBit(oldp+7,(vlSelf->uart_receiver_tb__DOT__dut__DOT__rx_meta));
    bufp->fullBit(oldp+8,(vlSelf->uart_receiver_tb__DOT__dut__DOT__rx_sync));
    bufp->fullBit(oldp+9,(vlSelf->uart_receiver_tb__DOT__clk));
    bufp->fullBit(oldp+10,(vlSelf->uart_receiver_tb__DOT__rst_n));
    bufp->fullBit(oldp+11,(vlSelf->uart_receiver_tb__DOT__serial_in));
    bufp->fullIData(oldp+12,(vlSelf->uart_receiver_tb__DOT__rx_count),32);
    bufp->fullIData(oldp+13,(vlSelf->uart_receiver_tb__DOT__send_uart_frame__Vstatic__i),32);
    bufp->fullIData(oldp+14,(0x28U),32);
    bufp->fullIData(oldp+15,(0xd9U),32);
    bufp->fullIData(oldp+16,(0x21e8U),32);
    bufp->fullIData(oldp+17,(0xd9U),32);
    bufp->fullCData(oldp+18,(0U),2);
    bufp->fullCData(oldp+19,(1U),2);
    bufp->fullCData(oldp+20,(2U),2);
    bufp->fullCData(oldp+21,(3U),2);
}
