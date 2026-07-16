// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vuart_receiver_tb__Syms.h"


void Vuart_receiver_tb___024root__trace_chg_sub_0(Vuart_receiver_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vuart_receiver_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vuart_receiver_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_receiver_tb___024root*>(voidSelf);
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vuart_receiver_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vuart_receiver_tb___024root__trace_chg_sub_0(Vuart_receiver_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->uart_receiver_tb__DOT__data_out),8);
        bufp->chgBit(oldp+1,(vlSelf->uart_receiver_tb__DOT__data_ready));
        bufp->chgCData(oldp+2,(vlSelf->uart_receiver_tb__DOT__dut__DOT__state),2);
        bufp->chgCData(oldp+3,(vlSelf->uart_receiver_tb__DOT__dut__DOT__clk_count),8);
        bufp->chgCData(oldp+4,(vlSelf->uart_receiver_tb__DOT__dut__DOT__bit_index),3);
        bufp->chgCData(oldp+5,(vlSelf->uart_receiver_tb__DOT__dut__DOT__data_buf),8);
        bufp->chgBit(oldp+6,(vlSelf->uart_receiver_tb__DOT__dut__DOT__rx_meta));
        bufp->chgBit(oldp+7,(vlSelf->uart_receiver_tb__DOT__dut__DOT__rx_sync));
    }
    bufp->chgBit(oldp+8,(vlSelf->uart_receiver_tb__DOT__clk));
    bufp->chgBit(oldp+9,(vlSelf->uart_receiver_tb__DOT__rst_n));
    bufp->chgBit(oldp+10,(vlSelf->uart_receiver_tb__DOT__serial_in));
    bufp->chgIData(oldp+11,(vlSelf->uart_receiver_tb__DOT__rx_count),32);
    bufp->chgIData(oldp+12,(vlSelf->uart_receiver_tb__DOT__send_uart_frame__Vstatic__i),32);
}

void Vuart_receiver_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root__trace_cleanup\n"); );
    // Init
    Vuart_receiver_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_receiver_tb___024root*>(voidSelf);
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
