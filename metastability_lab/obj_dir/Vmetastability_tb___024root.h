// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmetastability_tb.h for the primary calling header

#ifndef VERILATED_VMETASTABILITY_TB___024ROOT_H_
#define VERILATED_VMETASTABILITY_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmetastability_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmetastability_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ metastability_tb__DOT__clk;
    CData/*0:0*/ metastability_tb__DOT__async_in;
    CData/*0:0*/ metastability_tb__DOT__sampled;
    CData/*0:0*/ __Vtrigprevexpr___TOP__metastability_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmetastability_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmetastability_tb___024root(Vmetastability_tb__Syms* symsp, const char* v__name);
    ~Vmetastability_tb___024root();
    VL_UNCOPYABLE(Vmetastability_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
