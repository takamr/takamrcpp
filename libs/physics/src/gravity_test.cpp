/*
 * Copyright (c) 2022 Takamaru. All rights reserved.
 */

#include <gtest/gtest.h>
#include <physics/gravity.h>

namespace takamrcpp::physics {

TEST(GravityTest, getEarthGravity) {
  EXPECT_EQ(getGravityByPlanet("Earth"), kEarthGravity);
}

TEST(GravityTest, getJupiterGravity) {
  EXPECT_EQ(getGravityByPlanet("Jupiter"), kJupiterGravity);
}

TEST(GravityTest, getMercuryGravity) {
  EXPECT_EQ(getGravityByPlanet("Mercury"), kMercuryGravity);
}

TEST(GravityTest, getNonGravity) {
  EXPECT_EQ(getGravityByPlanet(""), 0);
}

}  // namespace takamrcpp::physics

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
