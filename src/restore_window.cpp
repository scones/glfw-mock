/*
 * restore_window.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwRestoreWindow(GLFWwindow* window) {
  s_stub.register_call(__FUNCTION__, {
    {"window", t_arg(window)}
  });
}

