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
  s_stub.register_call(__FUNCTION__, {
    {"count", t_arg(count)}
  });
  return s_stub.get_result<GLFWmonitor**>(__FUNCTION__);
}

