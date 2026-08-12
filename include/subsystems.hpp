#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::MotorGroup lift({10, -11}); 
inline ez::Piston claw('H');
inline pros::Motor toggle(-20);

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');