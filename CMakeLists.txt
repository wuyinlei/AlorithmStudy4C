cmake_minimum_required(VERSION 3.5)
project(AlgorithmStudy4C)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp select/SortHelper.h)
add_executable(AlgorithmStudy4C ${SOURCE_FILES})