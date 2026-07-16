// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhalf_adder_dataflow_tb.h for the primary calling header

#include "verilated.h"

#include "Vhalf_adder_dataflow_tb__Syms.h"
#include "Vhalf_adder_dataflow_tb__Syms.h"
#include "Vhalf_adder_dataflow_tb___024root.h"

VL_ATTR_COLD void Vhalf_adder_dataflow_tb___024root___eval_initial__TOP(Vhalf_adder_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhalf_adder_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_dataflow_tb___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x666c6f77U;
    __Vtemp_1[2U] = 0x64617461U;
    __Vtemp_1[3U] = 0x6465725fU;
    __Vtemp_1[4U] = 0x665f6164U;
    __Vtemp_1[5U] = 0x68616cU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhalf_adder_dataflow_tb___024root___dump_triggers__stl(Vhalf_adder_dataflow_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhalf_adder_dataflow_tb___024root___eval_triggers__stl(Vhalf_adder_dataflow_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhalf_adder_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_dataflow_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhalf_adder_dataflow_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
