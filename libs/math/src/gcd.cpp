/*
 * Copyright (c) 2022 Takamaru. All rights reserved.
 */

namespace takamrcpp::math {

int gcd(int x, int y) {
  if (x % y == 0) return y;
  return gcd(y, x % y);
}

int threeGCD(int x, int y, int z) {
  return gcd(gcd(x, y), z);
}

}  // namespace takamrcpp::math
