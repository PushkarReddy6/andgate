// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vand_gate_tb.h for the primary calling header

#include "verilated.h"

#include "Vand_gate_tb__Syms.h"
#include "Vand_gate_tb__Syms.h"
#include "Vand_gate_tb___024root.h"

VL_ATTR_COLD void Vand_gate_tb___024root___eval_initial__TOP(Vand_gate_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x64756d70U;
    __Vtemp_1[2U] = 0x6174655fU;
    __Vtemp_1[3U] = 0x6e645f67U;
    __Vtemp_1[4U] = 0x61U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vand_gate_tb___024root___dump_triggers__stl(Vand_gate_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vand_gate_tb___024root___eval_triggers__stl(Vand_gate_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vand_gate_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
