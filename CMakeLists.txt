cmake_minimum_required(VERSION 3.2)
project(lab1_verilator_tests LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(verilator REQUIRED)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
add_subdirectory(3rdparty/gtest)

verilate(Vadder_4bit
    SOURCES src/arithmetic_blocks.sv
    TOP_MODULE adder_4bit
    TRACE
)
add_executable(test_adder_4bit tb/test_adder_4bit.cpp)
target_link_libraries(test_adder_4bit PRIVATE Vadder_4bit)


verilate(Vsub_4bit
    SOURCES src/arithmetic_blocks.sv
    TOP_MODULE sub_4bit
    TRACE
)
add_executable(test_sub_4bit tb/test_sub_4bit.cpp)
target_link_libraries(test_sub_4bit PRIVATE Vsub_4bit)


verilate(Vseq_top
    SOURCES src/seq_top.sv src/arithmetic_blocks.sv
    TOP_MODULE seq_top
    TRACE
)
add_executable(test_seq tb/test_seq.cpp)
target_link_libraries(test_seq PRIVATE Vseq_top)
