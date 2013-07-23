/*
 * get_current_context.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Returns the window whose context is current on the calling thread.
 *
 *  This function returns the window whose context is current on the calling
 *  thread.
 *
 *  @return The window whose context is current, or `NULL` if no window's
 *  context is current.
 *
 *  @remarks This function may be called from secondary threads.
 *
 *  @sa glfwMakeContextCurrent
 *
 *  @ingroup context
 */
GLFWAPI GLFWwindow* glfwGetCurrentContext(void);

