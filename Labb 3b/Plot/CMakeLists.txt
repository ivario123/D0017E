cmake_minimum_required(VERSION 3.17)
project(Plot C)

set(CMAKE_C_STANDARD 99)

add_executable(Plot plot.c tga.h tga.c interp1.h interp1.c)