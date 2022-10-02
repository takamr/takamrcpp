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

TEST(RecursiveSquareSummationTest, SquareSummationUntil2) {
  EXPECT_EQ(recursiveSquareSummation(2), 5);
}

TEST(RecursiveSquareSummationTest, SquareSummationUntil3) {
  EXPECT_EQ(recursiveSquareSummation(3), 14);
}

TEST(RecursiveSquareSummationTest, SquareSummationUntil4) {
  EXPECT_EQ(recursiveSquareSummation(4), 30);
}

TEST(RecursiveSquareSummationTest, SquareSummationUntil10) {
  EXPECT_EQ(recursiveSquareSummation(10), 385);
}

TEST(RecursiveSquareSummationTest, SquareSummationUntil15) {
  EXPECT_EQ(recursiveSquareSummation(15), 1240);
}

TEST(RecursiveSquareSummationTest, SquareSummationUntil100) {
  EXPECT_EQ(recursiveSquareSummation(100), 338350);
}

TEST(RecursiveSquareSummationTest, SquareSummationUntil208) {
  EXPECT_EQ(recursiveSquareSummation(208), 3021304);
}

}  // namespace takamrcpp::progression

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
