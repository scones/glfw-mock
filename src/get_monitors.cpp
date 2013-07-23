/*
 * get_monitors.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Returns the currently connected monitors.
 *
 *  This function returns an array of handles for all currently connected
 *  monitors.
 *
 *  @param[out] count Where to store the size of the returned array.  This is
 *  set to zero if an error occurred.
 *  @return An array of monitor handles, or `NULL` if an error occurred.
 *
 *  @note The returned array is allocated and freed by GLFW.  You should not
 *  free it yourself.
 *
 *  @note The returned array is valid only until the monitor configuration
 *  changes.  See @ref glfwSetMonitorCallback to receive notifications of
 *  configuration changes.
 *
 *  @sa glfwGetPrimaryMonitor
 *
 *  @ingroup monitor
 */
GLFWAPI GLFWmonitor** glfwGetMonitors(int* count);


