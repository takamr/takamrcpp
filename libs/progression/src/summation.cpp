/*
 * Copyright (c) 2022 Takamaru. All rights reserved.
 */

#include <progression/summation.h>

namespace takamrcpp::progression {

int recursiveSummation(int n) {
  if (n < 1) return 0;
  return recursiveSummation(n - 1) + n;
}

}  // namespace takamrcpp::progression
