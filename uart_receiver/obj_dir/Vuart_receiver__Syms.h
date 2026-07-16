// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VUART_RECEIVER__SYMS_H_
#define VERILATED_VUART_RECEIVER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vuart_receiver.h"

// INCLUDE MODULE CLASSES
#include "Vuart_receiver___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vuart_receiver__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vuart_receiver* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vuart_receiver___024root       TOP;

    // CONSTRUCTORS
    Vuart_receiver__Syms(VerilatedContext* contextp, const char* namep, Vuart_receiver* modelp);
    ~Vuart_receiver__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
