/*
 * get_joystick_buttons.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Returns the state of all buttons of the specified joystick.
 *
 *  This function returns the state of all buttons of the specified joystick.
 *
 *  @param[in] joy The joystick to query.
 *  @param[out] count Where to store the size of the returned array.  This is
 *  set to zero if an error occurred.
 *  @return An array of button states, or `NULL` if the joystick is not present.
 *
 *  @note The returned array is allocated and freed by GLFW.  You should not
 *  free it yourself.
 *
 *  @note The returned array is valid only until the next call to @ref
 *  glfwGetJoystickButtons for that joystick.
 *
 *  @ingroup input
 */
GLFWAPI const unsigned char* glfwGetJoystickButtons(int joy, int* count);

