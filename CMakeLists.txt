cmake_minimum_required(VERSION 3.25)
project(InternPrep)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(InternPrep
        CSES/misc.cpp)
