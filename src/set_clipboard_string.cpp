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
  stubber::register_call("glfwSetClipboardString", {
    {"window", t_arg(window)},
    {"string", t_arg(string)}
  });
}

