/*
 * set_window_close_callback.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI GLFWwindowclosefun glfwSetWindowCloseCallback(GLFWwindow* window, GLFWwindowclosefun cbfun) {
  stubber::register_call("glfwSetWindowCloseCallback", {
    {"window", t_arg(window)},
    {"cbfun", t_arg(cbfun)}
  });
  return stubber::get_result<GLFWwindowclosefun>("glfwSetWindowCloseCallback");
}

