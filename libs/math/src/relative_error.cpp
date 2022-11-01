/*
 * Copyright (c) 2022 Takamaru. All rights reserved.
 */

#include <math/relative_error.h>

namespace takamrcpp::math {

double relative_error(double a, double b) {
  return abs((a - b) / b);
}

}  // takamrcpp::math

