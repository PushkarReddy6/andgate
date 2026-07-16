// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vup_counter_4bit_tb.h for the primary calling header

#ifndef VERILATED_VUP_COUNTER_4BIT_TB___024UNIT_H_
#define VERILATED_VUP_COUNTER_4BIT_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vup_counter_4bit_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vup_counter_4bit_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vup_counter_4bit_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vup_counter_4bit_tb___024unit(Vup_counter_4bit_tb__Syms* symsp, const char* v__name);
    ~Vup_counter_4bit_tb___024unit();
    VL_UNCOPYABLE(Vup_counter_4bit_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
