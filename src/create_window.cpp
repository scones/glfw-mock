/*
 * create_window.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI GLFWwindow* glfwCreateWindow(int width, int height, const char* title, GLFWmonitor* monitor, GLFWwindow* share) {
  stubber::register_call("glfwCreateWindow", {
      {"width", t_arg(width)},
      {"height", t_arg(height)},
      {"title", t_arg(title)},
      {"monitor", t_arg(monitor)},
      {"share", t_arg(share)}
  });
  return stubber::get_result<GLFWwindow*>("glfwCreateWindow");
}

