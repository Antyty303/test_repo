// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vadder_4bit__Syms.h"


void Vadder_4bit___024root__trace_chg_0_sub_0(Vadder_4bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vadder_4bit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root__trace_chg_0\n"); );
    // Body
    Vadder_4bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadder_4bit___024root*>(voidSelf);
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vadder_4bit___024root__trace_chg_0_sub_0((&vlSymsp->vlInst.TOP), bufp);
}

void Vadder_4bit___024root__trace_chg_0_sub_0(Vadder_4bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root__trace_chg_0_sub_0\n"); );
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__VtraceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.adder_4bit__DOT__fa1__DOT__cin));
        bufp->chgBit(oldp+1,(vlSelfRef.adder_4bit__DOT__fa2__DOT__cin));
        bufp->chgBit(oldp+2,(vlSelfRef.adder_4bit__DOT__fa3__DOT__cin));
    }
    bufp->chgCData(oldp+3,(vlSelfRef.__VprimaryPorts.A),4);
    bufp->chgCData(oldp+4,(vlSelfRef.__VprimaryPorts.B),4);
    bufp->chgBit(oldp+5,(vlSelfRef.__VprimaryPorts.cin));
    bufp->chgCData(oldp+6,(vlSelfRef.__VprimaryPorts.S),4);
    bufp->chgBit(oldp+7,(vlSelfRef.__VprimaryPorts.cout));
    bufp->chgBit(oldp+8,((1U & (::IData)(vlSelfRef.__VprimaryPorts.A))));
    bufp->chgBit(oldp+9,((1U & (::IData)(vlSelfRef.__VprimaryPorts.B))));
    bufp->chgBit(oldp+10,((1U & ((::IData)(vlSelfRef.__VprimaryPorts.cin) 
                                 ^ (::IData)(vlSelfRef.__Vdfg_Regularize_43)))));
    bufp->chgBit(oldp+11,((1U & ((::IData)(vlSelfRef.__VprimaryPorts.A) 
                                 >> 1U))));
    bufp->chgBit(oldp+12,((1U & ((::IData)(vlSelfRef.__VprimaryPorts.B) 
                                 >> 1U))));
    bufp->chgBit(oldp+13,((1U & ((::IData)(vlSelfRef.adder_4bit__DOT__fa1__DOT__cin) 
                                 ^ ((::IData)(vlSelfRef.__Vdfg_Regularize_43) 
                                    >> 1U)))));
    bufp->chgBit(oldp+14,((1U & ((::IData)(vlSelfRef.__VprimaryPorts.A) 
                                 >> 2U))));
    bufp->chgBit(oldp+15,((1U & ((::IData)(vlSelfRef.__VprimaryPorts.B) 
                                 >> 2U))));
    bufp->chgBit(oldp+16,((1U & ((::IData)(vlSelfRef.adder_4bit__DOT__fa2__DOT__cin) 
                                 ^ ((::IData)(vlSelfRef.__Vdfg_Regularize_43) 
                                    >> 2U)))));
    bufp->chgBit(oldp+17,((1U & ((::IData)(vlSelfRef.__VprimaryPorts.A) 
                                 >> 3U))));
    bufp->chgBit(oldp+18,((1U & ((::IData)(vlSelfRef.__VprimaryPorts.B) 
                                 >> 3U))));
    bufp->chgBit(oldp+19,(((::IData)(vlSelfRef.adder_4bit__DOT__fa3__DOT__cin) 
                           ^ ((::IData)(vlSelfRef.__Vdfg_Regularize_43) 
                              >> 3U))));
}

void Vadder_4bit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root__trace_cleanup\n"); );
    // Body
    Vadder_4bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadder_4bit___024root*>(voidSelf);
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->vlInst.TOP.__VtraceActivity[0U] = 0U;
    vlSymsp->vlInst.TOP.__VtraceActivity[1U] = 0U;
}
