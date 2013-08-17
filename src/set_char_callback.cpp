/*
 * set_char_callback.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI GLFWcharfun glfwSetCharCallback(GLFWwindow* window, GLFWcharfun cbfun) {
  stubber::register_call("glfwSetCharCallback", {
    {"window", t_arg(window)},
    {"cbfun", t_arg(cbfun)}
  });
  return stubber::get_result<GLFWcharfun>("glfwSetCharCallback");
}

