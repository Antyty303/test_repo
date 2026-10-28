// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSUB_4BIT__SYMS_H_
#define VERILATED_VSUB_4BIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsub_4bit.h"

// INCLUDE MODULE CLASSES
#include "Vsub_4bit___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vsub_4bit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsub_4bit* const __Vm_modelp;
    const bool __Vm_isRoot;
    std::string __Vm_topNames[2];
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    union {
        struct {
            Vsub_4bit___024root            TOP;
        } vlInst;
    };

    // CONSTRUCTORS
    Vsub_4bit__Syms(VerilatedContext* contextp, Vsub_4bit* modelp, const char* namep, bool isRoot);
    ~Vsub_4bit__Syms();

    // METHODS
    const char* name() const { return vlInst.TOP.vlNamep; }
};

#endif  // guard
