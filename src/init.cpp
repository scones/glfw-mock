/*
 * init.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI int glfwInit(void) {
  stubber::register_call("glfwInit", {});
  return stubber::get_result<int>("glfwInit");
}

