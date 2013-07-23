/*
 * window_hint.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI void glfwWindowHint(int target, int hint) {
  stubber::register_call("glfwWindowHint", {
    {"target", t_arg(target)},
    {"hint", t_arg(hint)}
  });
}

