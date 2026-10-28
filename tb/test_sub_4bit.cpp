#include <iostream>
#include <cassert>
#include <memory>
#include "Vsub_4bit.h"  
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    auto top = std::make_unique<Vsub_4bit>();
    auto tfp = std::make_unique<VerilatedVcdC>();

    top->trace(tfp.get(), 99);
    
    tfp->open("waveform_sub.vcd");
    uint64_t sim_time = 0;
    int error_count = 0;

    std::cout << " Running Verilator test for sub_4bit" << std::endl;

    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 16; j++) {
            top->A = i;
            top->B = j;
            top->eval();

            tfp->dump(sim_time);
            sim_time += 1;

            uint8_t reference_D = (i - j) & 0xF;
            if (top->Diff != reference_D) {
                error_count++;
                std::cerr << " ERROR at step " << sim_time
                    << ": A = " << i << ", B = " << j
                    << " | Received D = " << (int)top->Diff
                    << ", Expected D = " << (int)reference_D << std::endl;
            }
        }
    }

    tfp->close();

    std::cout << "=====================================================" << std::endl;
    std::cout << "The test for sub_4bit is completed. Errors detected: " << error_count << std::endl;
    std::cout << "=====================================================" << std::endl;

    return (error_count == 0) ? 0 : 1;
}
