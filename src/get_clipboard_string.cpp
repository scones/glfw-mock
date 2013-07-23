/*
 * get_clipboard_string.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI const char* glfwGetClipboardString(GLFWwindow* window) {
  stubber::register_call("glfwGetClipboardString", {
    {"window", t_arg(window)}
  });
  return stubber::get_result<const char*>("glfwGetClipboardString");
}

