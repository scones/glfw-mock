/*
 * terminate.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwTerminate(void) {
  stubber::register_call("glfwTerminate", {});
}

