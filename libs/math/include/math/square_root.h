/*
 * Copyright (c) 2022 Takamaru. All rights reserved.
 */

#include <cmath>

#ifndef TAKAMRCPP_LIBS_MATH_INCLUDE_MATH_SQUARE_ROOT_H_
#define TAKAMRCPP_LIBS_MATH_INCLUDE_MATH_SQUARE_ROOT_H_

bool is_square_root_close_enough(double a, double b);

double square_root_helper(double x, double guess);

double square_root(double x);

#endif // TAKAMRCPP_LIBS_MATH_INCLUDE_MATH_SQUARE_ROOT_H_
