/*
 * joystick_present.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Returns whether the specified joystick is present.
 *
 *  This function returns whether the specified joystick is present.
 *
 *  @param[in] joy The joystick to query.
 *  @return `GL_TRUE` if the joystick is present, or `GL_FALSE` otherwise.
 *
 *  @ingroup input
 */
GLFWAPI int glfwJoystickPresent(int joy);

