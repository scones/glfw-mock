/*
 * set_mouse_button_callback.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI GLFWmousebuttonfun glfwSetMouseButtonCallback(GLFWwindow* window, GLFWmousebuttonfun cbfun) {
  stubber::register_call("glfwSetMouseButtonCallback", {
    {"window", t_arg(window)},
    {"cbfun", t_arg(cbfun)}
  });
  return stubber::get_result<GLFWmousebuttonfun>("glfwSetMouseButtonCallback");
}

