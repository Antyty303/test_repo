// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vadder_4bit.h for the primary calling header

#ifndef VERILATED_VADDER_4BIT___024ROOT_H_
#define VERILATED_VADDER_4BIT___024ROOT_H_  // guard

#include "verilated.h"


class Vadder_4bit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vadder_4bit___024root final {
  public:

    // TOP LEVEL PORTS
    union {
        struct {
            VL_IN8(A,3,0);
            VL_IN8(B,3,0);
            VL_IN8(cin,0,0);
            VL_OUT8(S,3,0);
            VL_OUT8(cout,0,0);
        } __VprimaryPorts;
    };

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ adder_4bit__DOT__fa3__DOT__cin;
    ::CData/*0:0*/ adder_4bit__DOT__fa2__DOT__cin;
    ::CData/*0:0*/ adder_4bit__DOT__fa1__DOT__cin;
    ::CData/*3:0*/ __Vdfg_Regularize_41;
    ::CData/*3:0*/ __Vdfg_Regularize_42;
    ::CData/*3:0*/ __Vdfg_Regularize_43;
    ::CData/*3:0*/ __Vtrigprevexpr___TOP__A__0;
    ::CData/*3:0*/ __Vtrigprevexpr___TOP__B__0;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__cin__0;
    ::VlUnpacked<::QData/*63:0*/, 1> __VstlTriggered;
    ::VlUnpacked<::QData/*63:0*/, 2> __VicoTriggered;
    ::VlUnpacked<::CData/*0:0*/, 2> __VtraceActivity;

    // INTERNAL VARIABLES
    Vadder_4bit__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vadder_4bit___024root(Vadder_4bit__Syms* symsp, const char* namep);
    ~Vadder_4bit___024root();
    VL_UNCOPYABLE(Vadder_4bit___024root);
    VL_UNMOVABLE(Vadder_4bit___024root);

    // INTERNAL METHODS
};


#endif  // guard
