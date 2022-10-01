/*
 * Copyright (c) 2022 Takamaru. All rights reserved.
 */

#include <gtest/gtest.h>
#include <unit/distance.h>

namespace takamrcpp::unit {

TEST(MetersToMilesTest, OneMeter) {
  EXPECT_EQ(metersToMiles(1), kMiles1Meter);
}

}  // namespace takamrcpp::unit

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
