// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux_gatelevel_tb.h for the primary calling header

#ifndef VERILATED_VMUX_GATELEVEL_TB___024ROOT_H_
#define VERILATED_VMUX_GATELEVEL_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmux_gatelevel_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmux_gatelevel_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ mux_gatelevel_tb__DOT__in;
    CData/*1:0*/ mux_gatelevel_tb__DOT__sel;
    CData/*0:0*/ mux_gatelevel_tb__DOT__uut__DOT__and0;
    CData/*0:0*/ mux_gatelevel_tb__DOT__uut__DOT__and1;
    CData/*0:0*/ mux_gatelevel_tb__DOT__uut__DOT__and2;
    CData/*0:0*/ mux_gatelevel_tb__DOT__uut__DOT__and3;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmux_gatelevel_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux_gatelevel_tb___024root(Vmux_gatelevel_tb__Syms* symsp, const char* v__name);
    ~Vmux_gatelevel_tb___024root();
    VL_UNCOPYABLE(Vmux_gatelevel_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
