/*
 * Copyright (c) 2022 Takamaru. All rights reserved.
 */

#include <cmath>
#include <progression/summation.h>

namespace takamrcpp::progression {

int recursiveSummation(int n) {
  if (n < 1) return 0;
  return recursiveSummation(n - 1) + n;
}

int recursiveSquareSummation(int n) {
  if (n < 1) return 0;
  return recursiveSquareSummation(n - 1) + (int)pow(n, 2);
}

}  // namespace takamrcpp::progression
