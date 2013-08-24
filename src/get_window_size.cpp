/*
 * get_window_size.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwGetWindowSize(GLFWwindow* window, int* width, int* height) {
  s_stub.register_call(__FUNCTION__, {
    {"window", t_arg(window)},
    {"width", t_arg(width)},
    {"height", t_arg(height)}
  });
}

