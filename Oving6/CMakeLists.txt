cmake_minimum_required(VERSION 3.30)
project(Oving6)

set(CMAKE_CXX_STANDARD 14)

add_executable(oppgave1 oppgave1.cpp)
add_executable(oppgave2 oppgave2.cpp)
find_package(Boost 1.89.0 REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})
target_link_libraries(oppgave2 ${Boost_LIBRARIES})

