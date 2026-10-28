// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vadder_4bit__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vadder_4bit::Vadder_4bit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : Vadder_4bit{_vcontextp__, _vcname__, true} {}

Vadder_4bit::Vadder_4bit(VerilatedContext* _vcontextp__, const char* _vcname__, bool _vcisRoot__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vadder_4bit__Syms(contextp(), this, _vcname__, _vcisRoot__)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , A{vlSymsp->vlInst.TOP.__VprimaryPorts.A}
    , B{vlSymsp->vlInst.TOP.__VprimaryPorts.B}
    , cin{vlSymsp->vlInst.TOP.__VprimaryPorts.cin}
    , S{vlSymsp->vlInst.TOP.__VprimaryPorts.S}
    , cout{vlSymsp->vlInst.TOP.__VprimaryPorts.cout}
    , rootp{&(vlSymsp->vlInst.TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vadder_4bit::Vadder_4bit(const char* _vcname__)
    : Vadder_4bit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vadder_4bit::~Vadder_4bit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vadder_4bit___024root___eval_debug_assertions(Vadder_4bit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vadder_4bit___024root___eval_static(Vadder_4bit___024root* vlSelf);
VL_ATTR_COLD void Vadder_4bit___024root___eval_initial(Vadder_4bit___024root* vlSelf);
VL_ATTR_COLD bool Vadder_4bit___024root___eval_stl(Vadder_4bit___024root* vlSelf, ::CData/*0:0*/ firstIteration);
void Vadder_4bit___024root___eval_sample(Vadder_4bit___024root* vlSelf);
bool Vadder_4bit___024root___eval_ico(Vadder_4bit___024root* vlSelf, ::CData/*0:0*/ firstIteration);
bool Vadder_4bit___024root___eval_act(Vadder_4bit___024root* vlSelf);
bool Vadder_4bit___024root___eval_inact(Vadder_4bit___024root* vlSelf);
bool Vadder_4bit___024root___eval_nba(Vadder_4bit___024root* vlSelf);
bool Vadder_4bit___024root___eval_obs(Vadder_4bit___024root* vlSelf);
bool Vadder_4bit___024root___eval_react(Vadder_4bit___024root* vlSelf);
void Vadder_4bit___024root___eval_postponed(Vadder_4bit___024root* vlSelf);
VL_ATTR_COLD void Vadder_4bit___024root___eval_final(Vadder_4bit___024root* vlSelf);
VL_ATTR_COLD void Vadder_4bit___024root___eval_dump_triggers__stl(Vadder_4bit___024root* vlSelf);
VL_ATTR_COLD void Vadder_4bit___024root___eval_dump_triggers__ico(Vadder_4bit___024root* vlSelf);
VL_ATTR_COLD void Vadder_4bit___024root___eval_dump_triggers__act(Vadder_4bit___024root* vlSelf);
VL_ATTR_COLD void Vadder_4bit___024root___eval_dump_triggers__nba(Vadder_4bit___024root* vlSelf);
VL_ATTR_COLD void Vadder_4bit___024root___eval_dump_triggers__obs(Vadder_4bit___024root* vlSelf);
VL_ATTR_COLD void Vadder_4bit___024root___eval_dump_triggers__react(Vadder_4bit___024root* vlSelf);

void Vadder_4bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vadder_4bit::eval_step\n"); );
    m_evalLoop.eval();
}

void Vadder_4bit::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vadder_4bit___024root___eval_debug_assertions(&(vlSymsp->vlInst.TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vadder_4bit::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vadder_4bit::evalStatic() {
    Vadder_4bit___024root___eval_static(&(vlSymsp->vlInst.TOP));
}

void Vadder_4bit::evalInitial() {
    Vadder_4bit___024root___eval_initial(&(vlSymsp->vlInst.TOP));
}

bool Vadder_4bit::evalStl(bool firstIteration) {
    return Vadder_4bit___024root___eval_stl(&(vlSymsp->vlInst.TOP), firstIteration);
}

void Vadder_4bit::evalSample() {
    Vadder_4bit___024root___eval_sample(&(vlSymsp->vlInst.TOP));
}

bool Vadder_4bit::evalIco(bool firstIteration) {
    return Vadder_4bit___024root___eval_ico(&(vlSymsp->vlInst.TOP), firstIteration);
}

bool Vadder_4bit::evalAct() {
    return Vadder_4bit___024root___eval_act(&(vlSymsp->vlInst.TOP));
}

bool Vadder_4bit::evalInact() {
    return Vadder_4bit___024root___eval_inact(&(vlSymsp->vlInst.TOP));
}

bool Vadder_4bit::evalNba() {
    return Vadder_4bit___024root___eval_nba(&(vlSymsp->vlInst.TOP));
}

bool Vadder_4bit::evalObs() {
    return Vadder_4bit___024root___eval_obs(&(vlSymsp->vlInst.TOP));
}

bool Vadder_4bit::evalReact() {
    return Vadder_4bit___024root___eval_react(&(vlSymsp->vlInst.TOP));
}

void Vadder_4bit::evalPostponed() {
    Vadder_4bit___024root___eval_postponed(&(vlSymsp->vlInst.TOP));
}

void Vadder_4bit::evalFinal() {
    Vadder_4bit___024root___eval_final(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vadder_4bit::dumpTriggersStl() {
    Vadder_4bit___024root___eval_dump_triggers__stl(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vadder_4bit::dumpTriggersIco() {
    Vadder_4bit___024root___eval_dump_triggers__ico(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vadder_4bit::dumpTriggersAct() {
    Vadder_4bit___024root___eval_dump_triggers__act(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vadder_4bit::dumpTriggersNba() {
    Vadder_4bit___024root___eval_dump_triggers__nba(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vadder_4bit::dumpTriggersObs() {
    Vadder_4bit___024root___eval_dump_triggers__obs(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vadder_4bit::dumpTriggersReact() {
    Vadder_4bit___024root___eval_dump_triggers__react(&(vlSymsp->vlInst.TOP));
}

//============================================================
// Events and timing
bool Vadder_4bit::eventsPending() { return false; }

uint64_t Vadder_4bit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vadder_4bit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vadder_4bit::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vadder_4bit::hierName() const { return vlSymsp->name(); }
const char* Vadder_4bit::modelName() const { return "Vadder_4bit"; }
unsigned Vadder_4bit::threads() const { return 1; }
void Vadder_4bit::prepareClone() const { contextp()->prepareClone(); }
void Vadder_4bit::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vadder_4bit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vadder_4bit___024root__trace_decl_types(VerilatedVcd* tracep);

void Vadder_4bit___024root__trace_init_top(Vadder_4bit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vadder_4bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadder_4bit___024root*>(voidSelf);
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vadder_4bit___024root__trace_decl_types(tracep);
    Vadder_4bit___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vadder_4bit___024root__trace_register(Vadder_4bit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vadder_4bit::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vadder_4bit::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->vlInst.TOP), name(), false, 20);
    Vadder_4bit___024root__trace_register(&(vlSymsp->vlInst.TOP), stfp->spTrace());
}
