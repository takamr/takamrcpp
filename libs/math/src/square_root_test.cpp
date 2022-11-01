/*
 * Copyright (c) 2022 Takamaru. All rights reserved.
 */

#include <gtest/gtest.h>
#include <math/square_root.h>

namespace takamrcpp::math {

TEST(SquareRootTest, calcurateSquareRoot) {
  double result = square_root(2);
  EXPECT_DOUBLE_EQ(result, 1.41);
}

}  // takamrcpp::math

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
