/*
 * destroy_window.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwDestroyWindow(GLFWwindow* window) {
  stubber::register_call("glfwDestroyWindow", {
    {"window", t_arg(window)}
  });
}

