/*
 * get_clipboard_string.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Retrieves the contents of the clipboard as a string.
 *
 *  This function returns the contents of the system clipboard, if it contains
 *  or is convertible to a UTF-8 encoded string.
 *
 *  @param[in] window The window that will request the clipboard contents.
 *  @return The contents of the clipboard as a UTF-8 encoded string, or `NULL`
 *  if an error occurred.
 *
 *  @note This function may only be called from the main thread.
 *
 *  @note The returned string is allocated and freed by GLFW.  You should not
 *  free it yourself.
 *
 *  @note The returned string is valid only until the next call to @ref
 *  glfwGetClipboardString or @ref glfwSetClipboardString.
 *
 *  @sa glfwSetClipboardString
 *
 *  @ingroup clipboard
 */
GLFWAPI const char* glfwGetClipboardString(GLFWwindow* window);

