/*
 * set_gamma.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwSetGamma(GLFWmonitor* monitor, float gamma) {
  s_stub.register_call(__FUNCTION__, {
    {"monitor", t_arg(monitor)},
    {"gamma", t_arg(gamma)}
  });
}

