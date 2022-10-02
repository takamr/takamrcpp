# Project
project(progression)
add_library(progression src/summation.cpp src/factorial.cpp)
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
target_include_directories(progression PUBLIC include)

add_executable(summation_test src/summation_test.cpp src/summation.cpp)
target_link_libraries(
        summation_test
        GTest::gtest_main
)
gtest_discover_tests(summation_test)

add_executable(factorial_test src/factorial_test.cpp src/factorial.cpp)
target_link_libraries(
        factorial_test
        GTest::gtest_main
)
gtest_discover_tests(factorial_test)
