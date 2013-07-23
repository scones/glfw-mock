/*
 * restore_window.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Restores the specified window.
 *
 *  This function restores the specified window, if it was previously
 *  iconified/minimized.  If it is a full screen window, the resolution chosen
 *  for the window is restored on the selected monitor.  If the window is
 *  already restored, this function does nothing.
 *
 *  @param[in] window The window to restore.
 *
 *  @note This function may only be called from the main thread.
 *
 *  @sa glfwIconifyWindow
 *
 *  @ingroup window
 */
GLFWAPI void glfwRestoreWindow(GLFWwindow* window);

