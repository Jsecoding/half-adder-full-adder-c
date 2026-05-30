cmake_minimum_required(VERSION 4.3.3)

project(test_adder)

add_compile_options(-g -Wall)
add_executable(test_adder test_adder.c full_adder.c half_adder.c my_adder.c)
