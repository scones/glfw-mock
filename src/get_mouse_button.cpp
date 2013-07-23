/*
 * get_mouse_button.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

GLFWAPI int glfwGetMouseButton(GLFWwindow* window, int button) {
  stubber::register_call("glfwGetMouseButton", {
    {"window", t_arg(window)},
    {"button", t_arg(button)}
  });
  return stubber::get_result<int>("glfwGetMouseButton");
}

