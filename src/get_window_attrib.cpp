/*
 * get_window_attrib.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI int glfwGetWindowAttrib(GLFWwindow* window, int attrib) {
  s_stub.register_call(__FUNCTION__, {
    {"window", t_arg(window)},
    {"attrib", t_arg(attrib)}
  });
  return s_stub.get_result<int>(__FUNCTION__);
}

