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
  s_stub.register_call(__FUNCTION__, {
    {"procname", t_arg(procname)}
  });
  return s_stub.get_result<GLFWglproc>(__FUNCTION__);
}

