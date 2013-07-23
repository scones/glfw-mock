/*
 * set_window_size.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Sets the size of the client area of the specified window.
 *
 *  This function sets the size, in screen coordinates, of the client area of
 *  the specified window.
 *
 *  For full screen windows, this function selects and switches to the resolution
 *  closest to the specified size, without affecting the window's context.  As
 *  the context is unaffected, the bit depths of the framebuffer remain
 *  unchanged.
 *
 *  @param[in] window The window to resize.
 *  @param[in] width The desired width of the specified window.
 *  @param[in] height The desired height of the specified window.
 *
 *  @note This function may only be called from the main thread.
 *
 *  @note The window manager may put limits on what window sizes are allowed.
 *
 *  @sa glfwGetWindowSize
 *
 *  @ingroup window
 */
GLFWAPI void glfwSetWindowSize(GLFWwindow* window, int width, int height);

