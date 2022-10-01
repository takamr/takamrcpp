/*
 * Copyright (c) 2022 Takamaru. All rights reserved.
 */

#include <string>

#ifndef TAKAMRCPP_LIBS_PHYSICS_INCLUDE_PHYSICS_GRAVITY_H_
#define TAKAMRCPP_LIBS_PHYSICS_INCLUDE_PHYSICS_GRAVITY_H_

namespace takamrcpp::physics {

// ㎨
static const double kEarthGravity = 9.8067;
static const double kMoonGravity = 1.625;
static const double kSunGravity = 274.1;
static const double kMercuryGravity = 3.703;
static const double kVenusGravity = 8.872;
static const double kMarsGravity = 3.728;
static const double kJupiterGravity = 25.93;
static const double kSaturnGravity = 11.19;
static const double kUranusGravity = 9.01;
static const double kNeptuneGravity = 11.28;
static const double kPlutoGravity = 0.610;

double getGravityByPlanet(const std::string& planet);

}  // namespace takamrcpp::physics

#endif  // TAKAMRCPP_LIBS_PHYSICS_INCLUDE_PHYSICS_GRAVITY_H_
