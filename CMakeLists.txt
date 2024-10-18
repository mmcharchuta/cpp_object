cmake_minimum_required(VERSION 3.29)
project(cpp_object)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cpp_object
        main.cpp
        Sequence.cpp
        MDNA.cpp)
