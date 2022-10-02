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

}  // namespace takamrcpp::progression

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
