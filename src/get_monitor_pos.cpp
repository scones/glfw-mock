/*
 * get_monitor_pos.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwGetMonitorPos(GLFWmonitor* monitor, int* xpos, int* ypos) {
  s_stub.register_call(__FUNCTION__, {
    {"monitor", t_arg(monitor)},
    {"xpos", t_arg(xpos)},
    {"ypos", t_arg(ypos)}
  });
}

