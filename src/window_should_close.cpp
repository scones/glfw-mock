/*
 * window_should_close.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI int glfwWindowShouldClose(GLFWwindow* window) {
  stubber::register_call("glfwWindowShouldClose", {
    {"window", t_arg(window)}
  });
  return stubber::get_result<int>("glfwWindowShouldClose");
}

