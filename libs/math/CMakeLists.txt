# Project
project(math)
add_library(math src/gcd.cpp src/fraction.cpp)
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
target_include_directories(math PUBLIC include)
add_executable(gcd_test src/gcd_test.cpp src/gcd.cpp)
target_link_libraries(
        gcd_test
        GTest::gtest_main
)
gtest_discover_tests(gcd_test)

add_executable(fraction_test src/fraction_test.cpp src/fraction.cpp src/gcd.cpp)
target_link_libraries(
        fraction_test
        GTest::gtest_main
)
gtest_discover_tests(fraction_test)
