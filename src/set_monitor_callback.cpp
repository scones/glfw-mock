/*
 * set_monitor_callback.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI GLFWmonitorfun glfwSetMonitorCallback(GLFWmonitorfun cbfun) {
  s_stub.register_call(__FUNCTION__, {
    {"cbfun", t_arg(cbfun)}
  });
  return s_stub.get_result<GLFWmonitorfun>(__FUNCTION__);
}

