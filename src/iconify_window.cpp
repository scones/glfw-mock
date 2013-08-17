/*
 * iconify_window.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwIconifyWindow(GLFWwindow* window) {
  stubber::register_call("glfwIconifyWindow", {
    {"window", t_arg(window)}
  });
}

