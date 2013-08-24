/*
 * set_window_title.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwSetWindowTitle(GLFWwindow* window, const char* title) {
  s_stub.register_call(__FUNCTION__, {
    {"window", t_arg(window)},
    {"title", t_arg(title)}
  });
}

