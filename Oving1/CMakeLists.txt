cmake_minimum_required(VERSION 3.30)
project(Oving1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(oppgave1 oppgave1.cpp)
add_executable(oppgave2 oppgave2.cpp)

target_compile_options(oppgave1 PRIVATE -Wall -Wextra)
target_compile_options(oppgave2 PRIVATE -Wall -Wextra)