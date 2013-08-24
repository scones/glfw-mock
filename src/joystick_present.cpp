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
  s_stub.register_call(__FUNCTION__, {
    {"joy", t_arg(joy)}
  });
  return s_stub.get_result<int>(__FUNCTION__);
}

