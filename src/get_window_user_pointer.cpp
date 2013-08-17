/*
 * get_window_user_pointer.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void* glfwGetWindowUserPointer(GLFWwindow* window) {
  stubber::register_call("glfwGetWindowUserPointer", {
    {"window", t_arg(window)}
  });
  return stubber::get_result<void*>("glfwGetWindowUserPointer");
}

