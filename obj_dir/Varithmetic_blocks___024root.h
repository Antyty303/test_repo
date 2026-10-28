// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varithmetic_blocks.h for the primary calling header

#ifndef VERILATED_VARITHMETIC_BLOCKS___024ROOT_H_
#define VERILATED_VARITHMETIC_BLOCKS___024ROOT_H_  // guard

#include "verilated.h"


class Varithmetic_blocks__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varithmetic_blocks___024root final {
  public:

    // TOP LEVEL PORTS
    union {
        struct {
            VL_IN8(A,3,0);
            VL_IN8(B,3,0);
            VL_OUT8(Diff,3,0);
            VL_OUT8(bout,0,0);
        } __VprimaryPorts;
    };

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ sub_4bit__DOT__adder_inst__DOT__fa3__DOT__cin;
    ::CData/*0:0*/ sub_4bit__DOT__adder_inst__DOT__fa2__DOT__cin;
    ::CData/*0:0*/ sub_4bit__DOT__adder_inst__DOT__fa1__DOT__cin;
    ::CData/*3:0*/ __Vdfg_Regularize_47;
    ::CData/*3:0*/ __Vdfg_Regularize_48;
    ::CData/*3:0*/ __Vdfg_Regularize_49;
    ::CData/*3:0*/ __Vtrigprevexpr___TOP__A__0;
    ::CData/*3:0*/ __Vtrigprevexpr___TOP__B__0;
    ::VlUnpacked<::QData/*63:0*/, 1> __VstlTriggered;
    ::VlUnpacked<::QData/*63:0*/, 2> __VicoTriggered;
    ::VlUnpacked<::CData/*0:0*/, 2> __VtraceActivity;

    // INTERNAL VARIABLES
    Varithmetic_blocks__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varithmetic_blocks___024root(Varithmetic_blocks__Syms* symsp, const char* namep);
    ~Varithmetic_blocks___024root();
    VL_UNCOPYABLE(Varithmetic_blocks___024root);
    VL_UNMOVABLE(Varithmetic_blocks___024root);

    // INTERNAL METHODS
};


#endif  // guard
