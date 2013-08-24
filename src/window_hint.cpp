/*
 * window_hint.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwWindowHint(int target, int hint) {
  s_stub.register_call(__FUNCTION__, {
    {"target", t_arg(target)},
    {"hint", t_arg(hint)}
  });
}

