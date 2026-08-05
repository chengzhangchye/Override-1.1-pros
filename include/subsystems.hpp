#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor lift(11);
inline pros::Motor toggle(-15);
inline ez::Piston claw('H');

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');