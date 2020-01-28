cmake_minimum_required(VERSION 3.9)

project(leetcode_cpp)

set(CMAKE_CXX_STANDARD 14)
set(BIN_DIR ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

add_subdirectory(problem1)
add_subdirectory(problem2)
add_subdirectory(problem3)
add_subdirectory(problem4)
add_subdirectory(problem5)

