/*
 * get_joystick_buttons.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI const unsigned char* glfwGetJoystickButtons(int joy, int* count) {
  stubber::register_call("glfwGetJoystickButtons", {
    {"joy", t_arg(joy)},
    {"count", t_arg(count)}
  });
  return stubber::get_result<const unsigned char*>("glfwGetJoystickButtons");
}

