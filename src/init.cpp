/*
 * init.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI int glfwInit(void) {
  s_stub.register_call(__FUNCTION__, {});
  return s_stub.get_result<int>(__FUNCTION__);
}

