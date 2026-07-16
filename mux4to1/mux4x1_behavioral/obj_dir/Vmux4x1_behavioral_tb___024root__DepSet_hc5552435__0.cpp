// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux4x1_behavioral_tb.h for the primary calling header

#include "verilated.h"

#include "Vmux4x1_behavioral_tb__Syms.h"
#include "Vmux4x1_behavioral_tb__Syms.h"
#include "Vmux4x1_behavioral_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1_behavioral_tb___024root___dump_triggers__act(Vmux4x1_behavioral_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux4x1_behavioral_tb___024root___eval_triggers__act(Vmux4x1_behavioral_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux4x1_behavioral_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_behavioral_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmux4x1_behavioral_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
