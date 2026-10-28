// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsub_4bit.h for the primary calling header

#include "Vsub_4bit__pch.h"

void Vsub_4bit___024root___ctor_var_reset(Vsub_4bit___024root* vlSelf);

void Vsub_4bit___024root__ctor(Vsub_4bit___024root* vlSelf, Vsub_4bit__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    // Reset structure values
    Vsub_4bit___024root___ctor_var_reset(vlSelf);
}

Vsub_4bit___024root::Vsub_4bit___024root(Vsub_4bit__Syms* symsp, const char* namep) {
    Vsub_4bit___024root__ctor(this, symsp, namep);
}

void Vsub_4bit___024root__dtor(Vsub_4bit___024root* vlSelf) {
    // Destroy members
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vsub_4bit___024root::~Vsub_4bit___024root() {
    Vsub_4bit___024root__dtor(this);
}
