/*
 * set_framebuffer_size_callback.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI GLFWframebuffersizefun glfwSetFramebufferSizeCallback(GLFWwindow* window, GLFWframebuffersizefun cbfun) {
  s_stub.register_call(__FUNCTION__, {
    {"window", t_arg(window)},
    {"cbfun", t_arg(cbfun)}
  });
  return s_stub.get_result<GLFWframebuffersizefun>(__FUNCTION__);
}

