// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdown_counter_tb.h for the primary calling header

#ifndef VERILATED_VDOWN_COUNTER_TB___024ROOT_H_
#define VERILATED_VDOWN_COUNTER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vdown_counter_tb___024unit;


class Vdown_counter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdown_counter_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vdown_counter_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ down_counter_tb__DOT__clk;
    CData/*0:0*/ down_counter_tb__DOT__reset;
    CData/*3:0*/ down_counter_tb__DOT__count;
    CData/*0:0*/ __Vdlyvval__down_counter_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__down_counter_tb__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__down_counter_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__down_counter_tb__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdown_counter_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdown_counter_tb___024root(Vdown_counter_tb__Syms* symsp, const char* v__name);
    ~Vdown_counter_tb___024root();
    VL_UNCOPYABLE(Vdown_counter_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
