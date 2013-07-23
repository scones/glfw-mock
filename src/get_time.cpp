/*
 * get_time.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI double glfwGetTime(void) {
  stubber::register_call("glfwGetTime", {});
  return stubber::get_result<double>("glfwGetTime");
}

