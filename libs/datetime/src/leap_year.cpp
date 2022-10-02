/*
 * Copyright (c) 2022 Takamaru. All rights reserved.
 */

#include <cmath>

bool isLeapYear(double year) {
  if (fmod(year, 100) == 0 && fmod(year, 400) != 0) return false;
  return fmod(year, 4) == 0;
}
