# Generated Cmake Pico project file

cmake_minimum_required(VERSION 3.13)
include(pico_sdk_import.cmake)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(PICO_BOARD
    pico_w
    CACHE STRING "Board type")

project(terrarium_project C CXX ASM)

pico_sdk_init()

add_subdirectory(src)
