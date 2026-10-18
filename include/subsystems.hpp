#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::MotorGroup lift({10, -1}); 
inline ez::Piston claw('A');
inline pros::Motor toggle(-2);

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');