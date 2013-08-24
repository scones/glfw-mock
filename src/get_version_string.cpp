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
  s_stub.register_call(__FUNCTION__, {});
  return s_stub.get_result<const char*>(__FUNCTION__);
}

