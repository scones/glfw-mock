/*
 * get_version.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwGetVersion(int* major, int* minor, int* rev) {
  stubber::register_call("glfwGetVersion", {
    {"major", t_arg(major)},
    {"minor", t_arg(minor)},
    {"rev", t_arg(rev)}
  });
}

