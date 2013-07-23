/*
 * iconify_window.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Iconifies the specified window.
 *
 *  This function iconifies/minimizes the specified window, if it was previously
 *  restored.  If it is a full screen window, the original monitor resolution is
 *  restored until the window is restored.  If the window is already iconified,
 *  this function does nothing.
 *
 *  @param[in] window The window to iconify.
 *
 *  @note This function may only be called from the main thread.
 *
 *  @sa glfwRestoreWindow
 *
 *  @ingroup window
 */
GLFWAPI void glfwIconifyWindow(GLFWwindow* window);

