/*
 * get_proc_address.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI GLFWglproc glfwGetProcAddress(const char* procname) {
  stubber::register_call("glfwGetProcAddress", {
    {"procname", t_arg(procname)}
  });
  return stubber::get_result<GLFWglproc>("glfwGetProcAddress");
}

