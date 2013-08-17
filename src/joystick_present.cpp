/*
 * joystick_present.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI int glfwJoystickPresent(int joy) {
  stubber::register_call("glfwJoystickPresent", {
    {"joy", t_arg(joy)}
  });
  return stubber::get_result<int>("glfwJoystickPresent");
}

