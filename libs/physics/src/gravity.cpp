/*
 * Copyright (c) 2022 Takamaru. All rights reserved.
 */

#include <physics/gravity.h>

namespace takamrcpp::physics {

double getGravityByPlanet(const std::string& planet) {
  if (planet == "Earth") {
    return kEarthGravity;
  }
  if (planet == "Jupiter") {
    return kJupiterGravity;
  }
  if (planet == "Mercury") {
    return kMercuryGravity;
  }
  return 0;
}

}  // namespace takamrcpp::physics
