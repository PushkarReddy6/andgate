// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vapb_uart_tb__Syms.h"


void Vapb_uart_tb___024root__trace_chg_sub_0(Vapb_uart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vapb_uart_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vapb_uart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vapb_uart_tb___024root*>(voidSelf);
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vapb_uart_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vapb_uart_tb___024root__trace_chg_sub_0(Vapb_uart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->apb_uart_tb__DOT__rst_n));
        bufp->chgIData(oldp+1,(vlSelf->apb_uart_tb__DOT__PADDR),32);
        bufp->chgIData(oldp+2,(vlSelf->apb_uart_tb__DOT__PWDATA),32);
        bufp->chgBit(oldp+3,(vlSelf->apb_uart_tb__DOT__PWRITE));
        bufp->chgBit(oldp+4,(vlSelf->apb_uart_tb__DOT__PSEL));
        bufp->chgBit(oldp+5,(vlSelf->apb_uart_tb__DOT__PENABLE));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+6,(vlSelf->apb_uart_tb__DOT__PRDATA),32);
        bufp->chgBit(oldp+7,(vlSelf->apb_uart_tb__DOT__PREADY));
        bufp->chgCData(oldp+8,(vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_data),8);
        bufp->chgBit(oldp+9,(vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_write));
        bufp->chgCData(oldp+10,(vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__rx_data),8);
        bufp->chgBit(oldp+11,(vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__rx_ready));
        bufp->chgBit(oldp+12,(vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_busy));
        bufp->chgCData(oldp+13,(vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__uart_inst__DOT__tx_reg),8);
    }
    bufp->chgBit(oldp+14,(vlSelf->apb_uart_tb__DOT__clk));
}

void Vapb_uart_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root__trace_cleanup\n"); );
    // Init
    Vapb_uart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vapb_uart_tb___024root*>(voidSelf);
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
