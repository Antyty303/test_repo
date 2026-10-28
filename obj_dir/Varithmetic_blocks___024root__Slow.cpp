// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varithmetic_blocks.h for the primary calling header

#include "Varithmetic_blocks__pch.h"

void Varithmetic_blocks___024root___ctor_var_reset(Varithmetic_blocks___024root* vlSelf);

void Varithmetic_blocks___024root__ctor(Varithmetic_blocks___024root* vlSelf, Varithmetic_blocks__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    // Reset structure values
    Varithmetic_blocks___024root___ctor_var_reset(vlSelf);
}

Varithmetic_blocks___024root::Varithmetic_blocks___024root(Varithmetic_blocks__Syms* symsp, const char* namep) {
    Varithmetic_blocks___024root__ctor(this, symsp, namep);
}

void Varithmetic_blocks___024root__dtor(Varithmetic_blocks___024root* vlSelf) {
    // Destroy members
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Varithmetic_blocks___024root::~Varithmetic_blocks___024root() {
    Varithmetic_blocks___024root__dtor(this);
}
