/*
 * get_input_mode.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI int glfwGetInputMode(GLFWwindow* window, int mode) {
  s_stub.register_call(__FUNCTION__, {
    {"window", t_arg(window)},
    {"mode", t_arg(mode)}
  });
  return s_stub.get_result<int>(__FUNCTION__);
}

