// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vapb_uart_tb.h for the primary calling header

#ifndef VERILATED_VAPB_UART_TB___024ROOT_H_
#define VERILATED_VAPB_UART_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vapb_uart_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vapb_uart_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ apb_uart_tb__DOT__clk;
    CData/*0:0*/ apb_uart_tb__DOT__rst_n;
    CData/*0:0*/ apb_uart_tb__DOT__PWRITE;
    CData/*0:0*/ apb_uart_tb__DOT__PSEL;
    CData/*0:0*/ apb_uart_tb__DOT__PENABLE;
    CData/*0:0*/ apb_uart_tb__DOT__PREADY;
    CData/*7:0*/ apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_data;
    CData/*0:0*/ apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_write;
    CData/*7:0*/ apb_uart_tb__DOT__dut__DOT__dut__DOT__rx_data;
    CData/*0:0*/ apb_uart_tb__DOT__dut__DOT__dut__DOT__rx_ready;
    CData/*0:0*/ apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_busy;
    CData/*7:0*/ apb_uart_tb__DOT__dut__DOT__dut__DOT__uart_inst__DOT__tx_reg;
    CData/*0:0*/ __Vtrigprevexpr___TOP__apb_uart_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__apb_uart_tb__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ apb_uart_tb__DOT__PADDR;
    IData/*31:0*/ apb_uart_tb__DOT__PWDATA;
    IData/*31:0*/ apb_uart_tb__DOT__PRDATA;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd4f004ac__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vapb_uart_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vapb_uart_tb___024root(Vapb_uart_tb__Syms* symsp, const char* v__name);
    ~Vapb_uart_tb___024root();
    VL_UNCOPYABLE(Vapb_uart_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
