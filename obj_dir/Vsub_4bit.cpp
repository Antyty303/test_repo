// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsub_4bit__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsub_4bit::Vsub_4bit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : Vsub_4bit{_vcontextp__, _vcname__, true} {}

Vsub_4bit::Vsub_4bit(VerilatedContext* _vcontextp__, const char* _vcname__, bool _vcisRoot__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsub_4bit__Syms(contextp(), this, _vcname__, _vcisRoot__)}
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

Vsub_4bit::Vsub_4bit(const char* _vcname__)
    : Vsub_4bit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsub_4bit::~Vsub_4bit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsub_4bit___024root___eval_debug_assertions(Vsub_4bit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vsub_4bit___024root___eval_static(Vsub_4bit___024root* vlSelf);
VL_ATTR_COLD void Vsub_4bit___024root___eval_initial(Vsub_4bit___024root* vlSelf);
VL_ATTR_COLD bool Vsub_4bit___024root___eval_stl(Vsub_4bit___024root* vlSelf, ::CData/*0:0*/ firstIteration);
void Vsub_4bit___024root___eval_sample(Vsub_4bit___024root* vlSelf);
bool Vsub_4bit___024root___eval_ico(Vsub_4bit___024root* vlSelf, ::CData/*0:0*/ firstIteration);
bool Vsub_4bit___024root___eval_act(Vsub_4bit___024root* vlSelf);
bool Vsub_4bit___024root___eval_inact(Vsub_4bit___024root* vlSelf);
bool Vsub_4bit___024root___eval_nba(Vsub_4bit___024root* vlSelf);
bool Vsub_4bit___024root___eval_obs(Vsub_4bit___024root* vlSelf);
bool Vsub_4bit___024root___eval_react(Vsub_4bit___024root* vlSelf);
void Vsub_4bit___024root___eval_postponed(Vsub_4bit___024root* vlSelf);
VL_ATTR_COLD void Vsub_4bit___024root___eval_final(Vsub_4bit___024root* vlSelf);
VL_ATTR_COLD void Vsub_4bit___024root___eval_dump_triggers__stl(Vsub_4bit___024root* vlSelf);
VL_ATTR_COLD void Vsub_4bit___024root___eval_dump_triggers__ico(Vsub_4bit___024root* vlSelf);
VL_ATTR_COLD void Vsub_4bit___024root___eval_dump_triggers__act(Vsub_4bit___024root* vlSelf);
VL_ATTR_COLD void Vsub_4bit___024root___eval_dump_triggers__nba(Vsub_4bit___024root* vlSelf);
VL_ATTR_COLD void Vsub_4bit___024root___eval_dump_triggers__obs(Vsub_4bit___024root* vlSelf);
VL_ATTR_COLD void Vsub_4bit___024root___eval_dump_triggers__react(Vsub_4bit___024root* vlSelf);

void Vsub_4bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsub_4bit::eval_step\n"); );
    m_evalLoop.eval();
}

void Vsub_4bit::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vsub_4bit___024root___eval_debug_assertions(&(vlSymsp->vlInst.TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vsub_4bit::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vsub_4bit::evalStatic() {
    Vsub_4bit___024root___eval_static(&(vlSymsp->vlInst.TOP));
}

void Vsub_4bit::evalInitial() {
    Vsub_4bit___024root___eval_initial(&(vlSymsp->vlInst.TOP));
}

bool Vsub_4bit::evalStl(bool firstIteration) {
    return Vsub_4bit___024root___eval_stl(&(vlSymsp->vlInst.TOP), firstIteration);
}

void Vsub_4bit::evalSample() {
    Vsub_4bit___024root___eval_sample(&(vlSymsp->vlInst.TOP));
}

bool Vsub_4bit::evalIco(bool firstIteration) {
    return Vsub_4bit___024root___eval_ico(&(vlSymsp->vlInst.TOP), firstIteration);
}

bool Vsub_4bit::evalAct() {
    return Vsub_4bit___024root___eval_act(&(vlSymsp->vlInst.TOP));
}

bool Vsub_4bit::evalInact() {
    return Vsub_4bit___024root___eval_inact(&(vlSymsp->vlInst.TOP));
}

bool Vsub_4bit::evalNba() {
    return Vsub_4bit___024root___eval_nba(&(vlSymsp->vlInst.TOP));
}

bool Vsub_4bit::evalObs() {
    return Vsub_4bit___024root___eval_obs(&(vlSymsp->vlInst.TOP));
}

bool Vsub_4bit::evalReact() {
    return Vsub_4bit___024root___eval_react(&(vlSymsp->vlInst.TOP));
}

void Vsub_4bit::evalPostponed() {
    Vsub_4bit___024root___eval_postponed(&(vlSymsp->vlInst.TOP));
}

void Vsub_4bit::evalFinal() {
    Vsub_4bit___024root___eval_final(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vsub_4bit::dumpTriggersStl() {
    Vsub_4bit___024root___eval_dump_triggers__stl(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vsub_4bit::dumpTriggersIco() {
    Vsub_4bit___024root___eval_dump_triggers__ico(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vsub_4bit::dumpTriggersAct() {
    Vsub_4bit___024root___eval_dump_triggers__act(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vsub_4bit::dumpTriggersNba() {
    Vsub_4bit___024root___eval_dump_triggers__nba(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vsub_4bit::dumpTriggersObs() {
    Vsub_4bit___024root___eval_dump_triggers__obs(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vsub_4bit::dumpTriggersReact() {
    Vsub_4bit___024root___eval_dump_triggers__react(&(vlSymsp->vlInst.TOP));
}

//============================================================
// Events and timing
bool Vsub_4bit::eventsPending() { return false; }

uint64_t Vsub_4bit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsub_4bit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vsub_4bit::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsub_4bit::hierName() const { return vlSymsp->name(); }
const char* Vsub_4bit::modelName() const { return "Vsub_4bit"; }
unsigned Vsub_4bit::threads() const { return 1; }
void Vsub_4bit::prepareClone() const { contextp()->prepareClone(); }
void Vsub_4bit::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsub_4bit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vsub_4bit___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsub_4bit___024root__trace_init_top(Vsub_4bit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsub_4bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsub_4bit___024root*>(voidSelf);
    Vsub_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vsub_4bit___024root__trace_decl_types(tracep);
    Vsub_4bit___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsub_4bit___024root__trace_register(Vsub_4bit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsub_4bit::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsub_4bit::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->vlInst.TOP), name(), false, 22);
    Vsub_4bit___024root__trace_register(&(vlSymsp->vlInst.TOP), stfp->spTrace());
}
