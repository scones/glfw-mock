/*
 * get_window_monitor.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI GLFWmonitor* glfwGetWindowMonitor(GLFWwindow* window) {
  stubber::register_call("glfwGetWindowMonitor", {
    {"window", t_arg(window)}
  });
  return stubber::get_result<GLFWmonitor*>("glfwGetWindowMonitor");
}

