/*
 * get_joystick_axes.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI const float* glfwGetJoystickAxes(int joy, int* count) {
  s_stub.register_call(__FUNCTION__, {
    {"joy", t_arg(joy)},
    {"count", t_arg(count)}
  });
  return s_stub.get_result<const float*>(__FUNCTION__);
}

