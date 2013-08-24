/*
 * get_joystick_buttons.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI const unsigned char* glfwGetJoystickButtons(int joy, int* count) {
  s_stub.register_call(__FUNCTION__, {
    {"joy", t_arg(joy)},
    {"count", t_arg(count)}
  });
  return s_stub.get_result<const unsigned char*>(__FUNCTION__);
}

