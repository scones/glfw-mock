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
  stubber::register_call("glfwSetMonitorCallback", {
    {"cbfun", t_arg(cbfun)}
  });
  return stubber::get_result<GLFWmonitorfun>("glfwSetMonitorCallback");
}

