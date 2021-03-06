/*
 * set_window_pos.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwSetWindowPos(GLFWwindow* window, int xpos, int ypos) {
  s_stub.register_call(__FUNCTION__, {
    {"window", t_arg(window)},
    {"xpos", t_arg(xpos)},
    {"ypos", t_arg(ypos)}
  });
}

