/*
 * get_window_attrib.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI int glfwGetWindowAttrib(GLFWwindow* window, int attrib) {
  stubber::register_call("glfwGetWindowAttrib", {
    {"window", t_arg(window)},
    {"attrib", t_arg(attrib)}
  });
  return stubber::get_result<int>("glfwGetWindowAttrib");
}

