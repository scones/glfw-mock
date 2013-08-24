/*
 * get_video_mode.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI const GLFWvidmode* glfwGetVideoMode(GLFWmonitor* monitor) {
  s_stub.register_call(__FUNCTION__, {
    {"monitor", t_arg(monitor)}
  });
  return s_stub.get_result<const GLFWvidmode*>(__FUNCTION__);
}

