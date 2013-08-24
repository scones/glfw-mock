/*
 * set_gamma_ramp.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwSetGammaRamp(GLFWmonitor* monitor, const GLFWgammaramp* ramp) {
  s_stub.register_call(__FUNCTION__, {
    {"monitor", t_arg(monitor)},
    {"ramp", t_arg(ramp)}
  });
}

