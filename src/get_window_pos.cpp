/*
 * get_window_pos.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwGetWindowPos(GLFWwindow* window, int* xpos, int* ypos) {
  stubber::register_call("glfwGetWindowPos", {
    {"window", t_arg(window)},
    {"xpos", t_arg(xpos)},
    {"ypos", t_arg(ypos)}
  });
}

