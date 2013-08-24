/*
 * default_window_hints.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwDefaultWindowHints(void) {
  s_stub.register_call(__FUNCTION__, {});
}

