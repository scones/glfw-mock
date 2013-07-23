/*
 * set_error_callback.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Sets the error callback.
 *
 *  This function sets the error callback, which is called with an error code
 *  and a human-readable description each time a GLFW error occurs.
 *
 *  @param[in] cbfun The new callback, or `NULL` to remove the currently set
 *  callback.
 *  @return The previously set callback, or `NULL` if no callback was set or an
 *  error occurred.
 *
 *  @remarks This function may be called before @ref glfwInit.
 *
 *  @note The error callback is called by the thread where the error was
 *  generated.  If you are using GLFW from multiple threads, your error callback
 *  needs to be written accordingly.
 *
 *  @note Because the description string provided to the callback may have been
 *  generated specifically for that error, it is not guaranteed to be valid
 *  after the callback has returned.  If you wish to use it after that, you need
 *  to make your own copy of it before returning.
 *
 *  @ingroup error
 */
GLFWAPI GLFWerrorfun glfwSetErrorCallback(GLFWerrorfun cbfun);

