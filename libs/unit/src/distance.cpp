/*
 * Copyright (c) 2022 Takamaru. All rights reserved.
 */

#include <unit/distance.h>

namespace takamrcpp::unit {

double metersToMiles(double meters) {
  return meters * kMiles1Meter;
}

}  // namespace takamrcpp::unit
