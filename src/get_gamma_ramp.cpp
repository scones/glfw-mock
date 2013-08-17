/*
 * get_gamma_ramp.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI const GLFWgammaramp* glfwGetGammaRamp(GLFWmonitor* monitor) {
  stubber::register_call("glfwGetGammaRamp", {
    {"monitor", t_arg(monitor)}
  });
  return stubber::get_result<const GLFWgammaramp*>("glfwGetGammaRamp");
}

