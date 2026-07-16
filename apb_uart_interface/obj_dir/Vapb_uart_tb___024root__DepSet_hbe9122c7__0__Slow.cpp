// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_uart_tb.h for the primary calling header

#include "verilated.h"

#include "Vapb_uart_tb__Syms.h"
#include "Vapb_uart_tb__Syms.h"
#include "Vapb_uart_tb___024root.h"

VL_ATTR_COLD void Vapb_uart_tb___024root___eval_initial__TOP(Vapb_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x64756d70U;
    __Vtemp_1[2U] = 0x6172745fU;
    __Vtemp_1[3U] = 0x70625f75U;
    __Vtemp_1[4U] = 0x61U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}
