/*
 * get_primary_monitor.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Returns the primary monitor.
 *
 *  This function returns the primary monitor.  This is usually the monitor
 *  where elements like the Windows task bar or the OS X menu bar is located.
 *
 *  @return The primary monitor, or `NULL` if an error occurred.
 *
 *  @sa glfwGetMonitors
 *
 *  @ingroup monitor
 */
GLFWAPI GLFWmonitor* glfwGetPrimaryMonitor(void);

