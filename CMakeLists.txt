cmake_minimum_required(VERSION 3.13)
project(garage_math)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_library(${PROJECT_NAME} STATIC src/main.cpp)
target_include_directories(${PROJECT_NAME} INTERFACE src)