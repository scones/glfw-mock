/*
 * set_key_callback.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI GLFWkeyfun glfwSetKeyCallback(GLFWwindow* window, GLFWkeyfun cbfun) {
  s_stub.register_call(__FUNCTION__, {
    {"window", t_arg(window)},
    {"cbfun", t_arg(cbfun)}
  });
  return s_stub.get_result<GLFWkeyfun>(__FUNCTION__);
}

