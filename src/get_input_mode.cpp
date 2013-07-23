/*
 * get_input_mode.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI int glfwGetInputMode(GLFWwindow* window, int mode) {
  stubber::register_call("glfwGetInputMode", {
    {"window", t_arg(window)},
    {"mode", t_arg(mode)}
  });
  return stubber::get_result<int>("glfwGetInputMode");
}

