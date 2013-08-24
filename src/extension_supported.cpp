/*
 * extension_supported.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI int glfwExtensionSupported(const char* extension) {
  s_stub.register_call(__FUNCTION__, {
    {"extension", t_arg(extension)}
  });
  return s_stub.get_result<int>(__FUNCTION__);
}

