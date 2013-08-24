/*
 * set_time.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwSetTime(double time) {
  s_stub.register_call(__FUNCTION__, {
    {"time", t_arg(time)}
  });
}

