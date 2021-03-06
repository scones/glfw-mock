/*
 * set_window_user_pointer.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwSetWindowUserPointer(GLFWwindow* window, void* pointer) {
  s_stub.register_call(__FUNCTION__, {
    {"window", t_arg(window)},
    {"pointer", t_arg(pointer)}
  });
}

