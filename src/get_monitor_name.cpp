/*
 * get_monitor_name.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI const char* glfwGetMonitorName(GLFWmonitor* monitor) {
  stubber::register_call("glfwGetMonitorName", {
    {"monitor", t_arg(monitor)}
  });
  return stubber::get_result<const char*>("glfwGetMonitorName");
}

