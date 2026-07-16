// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdown_counter_tb.h for the primary calling header

#ifndef VERILATED_VDOWN_COUNTER_TB___024UNIT_H_
#define VERILATED_VDOWN_COUNTER_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdown_counter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdown_counter_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vdown_counter_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdown_counter_tb___024unit(Vdown_counter_tb__Syms* symsp, const char* v__name);
    ~Vdown_counter_tb___024unit();
    VL_UNCOPYABLE(Vdown_counter_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
