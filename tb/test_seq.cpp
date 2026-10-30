#include <iostream>
#include <memory>
#include <gtest/gtest.h> 
#include "Vseq_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

TEST(SequentialLogicTest, OperationCheck) {

    Verilated::traceEverOn(true);

    auto top = std::make_unique<Vseq_top>();
    auto tfp = std::make_unique<VerilatedVcdC>();

    top->trace(tfp.get(), 99);
    tfp->open("waveform_seq.vcd");

    uint64_t sim_time = 0;

    auto tick_clock = [&]() {
        sim_time += 1;
        top->clk = 1;
        top->eval();
        tfp->dump(sim_time);

        sim_time += 1;
        top->clk = 0;
        top->eval();
        tfp->dump(sim_time);
        };

    auto press_key = [&](int button_idx) {
        top->KEY &= ~(1 << button_idx);
        tick_clock();

        top->KEY |= (1 << button_idx);
        tick_clock(); 
        };

    std::cout << "=====================================================" << std::endl;
    std::cout << " Running Verilator Testbench: seq_top (Sequential)" << std::endl;
    std::cout << "=====================================================" << std::endl;

    top->clk = 0;
    top->SW = 0;
    top->KEY = 0xF;
    top->eval();

    top->SW = 9;
    std::cout << "[Step 1] Setting SW = " << (int)top->SW << ". Pressing KEY0 (Load A)." << std::endl;
    press_key(0);
    
    top->SW = 4;
    std::cout << "[Step 2] Setting SW = " << (int)top->SW << ". Pressing KEY1 (Load B)." << std::endl;
    press_key(1);
    
    std::cout << "[Step 3] Pressing KEY2 (Addition)" << std::endl;
    press_key(2);
    std::cout << "Current LEDG output = " << (int)top->LEDG << std::endl;
    
    EXPECT_EQ((int)top->LEDG, 13) << "ERROR: 9 + 4 should be 13";

    std::cout << "[Step 4] Pressing KEY3 (Subtraction)" << std::endl;
    press_key(3);
    std::cout << "Current LEDG output = " << (int)top->LEDG << std::endl;
    
    EXPECT_EQ((int)top->LEDG, 5) << "ERROR: 9 - 4 should be 5";

    tfp->close();
    std::cout << "=====================================================" << std::endl;
    std::cout << " Sequential logic test completed SUCCESSFULLY!" << std::endl;
    std::cout << "=====================================================" << std::endl;
}
