/*
 * set_cursor_pos.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Sets the position of the cursor, relative to the client area of the window.
 *
 *  This function sets the position of the cursor.  The specified window must be
 *  focused.  If the window does not have focus when this function is called, it
 *  fails silently.
 *
 *  If the cursor is disabled (with `GLFW_CURSOR_DISABLED`) then the cursor
 *  position is unbounded and limited only by the minimum and maximum values of
 *  a `double`.
 *
 *  @param[in] window The desired window.
 *  @param[in] xpos The desired x-coordinate, relative to the left edge of the
 *  client area, or `NULL`.
 *  @param[in] ypos The desired y-coordinate, relative to the top edge of the
 *  client area, or `NULL`.
 *
 *  @sa glfwGetCursorPos
 *
 *  @ingroup input
 */
GLFWAPI void glfwSetCursorPos(GLFWwindow* window, double xpos, double ypos);

