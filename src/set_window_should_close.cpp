/*
 * set_window_should_close.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwSetWindowShouldClose(GLFWwindow* window, int value) {
  stubber::register_call("glfwSetWindowShouldClose", {
    {"window", t_arg(window)},
    {"value", t_arg(value)}
  });
}

