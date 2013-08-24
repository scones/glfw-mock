/*
 * set_error_callback.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI GLFWerrorfun glfwSetErrorCallback(GLFWerrorfun cbfun) {
  s_stub.register_call(__FUNCTION__, {
    {"cbfun", t_arg(cbfun)}
  });
  return s_stub.get_result<GLFWerrorfun>(__FUNCTION__);
}

