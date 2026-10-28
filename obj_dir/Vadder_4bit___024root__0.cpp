// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder_4bit.h for the primary calling header

#include "Vadder_4bit__pch.h"

void Vadder_4bit___024root___eval_sample(Vadder_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___eval_sample\n"); );
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadder_4bit___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 2> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
bool Vadder_4bit___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 2> &in);

bool Vadder_4bit___024root___eval_ico(Vadder_4bit___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___eval_ico\n"); );
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
                                                            ((((::IData)(vlSelfRef.__VprimaryPorts.cin) 
                                                               != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__cin__0)) 
                                                              << 2U) 
                                                             | ((((::IData)(vlSelfRef.__VprimaryPorts.B) 
                                                                  != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__B__0)) 
                                                                 << 1U) 
                                                                | ((::IData)(vlSelfRef.__VprimaryPorts.A) 
                                                                   != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__A__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__A__0 = vlSelfRef.__VprimaryPorts.A;
        vlSelfRef.__Vtrigprevexpr___TOP__B__0 = vlSelfRef.__VprimaryPorts.B;
        vlSelfRef.__Vtrigprevexpr___TOP__cin__0 = vlSelfRef.__VprimaryPorts.cin;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vadder_4bit___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vadder_4bit___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_body__ico
            if ((((3ULL & vlSelfRef.__VicoTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _ico_comb__TOP__0
                    vlSelfRef.__Vdfg_Regularize_43 
                        = ((::IData)(vlSelfRef.__VprimaryPorts.B) 
                           ^ (::IData)(vlSelfRef.__VprimaryPorts.A));
                    vlSelfRef.__Vdfg_Regularize_41 
                        = ((::IData)(vlSelfRef.__VprimaryPorts.B) 
                           | (::IData)(vlSelfRef.__VprimaryPorts.A));
                    vlSelfRef.__Vdfg_Regularize_42 
                        = ((::IData)(vlSelfRef.__VprimaryPorts.B) 
                           & (::IData)(vlSelfRef.__VprimaryPorts.A));
                }
            }
            if ((((7ULL & vlSelfRef.__VicoTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _ico_comb__TOP__1
                    vlSelfRef.adder_4bit__DOT__fa1__DOT__cin 
                        = (1U & (((::IData)(vlSelfRef.__VprimaryPorts.cin) 
                                  & (::IData)(vlSelfRef.__Vdfg_Regularize_41)) 
                                 | (::IData)(vlSelfRef.__Vdfg_Regularize_42)));
                    vlSelfRef.adder_4bit__DOT__fa2__DOT__cin 
                        = (1U & (((::IData)(vlSelfRef.adder_4bit__DOT__fa1__DOT__cin) 
                                  & ((::IData)(vlSelfRef.__Vdfg_Regularize_41) 
                                     >> 1U)) | ((::IData)(vlSelfRef.__Vdfg_Regularize_42) 
                                                >> 1U)));
                    vlSelfRef.adder_4bit__DOT__fa3__DOT__cin 
                        = (1U & (((::IData)(vlSelfRef.adder_4bit__DOT__fa2__DOT__cin) 
                                  & ((::IData)(vlSelfRef.__Vdfg_Regularize_41) 
                                     >> 2U)) | ((::IData)(vlSelfRef.__Vdfg_Regularize_42) 
                                                >> 2U)));
                    vlSelfRef.__VprimaryPorts.cout 
                        = (1U & (((::IData)(vlSelfRef.adder_4bit__DOT__fa3__DOT__cin) 
                                  & ((::IData)(vlSelfRef.__Vdfg_Regularize_41) 
                                     >> 3U)) | ((::IData)(vlSelfRef.__Vdfg_Regularize_42) 
                                                >> 3U)));
                    vlSelfRef.__VprimaryPorts.S = (
                                                   ((((::IData)(vlSelfRef.adder_4bit__DOT__fa3__DOT__cin) 
                                                      ^ 
                                                      ((::IData)(vlSelfRef.__Vdfg_Regularize_43) 
                                                       >> 3U)) 
                                                     << 3U) 
                                                    | (4U 
                                                       & (((::IData)(vlSelfRef.adder_4bit__DOT__fa2__DOT__cin) 
                                                           << 2U) 
                                                          ^ 
                                                          (0xfffffffcU 
                                                           & (::IData)(vlSelfRef.__Vdfg_Regularize_43))))) 
                                                   | ((2U 
                                                       & (((::IData)(vlSelfRef.adder_4bit__DOT__fa1__DOT__cin) 
                                                           << 1U) 
                                                          ^ 
                                                          (0xfffffffeU 
                                                           & (::IData)(vlSelfRef.__Vdfg_Regularize_43)))) 
                                                      | (1U 
                                                         & ((::IData)(vlSelfRef.__VprimaryPorts.cin) 
                                                            ^ (::IData)(vlSelfRef.__Vdfg_Regularize_43)))));
                }
                vlSelfRef.__VtraceActivity[1U] = 1U;
            }
        }
    }
    return (__VicoExecute);
}

bool Vadder_4bit___024root___eval_act(Vadder_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___eval_act\n"); );
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vadder_4bit___024root___eval_inact(Vadder_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___eval_inact\n"); );
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vadder_4bit___024root___eval_nba(Vadder_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___eval_nba\n"); );
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vadder_4bit___024root___eval_obs(Vadder_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___eval_obs\n"); );
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vadder_4bit___024root___eval_react(Vadder_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___eval_react\n"); );
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vadder_4bit___024root___eval_postponed(Vadder_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___eval_postponed\n"); );
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vadder_4bit___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___trigger_anySet__ico\n"); );
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

#ifdef VL_DEBUG
void Vadder_4bit___024root___eval_debug_assertions(Vadder_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___eval_debug_assertions\n"); );
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__VprimaryPorts.A & 0xf0U)))) {
        Verilated::overWidthError("A");
    }
    if (VL_UNLIKELY(((vlSelfRef.__VprimaryPorts.B & 0xf0U)))) {
        Verilated::overWidthError("B");
    }
    if (VL_UNLIKELY(((vlSelfRef.__VprimaryPorts.cin 
                      & 0xfeU)))) {
        Verilated::overWidthError("cin");
    }
}
#endif  // VL_DEBUG
