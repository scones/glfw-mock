/*
 * get_window_size.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwGetWindowSize(GLFWwindow* window, int* width, int* height) {
  stubber::register_call("glfwGetWindowSize", {
    {"window", t_arg(window)},
    {"width", t_arg(width)},
    {"height", t_arg(height)}
  });
}

