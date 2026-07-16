// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vapb_uart_tb__Syms.h"


VL_ATTR_COLD void Vapb_uart_tb___024root__trace_init_sub__TOP__0(Vapb_uart_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("apb_uart_tb ");
    tracep->declBit(c+15,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBus(c+2,"PADDR", false,-1, 31,0);
    tracep->declBus(c+3,"PWDATA", false,-1, 31,0);
    tracep->declBit(c+4,"PWRITE", false,-1);
    tracep->declBit(c+5,"PSEL", false,-1);
    tracep->declBit(c+6,"PENABLE", false,-1);
    tracep->declBus(c+7,"PRDATA", false,-1, 31,0);
    tracep->declBit(c+8,"PREADY", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+15,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBus(c+2,"PADDR", false,-1, 31,0);
    tracep->declBus(c+3,"PWDATA", false,-1, 31,0);
    tracep->declBit(c+4,"PWRITE", false,-1);
    tracep->declBit(c+5,"PSEL", false,-1);
    tracep->declBit(c+6,"PENABLE", false,-1);
    tracep->declBus(c+7,"PRDATA", false,-1, 31,0);
    tracep->declBit(c+8,"PREADY", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+15,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBus(c+2,"PADDR", false,-1, 31,0);
    tracep->declBus(c+3,"PWDATA", false,-1, 31,0);
    tracep->declBit(c+4,"PWRITE", false,-1);
    tracep->declBit(c+5,"PSEL", false,-1);
    tracep->declBit(c+6,"PENABLE", false,-1);
    tracep->declBus(c+7,"PRDATA", false,-1, 31,0);
    tracep->declBit(c+8,"PREADY", false,-1);
    tracep->declBus(c+9,"tx_data", false,-1, 7,0);
    tracep->declBit(c+10,"tx_write", false,-1);
    tracep->declBus(c+11,"rx_data", false,-1, 7,0);
    tracep->declBit(c+12,"rx_ready", false,-1);
    tracep->declBit(c+13,"tx_busy", false,-1);
    tracep->pushNamePrefix("uart_inst ");
    tracep->declBit(c+15,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBus(c+9,"tx_data", false,-1, 7,0);
    tracep->declBit(c+10,"tx_write", false,-1);
    tracep->declBus(c+11,"rx_data", false,-1, 7,0);
    tracep->declBit(c+12,"rx_ready", false,-1);
    tracep->declBit(c+13,"tx_busy", false,-1);
    tracep->declBus(c+14,"tx_reg", false,-1, 7,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vapb_uart_tb___024root__trace_init_top(Vapb_uart_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root__trace_init_top\n"); );
    // Body
    Vapb_uart_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vapb_uart_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vapb_uart_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vapb_uart_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vapb_uart_tb___024root__trace_register(Vapb_uart_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vapb_uart_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vapb_uart_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vapb_uart_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vapb_uart_tb___024root__trace_full_sub_0(Vapb_uart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vapb_uart_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root__trace_full_top_0\n"); );
    // Init
    Vapb_uart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vapb_uart_tb___024root*>(voidSelf);
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vapb_uart_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vapb_uart_tb___024root__trace_full_sub_0(Vapb_uart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->apb_uart_tb__DOT__rst_n));
    bufp->fullIData(oldp+2,(vlSelf->apb_uart_tb__DOT__PADDR),32);
    bufp->fullIData(oldp+3,(vlSelf->apb_uart_tb__DOT__PWDATA),32);
    bufp->fullBit(oldp+4,(vlSelf->apb_uart_tb__DOT__PWRITE));
    bufp->fullBit(oldp+5,(vlSelf->apb_uart_tb__DOT__PSEL));
    bufp->fullBit(oldp+6,(vlSelf->apb_uart_tb__DOT__PENABLE));
    bufp->fullIData(oldp+7,(vlSelf->apb_uart_tb__DOT__PRDATA),32);
    bufp->fullBit(oldp+8,(vlSelf->apb_uart_tb__DOT__PREADY));
    bufp->fullCData(oldp+9,(vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_data),8);
    bufp->fullBit(oldp+10,(vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_write));
    bufp->fullCData(oldp+11,(vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__rx_data),8);
    bufp->fullBit(oldp+12,(vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__rx_ready));
    bufp->fullBit(oldp+13,(vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_busy));
    bufp->fullCData(oldp+14,(vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__uart_inst__DOT__tx_reg),8);
    bufp->fullBit(oldp+15,(vlSelf->apb_uart_tb__DOT__clk));
}
