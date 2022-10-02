/*
 * Copyright (c) 2022 Takamaru. All rights reserved.
 */

#include <gtest/gtest.h>
#include <progression/summation.h>

namespace takamrcpp::progression {

TEST(RecursiveSummation, SummationUntil3) {
  EXPECT_EQ(recursiveSummation(3), 6);
}

TEST(RecursiveSummation, SummationUntil10) {
  EXPECT_EQ(recursiveSummation(10), 55);
}

TEST(RecursiveSummation, SummationUntil100) {
  EXPECT_EQ(recursiveSummation(100), 5050);
}

TEST(RecursiveSummation, SummationUntil54) {
  EXPECT_EQ(recursiveSummation(54), 1485);
}

}  // namespace takamrcpp::progression

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
