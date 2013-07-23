/*
 * get_gamma_ramp.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Retrieves the current gamma ramp for the specified monitor.
 *
 *  This function retrieves the current gamma ramp of the specified monitor.
 *
 *  @param[in] monitor The monitor to query.
 *  @return The current gamma ramp, or `NULL` if an error occurred.
 *
 *  @note The value arrays of the returned ramp are allocated and freed by GLFW.
 *  You should not free them yourself.
 *
 *  @ingroup monitor
 */
GLFWAPI const GLFWgammaramp* glfwGetGammaRamp(GLFWmonitor* monitor);

