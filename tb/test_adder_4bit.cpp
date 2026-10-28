#include <iostream>
#include <cassert>
#include <memory>
#include "Vadder_4bit.h"  
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::someArgs(argc, argv);
    Verilated::traceEverOn(true);

    auto top = std::make_unique<Vadder_4bit>();
    auto tfp = std::make_unique<VerilatedVcdC>();

    top->trace(tfp.get(), 99);
    tfp->open("waveform_adder.vcd");

    uint64_t sim_time = 0;
    int error_count = 0;

    std::cout << " Запуск Verilator теста для adder_4bit" << std::endl;

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
                std::cerr << " ОШИБКА на шаге " << sim_time
                    << ": A = " << i << ", B = " << j
                    << " | Получено S = " << (int)top->S
                    << ", Ожидалось S = " << (int)reference_S << std::endl;
            }
        }
    }
    
    tfp->close();

    std::cout << "=====================================================" << std::endl;
    std::cout << "Тест для adder_4bit завершён. Обнаружено ошибок: " << error_count << std::endl;
    std::cout << "=====================================================" << std::endl;

    return (error_count == 0) ? 0 : 1;
}
