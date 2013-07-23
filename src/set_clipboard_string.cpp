/*
 * set_clipboard_string.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Sets the clipboard to the specified string.
 *
 *  This function sets the system clipboard to the specified, UTF-8 encoded
 *  string.  The string is copied before returning, so you don't have to retain
 *  it afterwards.
 *
 *  @param[in] window The window that will own the clipboard contents.
 *  @param[in] string A UTF-8 encoded string.
 *
 *  @note This function may only be called from the main thread.
 *
 *  @sa glfwGetClipboardString
 *
 *  @ingroup clipboard
 */
GLFWAPI void glfwSetClipboardString(GLFWwindow* window, const char* string);

