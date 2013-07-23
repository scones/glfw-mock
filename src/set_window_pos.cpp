/*
 * set_window_pos.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Sets the position of the client area of the specified window.
 *
 *  This function sets the position, in screen coordinates, of the upper-left
 *  corner of the client area of the window.
 *
 *  If the specified window is a full screen window, this function does nothing.
 *
 *  If you wish to set an initial window position you should create a hidden
 *  window (using @ref glfwWindowHint and `GLFW_VISIBLE`), set its position and
 *  then show it.
 *
 *  @param[in] window The window to query.
 *  @param[in] xpos The x-coordinate of the upper-left corner of the client area.
 *  @param[in] ypos The y-coordinate of the upper-left corner of the client area.
 *
 *  @note It is very rarely a good idea to move an already visible window, as it
 *  will confuse and annoy the user.
 *
 *  @note This function may only be called from the main thread.
 *
 *  @note The window manager may put limits on what positions are allowed.
 *
 *  @bug **X11:** Some window managers ignore the set position of hidden (i.e.
 *  unmapped) windows, instead placing them where it thinks is appropriate once
 *  they are shown.
 *
 *  @sa glfwGetWindowPos
 *
 *  @ingroup window
 */
GLFWAPI void glfwSetWindowPos(GLFWwindow* window, int xpos, int ypos);

