cmake_minimum_required(VERSION 3.17)
project(homework3)

set(CMAKE_CXX_STANDARD 14)

add_executable(homework3 sources/main.cpp include/header.h sources/number.cpp sources/expr.cpp sources/parenthesis.cpp sources/factor.cpp)