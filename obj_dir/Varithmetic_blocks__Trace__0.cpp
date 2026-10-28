// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Varithmetic_blocks__Syms.h"


void Varithmetic_blocks___024root__trace_chg_0_sub_0(Varithmetic_blocks___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Varithmetic_blocks___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_blocks___024root__trace_chg_0\n"); );
    // Body
    Varithmetic_blocks___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Varithmetic_blocks___024root*>(voidSelf);
    Varithmetic_blocks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Varithmetic_blocks___024root__trace_chg_0_sub_0((&vlSymsp->vlInst.TOP), bufp);
}

void Varithmetic_blocks___024root__trace_chg_0_sub_0(Varithmetic_blocks___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_blocks___024root__trace_chg_0_sub_0\n"); );
    Varithmetic_blocks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__VtraceActivity[1U]))) {
        bufp->chgBit(oldp+0,((1U & (((::IData)(vlSelfRef.sub_4bit__DOT__adder_inst__DOT__fa3__DOT__cin) 
                                     & ((::IData)(vlSelfRef.__Vdfg_Regularize_49) 
                                        >> 3U)) | ((::IData)(vlSelfRef.__Vdfg_Regularize_47) 
                                                   >> 3U)))));
        bufp->chgBit(oldp+1,(vlSelfRef.sub_4bit__DOT__adder_inst__DOT__fa1__DOT__cin));
        bufp->chgBit(oldp+2,(vlSelfRef.sub_4bit__DOT__adder_inst__DOT__fa2__DOT__cin));
        bufp->chgBit(oldp+3,(vlSelfRef.sub_4bit__DOT__adder_inst__DOT__fa3__DOT__cin));
        bufp->chgBit(oldp+4,((1U & (~ (::IData)(vlSelfRef.__Vdfg_Regularize_48)))));
        bufp->chgBit(oldp+5,((1U & ((::IData)(vlSelfRef.sub_4bit__DOT__adder_inst__DOT__fa1__DOT__cin) 
                                    ^ ((::IData)(vlSelfRef.__Vdfg_Regularize_48) 
                                       >> 1U)))));
        bufp->chgBit(oldp+6,((1U & ((::IData)(vlSelfRef.sub_4bit__DOT__adder_inst__DOT__fa2__DOT__cin) 
                                    ^ ((::IData)(vlSelfRef.__Vdfg_Regularize_48) 
                                       >> 2U)))));
        bufp->chgBit(oldp+7,(((::IData)(vlSelfRef.sub_4bit__DOT__adder_inst__DOT__fa3__DOT__cin) 
                              ^ ((::IData)(vlSelfRef.__Vdfg_Regularize_48) 
                                 >> 3U))));
    }
    bufp->chgCData(oldp+8,(vlSelfRef.__VprimaryPorts.A),4);
    bufp->chgCData(oldp+9,(vlSelfRef.__VprimaryPorts.B),4);
    bufp->chgCData(oldp+10,(vlSelfRef.__VprimaryPorts.Diff),4);
    bufp->chgBit(oldp+11,(vlSelfRef.__VprimaryPorts.bout));
    bufp->chgCData(oldp+12,((0x0000000fU & (~ (::IData)(vlSelfRef.__VprimaryPorts.B)))),4);
    bufp->chgBit(oldp+13,((1U & (::IData)(vlSelfRef.__VprimaryPorts.A))));
    bufp->chgBit(oldp+14,((1U & (~ (::IData)(vlSelfRef.__VprimaryPorts.B)))));
    bufp->chgBit(oldp+15,((1U & ((::IData)(vlSelfRef.__VprimaryPorts.A) 
                                 >> 1U))));
    bufp->chgBit(oldp+16,((1U & (~ ((::IData)(vlSelfRef.__VprimaryPorts.B) 
                                    >> 1U)))));
    bufp->chgBit(oldp+17,((1U & ((::IData)(vlSelfRef.__VprimaryPorts.A) 
                                 >> 2U))));
    bufp->chgBit(oldp+18,((1U & (~ ((::IData)(vlSelfRef.__VprimaryPorts.B) 
                                    >> 2U)))));
    bufp->chgBit(oldp+19,((1U & ((::IData)(vlSelfRef.__VprimaryPorts.A) 
                                 >> 3U))));
    bufp->chgBit(oldp+20,((1U & (~ ((::IData)(vlSelfRef.__VprimaryPorts.B) 
                                    >> 3U)))));
}

void Varithmetic_blocks___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_blocks___024root__trace_cleanup\n"); );
    // Body
    Varithmetic_blocks___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Varithmetic_blocks___024root*>(voidSelf);
    Varithmetic_blocks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->vlInst.TOP.__VtraceActivity[0U] = 0U;
    vlSymsp->vlInst.TOP.__VtraceActivity[1U] = 0U;
}
