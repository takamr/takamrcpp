/*
 * Copyright (c) 2022 Takamaru. All rights reserved.
 */

#include <math/gcd.h>
#include <string>

#ifndef TAKAMRCPP_LIBS_MATH_INCLUDE_MATH_FRACTION_H_
#define TAKAMRCPP_LIBS_MATH_INCLUDE_MATH_FRACTION_H_

namespace takamrcpp::math {

class Fraction {
 public:
  Fraction(int numerator, int denominator);
  std::string ToString() const;
  Fraction Irreducible() const;

 private:
  int numerator_;
  int denominator_;
};

}  // namespace takamrcpp::math

#endif  // TAKAMRCPP_LIBS_MATH_INCLUDE_MATH_FRACTION_H_
