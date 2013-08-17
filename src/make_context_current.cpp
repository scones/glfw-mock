/*
 * make_context_current.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwMakeContextCurrent(GLFWwindow* window) {
  stubber::register_call("glfwMakeContextCurrent", {
    {"window", t_arg(window)}
  });
}

