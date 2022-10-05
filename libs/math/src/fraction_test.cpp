/*
 * Copyright (c) 2022 Takamaru. All rights reserved.
 */

#include <gtest/gtest.h>
#include <math/fraction.h>

namespace takamrcpp::math {

TEST(FractionTest, irreducibleFraction) {
  Fraction fraction = Fraction(12, 24);
  EXPECT_EQ("12/24", fraction.ToString());
  Fraction irreducibleFraction = fraction.Irreducible();
  EXPECT_EQ("1/2", irreducibleFraction.ToString());
  fraction = Fraction(1029, 1071);
  irreducibleFraction = fraction.Irreducible();
  EXPECT_EQ("49/51", irreducibleFraction.ToString());
  fraction = Fraction(1048576, 1024);
  irreducibleFraction = fraction.Irreducible();
  EXPECT_EQ("1024", irreducibleFraction.ToString());
  fraction = Fraction(3180, 1908);
  irreducibleFraction = fraction.Irreducible();
  EXPECT_EQ("5/3", irreducibleFraction.ToString());
}

TEST(FractionTest, returnNumeratorIfDenominatorIs1) {
  Fraction fraction = Fraction(2, 1);
  EXPECT_EQ("2", fraction.ToString());
  Fraction irreducibleFraction = fraction.Irreducible();
  EXPECT_EQ("2", irreducibleFraction.ToString());
}

}  // namespace takamrcpp::math

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
