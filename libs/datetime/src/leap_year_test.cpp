/*
 * Copyright (c) 2022 Takamaru. All rights reserved.
 */

#include <gtest/gtest.h>
#include <datetime/leap_year.h>

namespace takamrcpp::datetime {

TEST(IsLeapYearTest, isLeapYear2021) {
  EXPECT_EQ(isLeapYear(2021), false);
}

TEST(IsLeapYearTest, isLeapYear2012) {
  EXPECT_EQ(isLeapYear(2012), true);
}

TEST(IsLeapYearTest, isLeapYear2004) {
  EXPECT_EQ(isLeapYear(2004), true);
}

TEST(IsLeapYearTest, isLeapYear2001) {
  EXPECT_EQ(isLeapYear(2001), false);
}

TEST(IsLeapYearTest, isLeapYear2000) {
  EXPECT_EQ(isLeapYear(2000), true);
}

TEST(IsLeapYearTest, isLeapYear1990) {
  EXPECT_EQ(isLeapYear(1990), false);
}

TEST(IsLeapYearTest, isLeapYear1978) {
  EXPECT_EQ(isLeapYear(1978), false);
}

}  // namespace takamrcpp::datetime

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
