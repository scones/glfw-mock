/*
 * set_window_size_callback.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI GLFWwindowsizefun glfwSetWindowSizeCallback(GLFWwindow* window, GLFWwindowsizefun cbfun) {
  stubber::register_call("glfwSetWindowSizeCallback", {
    {"window", t_arg(window)},
    {"cbfun", t_arg(cbfun)}
  });
  return stubber::get_result<GLFWwindowsizefun>("glfwSetWindowSizeCallback");
}

