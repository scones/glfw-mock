/*
 * get_key.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Returns the last reported state of a keyboard key for the specified
 *  window.
 *
 *  This function returns the last state reported for the specified key to the
 *  specified window.  The returned state is one of `GLFW_PRESS` or
 *  `GLFW_RELEASE`.  The higher-level state `GLFW_REPEAT` is only reported to
 *  the key callback.
 *
 *  If the `GLFW_STICKY_KEYS` input mode is enabled, this function returns
 *  `GLFW_PRESS` the first time you call this function after a key has been
 *  pressed, even if the key has already been released.
 *
 *  The key functions deal with physical keys, with [key tokens](@ref keys)
 *  named after their use on the standard US keyboard layout.  If you want to
 *  input text, use the Unicode character callback instead.
 *
 *  @param[in] window The desired window.
 *  @param[in] key The desired [keyboard key](@ref keys).
 *  @return One of `GLFW_PRESS` or `GLFW_RELEASE`.
 *
 *  @note `GLFW_KEY_UNKNOWN` is not a valid key for this function.
 *
 *  @ingroup input
 */
GLFWAPI int glfwGetKey(GLFWwindow* window, int key);

