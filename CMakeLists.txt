cmake_minimum_required(VERSION 3.29)
project(cpp_object)

set(CMAKE_CXX_STANDARD 20)

add_library(cpp_object SHARED MDNA.cpp Sequence.cpp)
target_include_directories(cpp_object PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(cpp_object_test main.cpp)
target_link_libraries(cpp_object_test PRIVATE cpp_object)
