/*
 * create_window.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI GLFWwindow* glfwCreateWindow(int width, int height, const char* title, GLFWmonitor* monitor, GLFWwindow* share) {
  s_stub.register_call(__FUNCTION__, {
      {"width", t_arg(width)},
      {"height", t_arg(height)},
      {"title", t_arg(title)},
      {"monitor", t_arg(monitor)},
      {"share", t_arg(share)}
  });
  return s_stub.get_result<GLFWwindow*>(__FUNCTION__);
}

