/*
 * swap_interval.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwSwapInterval(int interval) {
  stubber::register_call("glfwSwapInterval", {
    {"interval", t_arg(interval)}
  });
}

