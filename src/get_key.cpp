/*
 * get_key.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "stubber/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI int glfwGetKey(GLFWwindow* window, int key) {
  stubber::register_call("glfwGetKey", {
    {"window", t_arg(window)},
    {"key", t_arg(key)}
  });
  return stubber::get_result<int>("glfwGetKey");
}

