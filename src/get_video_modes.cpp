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
  stubber::register_call("glfwGetVideoModes", {
    {"monitor", t_arg(monitor)},
    {"count", t_arg(count)}
  });
  return stubber::get_result<const GLFWvidmode*>("glfwGetVideoModes");
}

