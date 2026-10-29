cmake_minimum_required(VERSION 3.10) #
project(lab1_verilator_tests LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
add_subdirectory(3rdparty/gtest)

find_package(verilator REQUIRED)

add_executable(Vadder_4bit tb/test_adder_4bit.cpp)
verilate(Vadder_4bit
    SOURCES src/arithmetic_blocks.sv
    TOP_MODULE adder_4bit
    TRACE
)

add_executable(Vsub_4bit tb/test_sub_4bit.cpp)
verilate(Vsub_4bit
    SOURCES src/arithmetic_blocks.sv
    TOP_MODULE sub_4bit
    TRACE
)

add_executable(Vseq_top tb/test_seq.cpp)
verilate(Vseq_top
    SOURCES src/seq_top.sv src/arithmetic_blocks.sv
    TOP_MODULE seq_top
    TRACE
)
