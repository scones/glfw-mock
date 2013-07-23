/*
 * set_input_mode.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Sets an input option for the specified window.
 *  @param[in] window The window whose input mode to set.
 *  @param[in] mode One of `GLFW_CURSOR`, `GLFW_STICKY_KEYS` or
 *  `GLFW_STICKY_MOUSE_BUTTONS`.
 *  @param[in] value The new value of the specified input mode.
 *
 *  If `mode` is `GLFW_CURSOR`, the value must be one of the supported input
 *  modes:
 *  - `GLFW_CURSOR_NORMAL` makes the cursor visible and behaving normally.
 *  - `GLFW_CURSOR_HIDDEN` makes the cursor invisible when it is over the client
 *    area of the window.
 *  - `GLFW_CURSOR_DISABLED` disables the cursor and removes any limitations on
 *    cursor movement.
 *
 *  If `mode` is `GLFW_STICKY_KEYS`, the value must be either `GL_TRUE` to
 *  enable sticky keys, or `GL_FALSE` to disable it.  If sticky keys are
 *  enabled, a key press will ensure that @ref glfwGetKey returns @ref
 *  GLFW_PRESS the next time it is called even if the key had been released
 *  before the call.  This is useful when you are only interested in whether
 *  keys have been pressed but not when or in which order.
 *
 *  If `mode` is `GLFW_STICKY_MOUSE_BUTTONS`, the value must be either `GL_TRUE`
 *  to enable sticky mouse buttons, or `GL_FALSE` to disable it.  If sticky
 *  mouse buttons are enabled, a mouse button press will ensure that @ref
 *  glfwGetMouseButton returns @ref GLFW_PRESS the next time it is called even
 *  if the mouse button had been released before the call.  This is useful when
 *  you are only interested in whether mouse buttons have been pressed but not
 *  when or in which order.
 *
 *  @sa glfwGetInputMode
 *
 *  @ingroup input
 */
GLFWAPI void glfwSetInputMode(GLFWwindow* window, int mode, int value);

