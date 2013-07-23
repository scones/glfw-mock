/*
 * show_window.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwShowWindow(GLFWwindow* window) {
  stubber::register_call("glfwShowWindow", {
    {"window", t_arg(window)}
  });
}

