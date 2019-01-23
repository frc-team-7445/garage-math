cmake_minimum_required(VERSION 3.13)
project(garage_math)

include_directories(src)

set(CMAKE_CXX_STANDARD 14)

add_library(garage_math INTERFACE)

target_include_directories(garage_math INTERFACE src)