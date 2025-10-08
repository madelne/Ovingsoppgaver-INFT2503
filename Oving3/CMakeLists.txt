cmake_minimum_required(VERSION 3.30)
project(Oving3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Oving3_oppgave2
        oppgave1.hpp
        oppgave2.cpp)

add_executable(Oving3_oppgave3
        oppgave3.cpp
        oppgave3.hpp)

add_executable(oppgave4
oppgave4.cpp)