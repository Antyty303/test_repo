// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder_4bit.h for the primary calling header

#include "Vadder_4bit__pch.h"

void Vadder_4bit___024root___ctor_var_reset(Vadder_4bit___024root* vlSelf);

void Vadder_4bit___024root__ctor(Vadder_4bit___024root* vlSelf, Vadder_4bit__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    // Reset structure values
    Vadder_4bit___024root___ctor_var_reset(vlSelf);
}

Vadder_4bit___024root::Vadder_4bit___024root(Vadder_4bit__Syms* symsp, const char* namep) {
    Vadder_4bit___024root__ctor(this, symsp, namep);
}

void Vadder_4bit___024root__dtor(Vadder_4bit___024root* vlSelf) {
    // Destroy members
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vadder_4bit___024root::~Vadder_4bit___024root() {
    Vadder_4bit___024root__dtor(this);
}
