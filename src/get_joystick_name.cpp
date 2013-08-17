/*
 * get_joystick_name.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI const char* glfwGetJoystickName(int joy) {
  stubber::register_call("glfwGetJoystickName", {
    {"joy", t_arg(joy)}
  });
  return stubber::get_result<const char*>("glfwGetJoystickName");
}

