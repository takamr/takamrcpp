/*
 * Copyright (c) 2022 Takamaru. All rights reserved.
 */

#include <gtest/gtest.h>
#include <math/gcd.h>

#ifndef TAKAMRCPP_LIBS_MATH_SRC_GCD_TEST_CPP_
#define TAKAMRCPP_LIBS_MATH_SRC_GCD_TEST_CPP_

namespace takamrcpp::math {

TEST(GCDTest, calculate2NumberGCD) {
  EXPECT_EQ(6, gcd(12, 18));
  EXPECT_EQ(2, gcd(30, 242));
  EXPECT_EQ(21, gcd(1029, 1071));
  EXPECT_EQ(636, gcd(3180, 1908));
}

TEST(ThreeGCDTest, calculate3NumberGCD) {
  EXPECT_EQ(6, threeGCD(12, 18, 24));
  EXPECT_EQ(1, threeGCD(30, 243, 91));
  EXPECT_EQ(21, threeGCD(1029, 1071, 2100));
  EXPECT_EQ(12, threeGCD(3180, 1908, 72));
}

}  // namespace takamrcpp::math

#endif  // TAKAMRCPP_LIBS_MATH_SRC_GCD_TEST_CPP_

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
