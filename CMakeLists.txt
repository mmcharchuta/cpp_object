cmake_minimum_required(VERSION 3.10)
project(cpp_object)

# Add the directory with your friend's headers
include_directories(
        ${PROJECT_SOURCE_DIR}/include
        "C:/Users/Lenovo/CLionProjects/programowanie_obiektowe_cpp/libs"
)

# Specify the source files
add_library(cpp_object SHARED Sequence.cpp MDNA.cpp)

# Link with the shared library
target_link_libraries(cpp_object
        "C:/Users/Lenovo/CLionProjects/programowanie_obiektowe_cpp/libs/libsequence_shared_lib.dll"
)

# Add executable or other settings if needed
add_executable(cpp_object_executable main.cpp)

# Link executable with the shared library (cpp_object)
target_link_libraries(cpp_object_executable cpp_object)

# Ensure the DLL is in the correct place during runtime
add_custom_command(TARGET cpp_object_executable POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        "C:/Users/Lenovo/CLionProjects/programowanie_obiektowe_cpp/libs/libsequence_shared_lib.dll"
        $<TARGET_FILE_DIR:cpp_object_executable>
)
