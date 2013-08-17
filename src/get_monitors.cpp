/*
 * get_monitors.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI GLFWmonitor** glfwGetMonitors(int* count) {
  stubber::register_call("glfwGetMonitors", {
    {"count", t_arg(count)}
  });
  return stubber::get_result<GLFWmonitor**>("glfwGetMonitors");
}

