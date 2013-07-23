/*
 * extension_supported.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI int glfwExtensionSupported(const char* extension) {
  stubber::register_call("glfwExtensionSupported", {
    {"extension", t_arg(extension)}
  });
  return stubber::get_result<int>("glfwExtensionSupported");
}

