// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varithmetic_blocks.h for the primary calling header

#include "Varithmetic_blocks__pch.h"

VL_ATTR_COLD void Varithmetic_blocks___024root___eval_static(Varithmetic_blocks___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_blocks___024root___eval_static\n"); );
    Varithmetic_blocks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__A__0 = vlSelfRef.__VprimaryPorts.A;
    vlSelfRef.__Vtrigprevexpr___TOP__B__0 = vlSelfRef.__VprimaryPorts.B;
}

VL_ATTR_COLD void Varithmetic_blocks___024root___eval_initial(Varithmetic_blocks___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_blocks___024root___eval_initial\n"); );
    Varithmetic_blocks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Varithmetic_blocks___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Varithmetic_blocks___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in);
void Varithmetic_blocks___024root___ico_comb__TOP__0(Varithmetic_blocks___024root* vlSelf);

VL_ATTR_COLD bool Varithmetic_blocks___024root___eval_stl(Varithmetic_blocks___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_blocks___024root___eval_stl\n"); );
    Varithmetic_blocks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Varithmetic_blocks___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Varithmetic_blocks___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((((1ULL & vlSelfRef.__VstlTriggered[0U])) != 0ULL)) {
                Varithmetic_blocks___024root___ico_comb__TOP__0(vlSelf);
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

VL_ATTR_COLD void Varithmetic_blocks___024root___eval_dump_triggers__stl(Varithmetic_blocks___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_blocks___024root___eval_dump_triggers__stl\n"); );
    Varithmetic_blocks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Varithmetic_blocks___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Varithmetic_blocks___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 2> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Varithmetic_blocks___024root___eval_dump_triggers__ico(Varithmetic_blocks___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_blocks___024root___eval_dump_triggers__ico\n"); );
    Varithmetic_blocks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Varithmetic_blocks___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

VL_ATTR_COLD void Varithmetic_blocks___024root___eval_dump_triggers__act(Varithmetic_blocks___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_blocks___024root___eval_dump_triggers__act\n"); );
    Varithmetic_blocks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Varithmetic_blocks___024root___eval_dump_triggers__nba(Varithmetic_blocks___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_blocks___024root___eval_dump_triggers__nba\n"); );
    Varithmetic_blocks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Varithmetic_blocks___024root___eval_dump_triggers__obs(Varithmetic_blocks___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_blocks___024root___eval_dump_triggers__obs\n"); );
    Varithmetic_blocks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Varithmetic_blocks___024root___eval_dump_triggers__react(Varithmetic_blocks___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_blocks___024root___eval_dump_triggers__react\n"); );
    Varithmetic_blocks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Varithmetic_blocks___024root___eval_final(Varithmetic_blocks___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_blocks___024root___eval_final\n"); );
    Varithmetic_blocks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Varithmetic_blocks___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_blocks___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (::IData)(Varithmetic_blocks___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Varithmetic_blocks___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_blocks___024root___trigger_anySet__stl\n"); );
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

bool Varithmetic_blocks___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Varithmetic_blocks___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 2> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_blocks___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (::IData)(Varithmetic_blocks___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( A)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( B)\n");
    }
    if ((1U & (::IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Varithmetic_blocks___024root___ctor_var_reset(Varithmetic_blocks___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_blocks___024root___ctor_var_reset\n"); );
    Varithmetic_blocks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__VprimaryPorts.A = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3969090544990846983ull);
    vlSelf->__VprimaryPorts.B = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 149303876845869574ull);
    vlSelf->__VprimaryPorts.Diff = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2521349494583637701ull);
    vlSelf->__VprimaryPorts.bout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2454981832103845517ull);
    vlSelf->sub_4bit__DOT__adder_inst__DOT__fa3__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6825831250434573042ull);
    vlSelf->sub_4bit__DOT__adder_inst__DOT__fa2__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17247303676983280916ull);
    vlSelf->sub_4bit__DOT__adder_inst__DOT__fa1__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15071287275563175209ull);
    vlSelf->__Vdfg_Regularize_47 = 0;
    vlSelf->__Vdfg_Regularize_48 = 0;
    vlSelf->__Vdfg_Regularize_49 = 0;
    vlSelf->__VstlTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VstlTriggered.data(), sizeof(vlSelf->__VstlTriggered[0]), 1);
    vlSelf->__VicoTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VicoTriggered.data(), sizeof(vlSelf->__VicoTriggered[0]), 2);
    vlSelf->__Vtrigprevexpr___TOP__A__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__B__0 = 0;
    vlSelf->__VtraceActivity[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VtraceActivity.data(), sizeof(vlSelf->__VtraceActivity[0]), 2);
}
