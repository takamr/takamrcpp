# Project
project(physics)
add_library(physics src/gravity.cpp)
include_directories(include)

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

# Test
enable_testing()
target_include_directories(physics PUBLIC include)
add_executable(gravity_test src/gravity_test.cpp src/gravity.cpp)
target_link_libraries(
        gravity_test
        GTest::gtest_main
)
gtest_discover_tests(gravity_test)
