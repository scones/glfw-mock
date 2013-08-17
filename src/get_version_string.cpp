/*
 * get_version_string.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI const char* glfwGetVersionString(void) {
  stubber::register_call("glfwGetVersionString", {});
  return stubber::get_result<const char*>("glfwGetVersionString");
}

