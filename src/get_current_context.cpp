/*
 * get_current_context.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI GLFWwindow* glfwGetCurrentContext(void) {
  stubber::register_call("glfwGetCurrentContext", {});
  return stubber::get_result<GLFWwindow*>("glfwGetCurrentContext");
}

