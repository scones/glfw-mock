/*
 * set_time.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwSetTime(double time) {
  stubber::register_call("glfwSetTime", {
    {"time", t_arg(time)}
  });
}

