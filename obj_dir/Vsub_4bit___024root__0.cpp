// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsub_4bit.h for the primary calling header

#include "Vsub_4bit__pch.h"

void Vsub_4bit___024root___eval_sample(Vsub_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsub_4bit___024root___eval_sample\n"); );
    Vsub_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsub_4bit___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 2> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
bool Vsub_4bit___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 2> &in);
void Vsub_4bit___024root___ico_comb__TOP__0(Vsub_4bit___024root* vlSelf);

bool Vsub_4bit___024root___eval_ico(Vsub_4bit___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsub_4bit___024root___eval_ico\n"); );
    Vsub_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VicoExecute;
    // Body
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | (::IData)((::IData)(firstIteration)));
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = (::QData)((::IData)(
                                                            ((((::IData)(vlSelfRef.__VprimaryPorts.B) 
                                                               != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__B__0)) 
                                                              << 1U) 
                                                             | ((::IData)(vlSelfRef.__VprimaryPorts.A) 
                                                                != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__A__0)))));
        vlSelfRef.__Vtrigprevexpr___TOP__A__0 = vlSelfRef.__VprimaryPorts.A;
        vlSelfRef.__Vtrigprevexpr___TOP__B__0 = vlSelfRef.__VprimaryPorts.B;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsub_4bit___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vsub_4bit___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_body__ico
            if ((((3ULL & vlSelfRef.__VicoTriggered[0U])) != 0ULL)) {
                Vsub_4bit___024root___ico_comb__TOP__0(vlSelf);
                vlSelfRef.__VtraceActivity[1U] = 1U;
            }
        }
    }
    return (__VicoExecute);
}

bool Vsub_4bit___024root___eval_act(Vsub_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsub_4bit___024root___eval_act\n"); );
    Vsub_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vsub_4bit___024root___eval_inact(Vsub_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsub_4bit___024root___eval_inact\n"); );
    Vsub_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vsub_4bit___024root___eval_nba(Vsub_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsub_4bit___024root___eval_nba\n"); );
    Vsub_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vsub_4bit___024root___eval_obs(Vsub_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsub_4bit___024root___eval_obs\n"); );
    Vsub_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vsub_4bit___024root___eval_react(Vsub_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsub_4bit___024root___eval_react\n"); );
    Vsub_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vsub_4bit___024root___eval_postponed(Vsub_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsub_4bit___024root___eval_postponed\n"); );
    Vsub_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vsub_4bit___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsub_4bit___024root___trigger_anySet__ico\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((::IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void Vsub_4bit___024root___ico_comb__TOP__0(Vsub_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsub_4bit___024root___ico_comb__TOP__0\n"); );
    Vsub_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdfg_Regularize_48 = (0x0000000fU & 
                                      ((~ (::IData)(vlSelfRef.__VprimaryPorts.B)) 
                                       ^ (::IData)(vlSelfRef.__VprimaryPorts.A)));
    vlSelfRef.__Vdfg_Regularize_47 = ((~ (::IData)(vlSelfRef.__VprimaryPorts.B)) 
                                      & (::IData)(vlSelfRef.__VprimaryPorts.A));
    vlSelfRef.__Vdfg_Regularize_49 = (0x0000000fU & 
                                      ((~ (::IData)(vlSelfRef.__VprimaryPorts.B)) 
                                       | (::IData)(vlSelfRef.__VprimaryPorts.A)));
    vlSelfRef.sub_4bit__DOT__adder_inst__DOT__fa1__DOT__cin 
        = (1U & ((::IData)(vlSelfRef.__Vdfg_Regularize_47) 
                 | (::IData)(vlSelfRef.__Vdfg_Regularize_49)));
    vlSelfRef.sub_4bit__DOT__adder_inst__DOT__fa2__DOT__cin 
        = (1U & (((::IData)(vlSelfRef.sub_4bit__DOT__adder_inst__DOT__fa1__DOT__cin) 
                  & ((::IData)(vlSelfRef.__Vdfg_Regularize_49) 
                     >> 1U)) | ((::IData)(vlSelfRef.__Vdfg_Regularize_47) 
                                >> 1U)));
    vlSelfRef.sub_4bit__DOT__adder_inst__DOT__fa3__DOT__cin 
        = (1U & (((::IData)(vlSelfRef.sub_4bit__DOT__adder_inst__DOT__fa2__DOT__cin) 
                  & ((::IData)(vlSelfRef.__Vdfg_Regularize_49) 
                     >> 2U)) | ((::IData)(vlSelfRef.__Vdfg_Regularize_47) 
                                >> 2U)));
    vlSelfRef.__VprimaryPorts.bout = (1U & (~ (((::IData)(vlSelfRef.sub_4bit__DOT__adder_inst__DOT__fa3__DOT__cin) 
                                                & ((::IData)(vlSelfRef.__Vdfg_Regularize_49) 
                                                   >> 3U)) 
                                               | ((::IData)(vlSelfRef.__Vdfg_Regularize_47) 
                                                  >> 3U))));
    vlSelfRef.__VprimaryPorts.Diff = (((((::IData)(vlSelfRef.sub_4bit__DOT__adder_inst__DOT__fa3__DOT__cin) 
                                         ^ ((::IData)(vlSelfRef.__Vdfg_Regularize_48) 
                                            >> 3U)) 
                                        << 3U) | (4U 
                                                  & (((::IData)(vlSelfRef.sub_4bit__DOT__adder_inst__DOT__fa2__DOT__cin) 
                                                      << 2U) 
                                                     ^ 
                                                     (0xfffffffcU 
                                                      & (::IData)(vlSelfRef.__Vdfg_Regularize_48))))) 
                                      | ((2U & (((::IData)(vlSelfRef.sub_4bit__DOT__adder_inst__DOT__fa1__DOT__cin) 
                                                 << 1U) 
                                                ^ (0xfffffffeU 
                                                   & (::IData)(vlSelfRef.__Vdfg_Regularize_48)))) 
                                         | (1U & (~ (::IData)(vlSelfRef.__Vdfg_Regularize_48)))));
}

#ifdef VL_DEBUG
void Vsub_4bit___024root___eval_debug_assertions(Vsub_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsub_4bit___024root___eval_debug_assertions\n"); );
    Vsub_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__VprimaryPorts.A & 0xf0U)))) {
        Verilated::overWidthError("A");
    }
    if (VL_UNLIKELY(((vlSelfRef.__VprimaryPorts.B & 0xf0U)))) {
        Verilated::overWidthError("B");
    }
}
#endif  // VL_DEBUG
