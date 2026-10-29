cmake_minimum_required(VERSION 3.10) #
project(lab1_verilator_tests LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
add_subdirectory(3rdparty/gtest)

find_package(verilator REQUIRED)

add_executable(test_adder_4bit tb/test_adder_4bit.cpp)
verilate(test_adder_4bit
    SOURCES src/arithmetic_blocks.sv
    TOP_MODULE adder_4bit
    TRACE
)
target_link_libraries(test_adder_4bit PRIVATE Vadder_4bit)

add_executable(test_sub_4bit tb/test_sub_4bit.cpp)
verilate(test_sub_4bit
    SOURCES src/arithmetic_blocks.sv
    TOP_MODULE sub_4bit
    TRACE
)
target_link_libraries(test_sub_4bit PRIVATE Vsub_4bit)

add_executable(test_seq tb/test_seq.cpp)
verilate(test_seq
    SOURCES src/seq_top.sv src/arithmetic_blocks.sv
    TOP_MODULE seq_top
    TRACE
)
t
target_link_libraries(test_seq PRIVATE gtest gtest_main)