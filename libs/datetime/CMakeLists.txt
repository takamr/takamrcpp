# Project
project(datetime)
add_library(datetime src/leap_year.cpp)
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
target_include_directories(datetime PUBLIC include)
add_executable(leap_year_test src/leap_year_test.cpp src/leap_year.cpp)
target_link_libraries(
        leap_year_test
        GTest::gtest_main
)
gtest_discover_tests(leap_year_test)
