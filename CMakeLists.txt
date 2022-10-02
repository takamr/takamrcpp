# Cmake
cmake_minimum_required(VERSION 3.21)
project(takamrcpp)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(libs/physics)
add_subdirectory(libs/unit)
add_subdirectory(libs/datetime)
