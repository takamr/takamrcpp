# Cmake
cmake_minimum_required(VERSION 3.21)
project(takamrcpp)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(libs/physics)
add_subdirectory(libs/unit)
add_subdirectory(libs/datetime)
add_subdirectory(libs/progression)
add_subdirectory(libs/math)

# Google Test
include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
include(GoogleTest)

