/*
 * get_monitor_physical_size.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwGetMonitorPhysicalSize(GLFWmonitor* monitor, int* width, int* height) {
  stubber::register_call("glfwGetMonitorPhysicalSize", {
    {"monitor", t_arg(monitor)},
    {"width", t_arg(width)},
    {"height", t_arg(height)}
  });
}

