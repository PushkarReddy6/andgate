// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_receiver_tb.h for the primary calling header

#ifndef VERILATED_VUART_RECEIVER_TB___024ROOT_H_
#define VERILATED_VUART_RECEIVER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vuart_receiver_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_receiver_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ uart_receiver_tb__DOT__clk;
    CData/*0:0*/ uart_receiver_tb__DOT__rst_n;
    CData/*0:0*/ uart_receiver_tb__DOT__serial_in;
    CData/*7:0*/ uart_receiver_tb__DOT__data_out;
    CData/*0:0*/ uart_receiver_tb__DOT__data_ready;
    CData/*1:0*/ uart_receiver_tb__DOT__dut__DOT__state;
    CData/*7:0*/ uart_receiver_tb__DOT__dut__DOT__clk_count;
    CData/*2:0*/ uart_receiver_tb__DOT__dut__DOT__bit_index;
    CData/*7:0*/ uart_receiver_tb__DOT__dut__DOT__data_buf;
    CData/*0:0*/ uart_receiver_tb__DOT__dut__DOT__rx_meta;
    CData/*0:0*/ uart_receiver_tb__DOT__dut__DOT__rx_sync;
    CData/*0:0*/ __Vtrigprevexpr___TOP__uart_receiver_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ uart_receiver_tb__DOT__rx_count;
    IData/*31:0*/ uart_receiver_tb__DOT__send_uart_frame__Vstatic__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vuart_receiver_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_receiver_tb___024root(Vuart_receiver_tb__Syms* symsp, const char* v__name);
    ~Vuart_receiver_tb___024root();
    VL_UNCOPYABLE(Vuart_receiver_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
