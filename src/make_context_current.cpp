/*
 * make_context_current.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Makes the context of the specified window current for the calling
 *  thread.
 *
 *  This function makes the context of the specified window current on the
 *  calling thread.  A context can only be made current on a single thread at
 *  a time and each thread can have only a single current context at a time.
 *
 *  @param[in] window The window whose context to make current, or `NULL` to
 *  detach the current context.
 *
 *  @remarks This function may be called from secondary threads.
 *
 *  @sa glfwGetCurrentContext
 *
 *  @ingroup context
 */
GLFWAPI void glfwMakeContextCurrent(GLFWwindow* window);

