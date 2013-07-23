/*
 * get_monitor_physical_size.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Returns the physical size of the monitor.
 *
 *  This function returns the size, in millimetres, of the display area of the
 *  specified monitor.
 *
 *  @param[in] monitor The monitor to query.
 *  @param[out] width Where to store the width, in mm, of the monitor's display
 *  area, or `NULL`.
 *  @param[out] height Where to store the height, in mm, of the monitor's
 *  display area, or `NULL`.
 *
 *  @note Some operating systems do not provide accurate information, either
 *  because the monitor's EDID data is incorrect, or because the driver does not
 *  report it accurately.
 *
 *  @ingroup monitor
 */
GLFWAPI void glfwGetMonitorPhysicalSize(GLFWmonitor* monitor, int* width, int* height);

