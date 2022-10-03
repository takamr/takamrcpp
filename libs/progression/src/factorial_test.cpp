/*
 * Copyright (c) 2022 Takamaru. All rights reserved.
 */

#include <gtest/gtest.h>
#include <progression/factorial.h>

namespace takamrcpp::progression {

TEST(RecursiveFactorialTest, factorialUntil2) {
  EXPECT_EQ(recursiveFactorial(2), 2);
}

TEST(RecursiveFactorialTest, factorialUntil3) {
  EXPECT_EQ(recursiveFactorial(3), 6);
}

TEST(RecursiveFactorialTest, factorialUntil5) {
  EXPECT_EQ(recursiveFactorial(5), 120);
}

TEST(RecursiveFactorialTest, factorialUntil10) {
  EXPECT_EQ(recursiveFactorial(10), 3628800);
}

TEST(RecursiveFactorialTest, factorialUntil15) {
  EXPECT_EQ(recursiveFactorial(15), 1307674368000);
}

int gcd(int x, int y) {
  if (x % y == 0) return y;
  return gcd(y, x % y);
}

int threeGCD(int x, int y, int z) {
  if (x % y == 0) return y;
  return threeGCD(y, x % y);
}

TEST(CountDivisibleByK, threeGCD) {
  EXPECT_EQ(6, threeGCD(12, 18));
  EXPECT_EQ(2, threeGCD(30, 242));
  EXPECT_EQ(21, threeGCD(1029, 1071));
  EXPECT_EQ(636, threeGCD(3180, 1908));
}

}  // namespace takamrcpp::progression

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
