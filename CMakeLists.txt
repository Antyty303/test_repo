cmake_minimum_required(VERSION 3.20)
project(lab1_verilator_tests)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
add_subdirectory(3rdparty/gtest)

find_package(verilator REQUIRED)

add_executable(test_adder_4bit tb/test_adder_4bit.cpp)
verilate(test_adder_4bit
    SOURCES src/arithmetic_blocks.sv
    TOP_MODULE adder_4bit
    TRACE
)

add_executable(test_sub_4bit tb/test_sub_4bit.cpp)
verilate(test_sub_4bit
    SOURCES src/arithmetic_blocks.sv
    TOP_MODULE sub_4bit
    TRACE
)

add_executable(test_seq tb/test_seq.cpp)
verilate(test_seq
    SOURCES src/seq_top.sv src/arithmetic_blocks.sv
    TOP_MODULE seq_top
    TRACE
)

target_link_libraries(test_seq PRIVATE gtest gtest_main)
