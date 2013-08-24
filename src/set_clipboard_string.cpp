/*
 * set_clipboard_string.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwSetClipboardString(GLFWwindow* window, const char* string) {
  s_stub.register_call(__FUNCTION__, {
    {"window", t_arg(window)},
    {"string", t_arg(string)}
  });
}

