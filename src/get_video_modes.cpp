/*
 * get_video_modes.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI const GLFWvidmode* glfwGetVideoModes(GLFWmonitor* monitor, int* count) {
  s_stub.register_call(__FUNCTION__, {
    {"monitor", t_arg(monitor)},
    {"count", t_arg(count)}
  });
  return s_stub.get_result<const GLFWvidmode*>(__FUNCTION__);
}

