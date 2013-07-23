/*
 * swap_buffers.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Swaps the front and back buffers of the specified window.
 *
 *  This function swaps the front and back buffers of the specified window.  If
 *  the swap interval is greater than zero, the GPU driver waits the specified
 *  number of screen updates before swapping the buffers.
 *
 *  @param[in] window The window whose buffers to swap.
 *
 *  @remarks This function may be called from secondary threads.
 *
 *  @par New in GLFW 3
 *  This function no longer calls @ref glfwPollEvents.  You need to call it or
 *  @ref glfwWaitEvents yourself.
 *
 *  @sa glfwSwapInterval
 *
 *  @ingroup context
 */
GLFWAPI void glfwSwapBuffers(GLFWwindow* window);

