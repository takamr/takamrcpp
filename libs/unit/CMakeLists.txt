# Project
project(unit)
add_library(unit src/distance.cpp)
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
target_include_directories(unit PUBLIC include)
add_executable(distance_test src/distance_test.cpp src/distance.cpp)
target_link_libraries(
        distance_test
        GTest::gtest_main
)
gtest_discover_tests(distance_test)
