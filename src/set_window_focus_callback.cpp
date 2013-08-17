/*
 * set_window_focus_callback.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI GLFWwindowfocusfun glfwSetWindowFocusCallback(GLFWwindow* window, GLFWwindowfocusfun cbfun) {
  stubber::register_call("glfwSetWindowFocusCallback", {
    {"window", t_arg(window)},
    {"cbfun", t_arg(cbfun)}
  });
  return stubber::get_result<GLFWwindowfocusfun>("glfwSetWindowFocusCallback");
}

