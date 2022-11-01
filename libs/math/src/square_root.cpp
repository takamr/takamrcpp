/*
 * Copyright (c) 2022 Takamaru. All rights reserved.
 */

#include <math/square_root.h>

namespace takamrcpp::math {

bool is_square_root_close_enough(double a, double b) {
  return 100 * abs((a - b) / b) < 0.01;
}

double square_root_helper(double x, double guess) {
  double newGuess = (guess + x / guess) / 2;

  if (is_square_root_close_enough(newGuess, guess)) return newGuess;

  return square_root_helper(x, newGuess);
}

double square_root(double x) {
  return square_root_helper(x, 1);
}

} // takamrcpp::math
