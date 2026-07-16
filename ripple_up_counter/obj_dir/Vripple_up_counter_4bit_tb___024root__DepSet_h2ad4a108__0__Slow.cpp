// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vripple_up_counter_4bit_tb.h for the primary calling header

#include "verilated.h"

#include "Vripple_up_counter_4bit_tb__Syms.h"
#include "Vripple_up_counter_4bit_tb__Syms.h"
#include "Vripple_up_counter_4bit_tb___024root.h"

VL_ATTR_COLD void Vripple_up_counter_4bit_tb___024root___eval_initial__TOP(Vripple_up_counter_4bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_4bit_tb___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x64756d70U;
    __Vtemp_1[2U] = 0x7465725fU;
    __Vtemp_1[3U] = 0x636f756eU;
    __Vtemp_1[4U] = 0x75705fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vripple_up_counter_4bit_tb___024root___dump_triggers__stl(Vripple_up_counter_4bit_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vripple_up_counter_4bit_tb___024root___eval_triggers__stl(Vripple_up_counter_4bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_4bit_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vripple_up_counter_4bit_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vripple_up_counter_4bit_tb___024root___stl_sequent__TOP__0(Vripple_up_counter_4bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vripple_up_counter_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_4bit_tb___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT____Vcellinp__tff1__clk 
        = (1U & (~ (IData)(vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT__q_out0)));
    vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT____Vcellinp__tff2__clk 
        = (1U & (~ (IData)(vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT__q_out1)));
    vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT____Vcellinp__tff3__clk 
        = (1U & (~ (IData)(vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT__q_out2)));
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("%0#ns\t%b\t%b\n",64,VL_TIME_UNITED_Q(1),
                  1,(IData)(vlSelf->ripple_up_counter_4bit_tb__DOT__reset),
                  4,(((IData)(vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT__q_out3) 
                      << 3U) | (((IData)(vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT__q_out2) 
                                 << 2U) | (((IData)(vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT__q_out1) 
                                            << 1U) 
                                           | (IData)(vlSelf->ripple_up_counter_4bit_tb__DOT__uut__DOT__q_out0)))));
    }
}
