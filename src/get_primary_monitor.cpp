/*
 * get_primary_monitor.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI GLFWmonitor* glfwGetPrimaryMonitor(void) {
  stubber::register_call("glfwGetPrimaryMonitor", {});
  return stubber::get_result<GLFWmonitor*>("glfwGetPrimaryMonitor");
}

