// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_receiver_tb.h for the primary calling header

#include "verilated.h"

#include "Vuart_receiver_tb__Syms.h"
#include "Vuart_receiver_tb__Syms.h"
#include "Vuart_receiver_tb___024root.h"

VL_ATTR_COLD void Vuart_receiver_tb___024root___eval_initial__TOP(Vuart_receiver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_receiver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_receiver_tb___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x725f7462U;
    __Vtemp_1[2U] = 0x65697665U;
    __Vtemp_1[3U] = 0x5f726563U;
    __Vtemp_1[4U] = 0x75617274U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}
