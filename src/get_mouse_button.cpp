/*
 * get_mouse_button.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI int glfwGetMouseButton(GLFWwindow* window, int button) {
  s_stub.register_call(__FUNCTION__, {
    {"window", t_arg(window)},
    {"button", t_arg(button)}
  });
  return s_stub.get_result<int>(__FUNCTION__);
}

