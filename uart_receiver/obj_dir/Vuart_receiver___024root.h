// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_receiver.h for the primary calling header

#ifndef VERILATED_VUART_RECEIVER___024ROOT_H_
#define VERILATED_VUART_RECEIVER___024ROOT_H_  // guard

#include "verilated.h"


class Vuart_receiver__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_receiver___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(serial_in,0,0);
    VL_OUT8(data_out,7,0);
    VL_OUT8(data_ready,0,0);
    CData/*1:0*/ uart_receiver__DOT__state;
    CData/*7:0*/ uart_receiver__DOT__clk_count;
    CData/*2:0*/ uart_receiver__DOT__bit_index;
    CData/*7:0*/ uart_receiver__DOT__data_buf;
    CData/*0:0*/ uart_receiver__DOT__rx_meta;
    CData/*0:0*/ uart_receiver__DOT__rx_sync;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vuart_receiver__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_receiver___024root(Vuart_receiver__Syms* symsp, const char* v__name);
    ~Vuart_receiver___024root();
    VL_UNCOPYABLE(Vuart_receiver___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
