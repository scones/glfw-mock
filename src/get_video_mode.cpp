/*
 * get_video_mode.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Returns the current mode of the specified monitor.
 *
 *  This function returns the current video mode of the specified monitor.  If
 *  you are using a full screen window, the return value will therefore depend
 *  on whether it is focused.
 *
 *  @param[in] monitor The monitor to query.
 *  @return The current mode of the monitor, or `NULL` if an error occurred.
 *
 *  @note The returned struct is allocated and freed by GLFW.  You should not
 *  free it yourself.
 *
 *  @sa glfwGetVideoModes
 *
 *  @ingroup monitor
 */
GLFWAPI const GLFWvidmode* glfwGetVideoMode(GLFWmonitor* monitor);

