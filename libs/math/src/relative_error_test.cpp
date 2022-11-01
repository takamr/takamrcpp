/*
 * Copyright (c) 2022 Takamaru. All rights reserved.
 */

#include <gtest/gtest.h>
#include <math/relative_error.h>

namespace takamrcpp::math {

const int kFloorDecimalPoint = 5;

TEST(RelativeErrorTest, calculateRelativeError) {
  double coefficient = pow(10, kFloorDecimalPoint);
  EXPECT_DOUBLE_EQ(floor(0.1 * coefficient),
                   floor(relative_error(1.1, 1) * coefficient));
}

}  // namespace takamrcpp::math

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
