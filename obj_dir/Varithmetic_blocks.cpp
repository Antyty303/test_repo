// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Varithmetic_blocks__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Varithmetic_blocks::Varithmetic_blocks(VerilatedContext* _vcontextp__, const char* _vcname__)
    : Varithmetic_blocks{_vcontextp__, _vcname__, true} {}

Varithmetic_blocks::Varithmetic_blocks(VerilatedContext* _vcontextp__, const char* _vcname__, bool _vcisRoot__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Varithmetic_blocks__Syms(contextp(), this, _vcname__, _vcisRoot__)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , A{vlSymsp->vlInst.TOP.__VprimaryPorts.A}
    , B{vlSymsp->vlInst.TOP.__VprimaryPorts.B}
    , Diff{vlSymsp->vlInst.TOP.__VprimaryPorts.Diff}
    , bout{vlSymsp->vlInst.TOP.__VprimaryPorts.bout}
    , rootp{&(vlSymsp->vlInst.TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Varithmetic_blocks::Varithmetic_blocks(const char* _vcname__)
    : Varithmetic_blocks(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Varithmetic_blocks::~Varithmetic_blocks() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Varithmetic_blocks___024root___eval_debug_assertions(Varithmetic_blocks___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Varithmetic_blocks___024root___eval_static(Varithmetic_blocks___024root* vlSelf);
VL_ATTR_COLD void Varithmetic_blocks___024root___eval_initial(Varithmetic_blocks___024root* vlSelf);
VL_ATTR_COLD bool Varithmetic_blocks___024root___eval_stl(Varithmetic_blocks___024root* vlSelf, ::CData/*0:0*/ firstIteration);
void Varithmetic_blocks___024root___eval_sample(Varithmetic_blocks___024root* vlSelf);
bool Varithmetic_blocks___024root___eval_ico(Varithmetic_blocks___024root* vlSelf, ::CData/*0:0*/ firstIteration);
bool Varithmetic_blocks___024root___eval_act(Varithmetic_blocks___024root* vlSelf);
bool Varithmetic_blocks___024root___eval_inact(Varithmetic_blocks___024root* vlSelf);
bool Varithmetic_blocks___024root___eval_nba(Varithmetic_blocks___024root* vlSelf);
bool Varithmetic_blocks___024root___eval_obs(Varithmetic_blocks___024root* vlSelf);
bool Varithmetic_blocks___024root___eval_react(Varithmetic_blocks___024root* vlSelf);
void Varithmetic_blocks___024root___eval_postponed(Varithmetic_blocks___024root* vlSelf);
VL_ATTR_COLD void Varithmetic_blocks___024root___eval_final(Varithmetic_blocks___024root* vlSelf);
VL_ATTR_COLD void Varithmetic_blocks___024root___eval_dump_triggers__stl(Varithmetic_blocks___024root* vlSelf);
VL_ATTR_COLD void Varithmetic_blocks___024root___eval_dump_triggers__ico(Varithmetic_blocks___024root* vlSelf);
VL_ATTR_COLD void Varithmetic_blocks___024root___eval_dump_triggers__act(Varithmetic_blocks___024root* vlSelf);
VL_ATTR_COLD void Varithmetic_blocks___024root___eval_dump_triggers__nba(Varithmetic_blocks___024root* vlSelf);
VL_ATTR_COLD void Varithmetic_blocks___024root___eval_dump_triggers__obs(Varithmetic_blocks___024root* vlSelf);
VL_ATTR_COLD void Varithmetic_blocks___024root___eval_dump_triggers__react(Varithmetic_blocks___024root* vlSelf);

void Varithmetic_blocks::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Varithmetic_blocks::eval_step\n"); );
    m_evalLoop.eval();
}

void Varithmetic_blocks::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Varithmetic_blocks___024root___eval_debug_assertions(&(vlSymsp->vlInst.TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Varithmetic_blocks::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Varithmetic_blocks::evalStatic() {
    Varithmetic_blocks___024root___eval_static(&(vlSymsp->vlInst.TOP));
}

void Varithmetic_blocks::evalInitial() {
    Varithmetic_blocks___024root___eval_initial(&(vlSymsp->vlInst.TOP));
}

bool Varithmetic_blocks::evalStl(bool firstIteration) {
    return Varithmetic_blocks___024root___eval_stl(&(vlSymsp->vlInst.TOP), firstIteration);
}

void Varithmetic_blocks::evalSample() {
    Varithmetic_blocks___024root___eval_sample(&(vlSymsp->vlInst.TOP));
}

bool Varithmetic_blocks::evalIco(bool firstIteration) {
    return Varithmetic_blocks___024root___eval_ico(&(vlSymsp->vlInst.TOP), firstIteration);
}

bool Varithmetic_blocks::evalAct() {
    return Varithmetic_blocks___024root___eval_act(&(vlSymsp->vlInst.TOP));
}

bool Varithmetic_blocks::evalInact() {
    return Varithmetic_blocks___024root___eval_inact(&(vlSymsp->vlInst.TOP));
}

bool Varithmetic_blocks::evalNba() {
    return Varithmetic_blocks___024root___eval_nba(&(vlSymsp->vlInst.TOP));
}

bool Varithmetic_blocks::evalObs() {
    return Varithmetic_blocks___024root___eval_obs(&(vlSymsp->vlInst.TOP));
}

bool Varithmetic_blocks::evalReact() {
    return Varithmetic_blocks___024root___eval_react(&(vlSymsp->vlInst.TOP));
}

void Varithmetic_blocks::evalPostponed() {
    Varithmetic_blocks___024root___eval_postponed(&(vlSymsp->vlInst.TOP));
}

void Varithmetic_blocks::evalFinal() {
    Varithmetic_blocks___024root___eval_final(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Varithmetic_blocks::dumpTriggersStl() {
    Varithmetic_blocks___024root___eval_dump_triggers__stl(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Varithmetic_blocks::dumpTriggersIco() {
    Varithmetic_blocks___024root___eval_dump_triggers__ico(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Varithmetic_blocks::dumpTriggersAct() {
    Varithmetic_blocks___024root___eval_dump_triggers__act(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Varithmetic_blocks::dumpTriggersNba() {
    Varithmetic_blocks___024root___eval_dump_triggers__nba(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Varithmetic_blocks::dumpTriggersObs() {
    Varithmetic_blocks___024root___eval_dump_triggers__obs(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Varithmetic_blocks::dumpTriggersReact() {
    Varithmetic_blocks___024root___eval_dump_triggers__react(&(vlSymsp->vlInst.TOP));
}

//============================================================
// Events and timing
bool Varithmetic_blocks::eventsPending() { return false; }

uint64_t Varithmetic_blocks::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Varithmetic_blocks::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Varithmetic_blocks::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Varithmetic_blocks::hierName() const { return vlSymsp->name(); }
const char* Varithmetic_blocks::modelName() const { return "Varithmetic_blocks"; }
unsigned Varithmetic_blocks::threads() const { return 1; }
void Varithmetic_blocks::prepareClone() const { contextp()->prepareClone(); }
void Varithmetic_blocks::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Varithmetic_blocks::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Varithmetic_blocks___024root__trace_decl_types(VerilatedVcd* tracep);

void Varithmetic_blocks___024root__trace_init_top(Varithmetic_blocks___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Varithmetic_blocks___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Varithmetic_blocks___024root*>(voidSelf);
    Varithmetic_blocks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Varithmetic_blocks___024root__trace_decl_types(tracep);
    Varithmetic_blocks___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Varithmetic_blocks___024root__trace_register(Varithmetic_blocks___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Varithmetic_blocks::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Varithmetic_blocks::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->vlInst.TOP), name(), false, 22);
    Varithmetic_blocks___024root__trace_register(&(vlSymsp->vlInst.TOP), stfp->spTrace());
}
