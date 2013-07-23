/*
 * get_joystick_axes.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Returns the values of all axes of the specified joystick.
 *
 *  This function returns the values of all axes of the specified joystick.
 *
 *  @param[in] joy The joystick to query.
 *  @param[out] count Where to store the size of the returned array.  This is
 *  set to zero if an error occurred.
 *  @return An array of axis values, or `NULL` if the joystick is not present.
 *
 *  @note The returned array is allocated and freed by GLFW.  You should not
 *  free it yourself.
 *
 *  @note The returned array is valid only until the next call to @ref
 *  glfwGetJoystickAxes for that joystick.
 *
 *  @ingroup input
 */
GLFWAPI const float* glfwGetJoystickAxes(int joy, int* count);

