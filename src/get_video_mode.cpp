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
  stubber::register_call("glfwGetVideoMode", {
    {"monitor", t_arg(monitor)}
  });
  return stubber::get_result<const GLFWvidmode*>("glfwGetVideoMode");
}

