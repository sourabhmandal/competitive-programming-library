cmake_minimum_required(VERSION 3.17)
project(competitive_programming_library)

set(CMAKE_CXX_STANDARD 20)

add_executable(competitive_programming_library main.cpp algo/algorithms.cpp algo/algorithms.h ds/datastructure.cpp ds/datastructure.h)