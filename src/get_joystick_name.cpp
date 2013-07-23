/*
 * get_joystick_name.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Returns the name of the specified joystick.
 *
 *  This function returns the name, encoded as UTF-8, of the specified joystick.
 *
 *  @param[in] joy The joystick to query.
 *  @return The UTF-8 encoded name of the joystick, or `NULL` if the joystick
 *  is not present.
 *
 *  @note The returned string is allocated and freed by GLFW.  You should not
 *  free it yourself.
 *
 *  @note The returned string is valid only until the next call to @ref
 *  glfwGetJoystickName for that joystick.
 *
 *  @ingroup input
 */
GLFWAPI const char* glfwGetJoystickName(int joy);

