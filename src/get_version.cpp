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
  s_stub.register_call(__FUNCTION__, {
    {"major", t_arg(major)},
    {"minor", t_arg(minor)},
    {"rev", t_arg(rev)}
  });
}

