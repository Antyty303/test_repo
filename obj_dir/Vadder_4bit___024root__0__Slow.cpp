// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder_4bit.h for the primary calling header

#include "Vadder_4bit__pch.h"

VL_ATTR_COLD void Vadder_4bit___024root___eval_static(Vadder_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___eval_static\n"); );
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__A__0 = vlSelfRef.__VprimaryPorts.A;
    vlSelfRef.__Vtrigprevexpr___TOP__B__0 = vlSelfRef.__VprimaryPorts.B;
    vlSelfRef.__Vtrigprevexpr___TOP__cin__0 = vlSelfRef.__VprimaryPorts.cin;
}

VL_ATTR_COLD void Vadder_4bit___024root___eval_initial(Vadder_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___eval_initial\n"); );
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadder_4bit___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vadder_4bit___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool Vadder_4bit___024root___eval_stl(Vadder_4bit___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___eval_stl\n"); );
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vadder_4bit___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vadder_4bit___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((((1ULL & vlSelfRef.__VstlTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _stl_comb__TOP__0
                    vlSelfRef.__Vdfg_Regularize_43 
                        = ((::IData)(vlSelfRef.__VprimaryPorts.B) 
                           ^ (::IData)(vlSelfRef.__VprimaryPorts.A));
                    vlSelfRef.__Vdfg_Regularize_41 
                        = ((::IData)(vlSelfRef.__VprimaryPorts.B) 
                           | (::IData)(vlSelfRef.__VprimaryPorts.A));
                    vlSelfRef.__Vdfg_Regularize_42 
                        = ((::IData)(vlSelfRef.__VprimaryPorts.B) 
                           & (::IData)(vlSelfRef.__VprimaryPorts.A));
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
                {
                    // Inlined CFunc: __VtraceActivitySetAll
                    vlSelfRef.__VtraceActivity[0U] = 1U;
                    vlSelfRef.__VtraceActivity[1U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vadder_4bit___024root___eval_dump_triggers__stl(Vadder_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___eval_dump_triggers__stl\n"); );
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vadder_4bit___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadder_4bit___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 2> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vadder_4bit___024root___eval_dump_triggers__ico(Vadder_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___eval_dump_triggers__ico\n"); );
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vadder_4bit___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

VL_ATTR_COLD void Vadder_4bit___024root___eval_dump_triggers__act(Vadder_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___eval_dump_triggers__act\n"); );
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vadder_4bit___024root___eval_dump_triggers__nba(Vadder_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___eval_dump_triggers__nba\n"); );
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vadder_4bit___024root___eval_dump_triggers__obs(Vadder_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___eval_dump_triggers__obs\n"); );
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vadder_4bit___024root___eval_dump_triggers__react(Vadder_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___eval_dump_triggers__react\n"); );
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vadder_4bit___024root___eval_final(Vadder_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___eval_final\n"); );
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadder_4bit___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (::IData)(Vadder_4bit___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vadder_4bit___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___trigger_anySet__stl\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((::IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool Vadder_4bit___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadder_4bit___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 2> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (::IData)(Vadder_4bit___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( A)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( B)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( cin)\n");
    }
    if ((1U & (::IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vadder_4bit___024root___ctor_var_reset(Vadder_4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___ctor_var_reset\n"); );
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__VprimaryPorts.A = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3969090544990846983ull);
    vlSelf->__VprimaryPorts.B = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 149303876845869574ull);
    vlSelf->__VprimaryPorts.cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8404852791380219477ull);
    vlSelf->__VprimaryPorts.S = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16337536289976144572ull);
    vlSelf->__VprimaryPorts.cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3402043879796434022ull);
    vlSelf->adder_4bit__DOT__fa3__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4418680734981220210ull);
    vlSelf->adder_4bit__DOT__fa2__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16780415729420014891ull);
    vlSelf->adder_4bit__DOT__fa1__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13363244246487918482ull);
    vlSelf->__Vdfg_Regularize_41 = 0;
    vlSelf->__Vdfg_Regularize_42 = 0;
    vlSelf->__Vdfg_Regularize_43 = 0;
    vlSelf->__VstlTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VstlTriggered.data(), sizeof(vlSelf->__VstlTriggered[0]), 1);
    vlSelf->__VicoTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VicoTriggered.data(), sizeof(vlSelf->__VicoTriggered[0]), 2);
    vlSelf->__Vtrigprevexpr___TOP__A__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__B__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cin__0 = 0;
    vlSelf->__VtraceActivity[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VtraceActivity.data(), sizeof(vlSelf->__VtraceActivity[0]), 2);
}
