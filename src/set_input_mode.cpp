/*
 * set_input_mode.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwSetInputMode(GLFWwindow* window, int mode, int value) {
  stubber::register_call("glfwSetInputMode", {
    {"window", t_arg(window)},
    {"mode", t_arg(mode)},
    {"value", t_arg(value)}
  });
}

