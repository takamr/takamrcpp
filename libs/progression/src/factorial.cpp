/*
 * Copyright (c) 2022 Takamaru. All rights reserved.
 */

namespace takamrcpp::progression {

int64_t recursiveFactorial(int n) {
  if (n < 1) return 1;
  return recursiveFactorial(n - 1) * n;
}

}  // namespace takamrcpp::progression
