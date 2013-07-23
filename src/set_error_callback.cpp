/*
 * set_error_callback.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI GLFWerrorfun glfwSetErrorCallback(GLFWerrorfun cbfun) {
  stubber::register_call("glfwSetErrorCallback", {
    {"cbfun", t_arg(cbfun)}
  });
  return stubber::get_result<GLFWerrorfun>("glfwSetErrorCallback");
}

