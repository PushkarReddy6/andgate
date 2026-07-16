// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_uart_tb.h for the primary calling header

#include "verilated.h"

#include "Vapb_uart_tb__Syms.h"
#include "Vapb_uart_tb___024root.h"

VL_ATTR_COLD void Vapb_uart_tb___024root___eval_initial__TOP(Vapb_uart_tb___024root* vlSelf);
VlCoroutine Vapb_uart_tb___024root___eval_initial__TOP__0(Vapb_uart_tb___024root* vlSelf);
VlCoroutine Vapb_uart_tb___024root___eval_initial__TOP__1(Vapb_uart_tb___024root* vlSelf);

void Vapb_uart_tb___024root___eval_initial(Vapb_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root___eval_initial\n"); );
    // Body
    Vapb_uart_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vapb_uart_tb___024root___eval_initial__TOP__0(vlSelf);
    Vapb_uart_tb___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__apb_uart_tb__DOT__clk__0 
        = vlSelf->apb_uart_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__apb_uart_tb__DOT__rst_n__0 
        = vlSelf->apb_uart_tb__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vapb_uart_tb___024root___eval_initial__TOP__0(Vapb_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root___eval_initial__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_apb_uart_tb__DOT__apb_write__0__addr;
    __Vtask_apb_uart_tb__DOT__apb_write__0__addr = 0;
    IData/*31:0*/ __Vtask_apb_uart_tb__DOT__apb_write__0__data;
    __Vtask_apb_uart_tb__DOT__apb_write__0__data = 0;
    IData/*31:0*/ __Vtask_apb_uart_tb__DOT__apb_read__1__addr;
    __Vtask_apb_uart_tb__DOT__apb_read__1__addr = 0;
    IData/*31:0*/ __Vtask_apb_uart_tb__DOT__apb_read__2__addr;
    __Vtask_apb_uart_tb__DOT__apb_read__2__addr = 0;
    IData/*31:0*/ __Vtask_apb_uart_tb__DOT__apb_write__3__addr;
    __Vtask_apb_uart_tb__DOT__apb_write__3__addr = 0;
    IData/*31:0*/ __Vtask_apb_uart_tb__DOT__apb_write__3__data;
    __Vtask_apb_uart_tb__DOT__apb_write__3__data = 0;
    IData/*31:0*/ __Vtask_apb_uart_tb__DOT__apb_read__4__addr;
    __Vtask_apb_uart_tb__DOT__apb_read__4__addr = 0;
    IData/*31:0*/ __Vtask_apb_uart_tb__DOT__apb_read__5__addr;
    __Vtask_apb_uart_tb__DOT__apb_read__5__addr = 0;
    // Body
    vlSelf->apb_uart_tb__DOT__rst_n = 0U;
    vlSelf->apb_uart_tb__DOT__PADDR = 0U;
    vlSelf->apb_uart_tb__DOT__PWDATA = 0U;
    vlSelf->apb_uart_tb__DOT__PWRITE = 0U;
    vlSelf->apb_uart_tb__DOT__PSEL = 0U;
    vlSelf->apb_uart_tb__DOT__PENABLE = 0U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "apb_uart_tb.v", 
                                       31);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_uart_tb__DOT__rst_n = 1U;
    __Vtask_apb_uart_tb__DOT__apb_write__0__data = 0xa5U;
    __Vtask_apb_uart_tb__DOT__apb_write__0__addr = 0U;
    co_await vlSelf->__VtrigSched_hd4f004ac__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_uart_tb.clk)", 
                                                       "apb_uart_tb.v", 
                                                       48);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_uart_tb__DOT__PADDR = __Vtask_apb_uart_tb__DOT__apb_write__0__addr;
    vlSelf->apb_uart_tb__DOT__PWDATA = __Vtask_apb_uart_tb__DOT__apb_write__0__data;
    vlSelf->apb_uart_tb__DOT__PWRITE = 1U;
    vlSelf->apb_uart_tb__DOT__PSEL = 1U;
    vlSelf->apb_uart_tb__DOT__PENABLE = 0U;
    co_await vlSelf->__VtrigSched_hd4f004ac__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_uart_tb.clk)", 
                                                       "apb_uart_tb.v", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_uart_tb__DOT__PENABLE = 1U;
    co_await vlSelf->__VtrigSched_hd4f004ac__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_uart_tb.clk)", 
                                                       "apb_uart_tb.v", 
                                                       56);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_uart_tb__DOT__PSEL = 0U;
    vlSelf->apb_uart_tb__DOT__PENABLE = 0U;
    VL_WRITEF("APB WRITE : ADDR=%x DATA=%x\n",32,__Vtask_apb_uart_tb__DOT__apb_write__0__addr,
              32,__Vtask_apb_uart_tb__DOT__apb_write__0__data);
    __Vtask_apb_uart_tb__DOT__apb_read__1__addr = 4U;
    co_await vlSelf->__VtrigSched_hd4f004ac__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_uart_tb.clk)", 
                                                       "apb_uart_tb.v", 
                                                       65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_uart_tb__DOT__PADDR = __Vtask_apb_uart_tb__DOT__apb_read__1__addr;
    vlSelf->apb_uart_tb__DOT__PWRITE = 0U;
    vlSelf->apb_uart_tb__DOT__PSEL = 1U;
    vlSelf->apb_uart_tb__DOT__PENABLE = 0U;
    co_await vlSelf->__VtrigSched_hd4f004ac__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_uart_tb.clk)", 
                                                       "apb_uart_tb.v", 
                                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_uart_tb__DOT__PENABLE = 1U;
    co_await vlSelf->__VtrigSched_hd4f004ac__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_uart_tb.clk)", 
                                                       "apb_uart_tb.v", 
                                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd4f004ac__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_uart_tb.clk)", 
                                                       "apb_uart_tb.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("APB READ  : ADDR=%x DATA=%x\n",32,__Vtask_apb_uart_tb__DOT__apb_read__1__addr,
              32,vlSelf->apb_uart_tb__DOT__PRDATA);
    vlSelf->apb_uart_tb__DOT__PSEL = 0U;
    vlSelf->apb_uart_tb__DOT__PENABLE = 0U;
    __Vtask_apb_uart_tb__DOT__apb_read__2__addr = 8U;
    co_await vlSelf->__VtrigSched_hd4f004ac__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_uart_tb.clk)", 
                                                       "apb_uart_tb.v", 
                                                       65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_uart_tb__DOT__PADDR = __Vtask_apb_uart_tb__DOT__apb_read__2__addr;
    vlSelf->apb_uart_tb__DOT__PWRITE = 0U;
    vlSelf->apb_uart_tb__DOT__PSEL = 1U;
    vlSelf->apb_uart_tb__DOT__PENABLE = 0U;
    co_await vlSelf->__VtrigSched_hd4f004ac__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_uart_tb.clk)", 
                                                       "apb_uart_tb.v", 
                                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_uart_tb__DOT__PENABLE = 1U;
    co_await vlSelf->__VtrigSched_hd4f004ac__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_uart_tb.clk)", 
                                                       "apb_uart_tb.v", 
                                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd4f004ac__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_uart_tb.clk)", 
                                                       "apb_uart_tb.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("APB READ  : ADDR=%x DATA=%x\n",32,__Vtask_apb_uart_tb__DOT__apb_read__2__addr,
              32,vlSelf->apb_uart_tb__DOT__PRDATA);
    vlSelf->apb_uart_tb__DOT__PSEL = 0U;
    vlSelf->apb_uart_tb__DOT__PENABLE = 0U;
    __Vtask_apb_uart_tb__DOT__apb_write__3__data = 0x3cU;
    __Vtask_apb_uart_tb__DOT__apb_write__3__addr = 0U;
    co_await vlSelf->__VtrigSched_hd4f004ac__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_uart_tb.clk)", 
                                                       "apb_uart_tb.v", 
                                                       48);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_uart_tb__DOT__PADDR = __Vtask_apb_uart_tb__DOT__apb_write__3__addr;
    vlSelf->apb_uart_tb__DOT__PWDATA = __Vtask_apb_uart_tb__DOT__apb_write__3__data;
    vlSelf->apb_uart_tb__DOT__PWRITE = 1U;
    vlSelf->apb_uart_tb__DOT__PSEL = 1U;
    vlSelf->apb_uart_tb__DOT__PENABLE = 0U;
    co_await vlSelf->__VtrigSched_hd4f004ac__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_uart_tb.clk)", 
                                                       "apb_uart_tb.v", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_uart_tb__DOT__PENABLE = 1U;
    co_await vlSelf->__VtrigSched_hd4f004ac__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_uart_tb.clk)", 
                                                       "apb_uart_tb.v", 
                                                       56);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_uart_tb__DOT__PSEL = 0U;
    vlSelf->apb_uart_tb__DOT__PENABLE = 0U;
    VL_WRITEF("APB WRITE : ADDR=%x DATA=%x\n",32,__Vtask_apb_uart_tb__DOT__apb_write__3__addr,
              32,__Vtask_apb_uart_tb__DOT__apb_write__3__data);
    __Vtask_apb_uart_tb__DOT__apb_read__4__addr = 4U;
    co_await vlSelf->__VtrigSched_hd4f004ac__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_uart_tb.clk)", 
                                                       "apb_uart_tb.v", 
                                                       65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_uart_tb__DOT__PADDR = __Vtask_apb_uart_tb__DOT__apb_read__4__addr;
    vlSelf->apb_uart_tb__DOT__PWRITE = 0U;
    vlSelf->apb_uart_tb__DOT__PSEL = 1U;
    vlSelf->apb_uart_tb__DOT__PENABLE = 0U;
    co_await vlSelf->__VtrigSched_hd4f004ac__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_uart_tb.clk)", 
                                                       "apb_uart_tb.v", 
                                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_uart_tb__DOT__PENABLE = 1U;
    co_await vlSelf->__VtrigSched_hd4f004ac__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_uart_tb.clk)", 
                                                       "apb_uart_tb.v", 
                                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd4f004ac__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_uart_tb.clk)", 
                                                       "apb_uart_tb.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("APB READ  : ADDR=%x DATA=%x\n",32,__Vtask_apb_uart_tb__DOT__apb_read__4__addr,
              32,vlSelf->apb_uart_tb__DOT__PRDATA);
    vlSelf->apb_uart_tb__DOT__PSEL = 0U;
    vlSelf->apb_uart_tb__DOT__PENABLE = 0U;
    __Vtask_apb_uart_tb__DOT__apb_read__5__addr = 8U;
    co_await vlSelf->__VtrigSched_hd4f004ac__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_uart_tb.clk)", 
                                                       "apb_uart_tb.v", 
                                                       65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_uart_tb__DOT__PADDR = __Vtask_apb_uart_tb__DOT__apb_read__5__addr;
    vlSelf->apb_uart_tb__DOT__PWRITE = 0U;
    vlSelf->apb_uart_tb__DOT__PSEL = 1U;
    vlSelf->apb_uart_tb__DOT__PENABLE = 0U;
    co_await vlSelf->__VtrigSched_hd4f004ac__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_uart_tb.clk)", 
                                                       "apb_uart_tb.v", 
                                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_uart_tb__DOT__PENABLE = 1U;
    co_await vlSelf->__VtrigSched_hd4f004ac__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_uart_tb.clk)", 
                                                       "apb_uart_tb.v", 
                                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd4f004ac__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_uart_tb.clk)", 
                                                       "apb_uart_tb.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("APB READ  : ADDR=%x DATA=%x\n",32,__Vtask_apb_uart_tb__DOT__apb_read__5__addr,
              32,vlSelf->apb_uart_tb__DOT__PRDATA);
    vlSelf->apb_uart_tb__DOT__PSEL = 0U;
    vlSelf->apb_uart_tb__DOT__PENABLE = 0U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "apb_uart_tb.v", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("apb_uart_tb.v", 44, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vapb_uart_tb___024root___eval_initial__TOP__1(Vapb_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x2710ULL, 
                                           nullptr, 
                                           "apb_uart_tb.v", 
                                           23);
        vlSelf->apb_uart_tb__DOT__clk = (1U & (~ (IData)(vlSelf->apb_uart_tb__DOT__clk)));
    }
}

void Vapb_uart_tb___024root___eval_act(Vapb_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vapb_uart_tb___024root___nba_sequent__TOP__0(Vapb_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->apb_uart_tb__DOT__rst_n) {
        vlSelf->apb_uart_tb__DOT__PREADY = 0U;
        if (((IData)(vlSelf->apb_uart_tb__DOT__PSEL) 
             & (IData)(vlSelf->apb_uart_tb__DOT__PENABLE))) {
            vlSelf->apb_uart_tb__DOT__PREADY = 1U;
            if ((1U & (~ (IData)(vlSelf->apb_uart_tb__DOT__PWRITE)))) {
                vlSelf->apb_uart_tb__DOT__PRDATA = 
                    ((4U == (0xffU & vlSelf->apb_uart_tb__DOT__PADDR))
                      ? (IData)(vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__rx_data)
                      : ((8U == (0xffU & vlSelf->apb_uart_tb__DOT__PADDR))
                          ? (((IData)(vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_busy) 
                              << 1U) | (IData)(vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__rx_ready))
                          : 0U));
            }
        }
        vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__rx_ready = 0U;
        if (vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_write) {
            vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__uart_inst__DOT__tx_reg 
                = vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_data;
            vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_busy = 1U;
            vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_busy = 0U;
            vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__rx_ready = 1U;
            vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__rx_data 
                = vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_data;
        }
        vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_write = 0U;
        if (((IData)(vlSelf->apb_uart_tb__DOT__PSEL) 
             & (IData)(vlSelf->apb_uart_tb__DOT__PENABLE))) {
            if (vlSelf->apb_uart_tb__DOT__PWRITE) {
                if ((0U == (0xffU & vlSelf->apb_uart_tb__DOT__PADDR))) {
                    vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_write = 1U;
                    vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_data 
                        = (0xffU & vlSelf->apb_uart_tb__DOT__PWDATA);
                }
            }
        }
    } else {
        vlSelf->apb_uart_tb__DOT__PREADY = 0U;
        vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__uart_inst__DOT__tx_reg = 0U;
        vlSelf->apb_uart_tb__DOT__PRDATA = 0U;
        vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_busy = 0U;
        vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__rx_ready = 0U;
        vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__rx_data = 0U;
        vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_write = 0U;
        vlSelf->apb_uart_tb__DOT__dut__DOT__dut__DOT__tx_data = 0U;
    }
}

void Vapb_uart_tb___024root___eval_nba(Vapb_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vapb_uart_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vapb_uart_tb___024root___eval_triggers__act(Vapb_uart_tb___024root* vlSelf);
void Vapb_uart_tb___024root___timing_commit(Vapb_uart_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_uart_tb___024root___dump_triggers__act(Vapb_uart_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vapb_uart_tb___024root___timing_resume(Vapb_uart_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_uart_tb___024root___dump_triggers__nba(Vapb_uart_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vapb_uart_tb___024root___eval(Vapb_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vapb_uart_tb___024root___eval_triggers__act(vlSelf);
            Vapb_uart_tb___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vapb_uart_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("apb_uart_tb.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vapb_uart_tb___024root___timing_resume(vlSelf);
                Vapb_uart_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vapb_uart_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("apb_uart_tb.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vapb_uart_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vapb_uart_tb___024root___timing_commit(Vapb_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hd4f004ac__0.commit("@(posedge apb_uart_tb.clk)");
    }
}

void Vapb_uart_tb___024root___timing_resume(Vapb_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hd4f004ac__0.resume("@(posedge apb_uart_tb.clk)");
    }
}

#ifdef VL_DEBUG
void Vapb_uart_tb___024root___eval_debug_assertions(Vapb_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
