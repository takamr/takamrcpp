/*
 * Copyright (c) 2022 Takamaru. All rights reserved.
 */

#include "math/fraction.h"
#include <math/gcd.h>

namespace takamrcpp::math {

Fraction::Fraction(int numerator, int denominator) {
  numerator_ = numerator;
  denominator_ = denominator;
}

std::string Fraction::ToString() const {
  if (denominator_ == 1) return std::to_string(numerator_);
  return std::to_string(numerator_)
  + "/" + std::to_string(denominator_);
}

Fraction Fraction::Irreducible() const {
  int g = gcd(numerator_, denominator_);
  return {numerator_ / g, denominator_ / g};
}

}  // namespace takamrcpp::math


