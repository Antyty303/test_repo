#include <iostream>
#include <cassert>
#include <memory>
#include "test_adder_4bit.h"  
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    auto top = std::make_unique<Vadder_4bit>();
    auto tfp = std::make_unique<VerilatedVcdC>();

    top->trace(tfp.get(), 99);
    tfp->open("waveform_adder.vcd");

    uint64_t sim_time = 0;
    int error_count = 0;

    std::cout << " Running Verilator test for adder_4bit" << std::endl;
    
    top->cin = 0;
    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 16; j++) {
            top->A = i;
            top->B = j;
            top->eval();

            tfp->dump(sim_time);
            sim_time += 1;

            uint8_t reference_S = (i + j) & 0xF;
            if (top->S != reference_S) {
                error_count++;
                std::cerr << " ERROR at step " << sim_time
                    << ": A = " << i << ", B = " << j
                    << " | Received S = " << (int)top->S
                    << ", Expected S = " << (int)reference_S << std::endl;
            }
        }
    }
    
    tfp->close();

    std::cout << "=====================================================" << std::endl;
    std::cout << "The test for adder_4bit is completed. Errors detected: " << error_count << std::endl;
    std::cout << "=====================================================" << std::endl;

    return (error_count == 0) ? 0 : 1;
}
