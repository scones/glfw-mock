/*
 * swap_buffers.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwSwapBuffers(GLFWwindow* window) {
  stubber::register_call("glfwSwapBuffers", {
    {"window", t_arg(window)}
  });
}

