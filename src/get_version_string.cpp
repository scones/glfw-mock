/*
 * get_version_string.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Returns a string describing the compile-time configuration.
 *
 *  This function returns a static string generated at compile-time according to
 *  which configuration macros were defined.  This is intended for use when
 *  submitting bug reports, to allow developers to see which code paths are
 *  enabled in a binary.
 *
 *  The format of the string is as follows:
 *  - The version of GLFW
 *  - The name of the window system API
 *  - The name of the context creation API
 *  - Any additional options or APIs
 *
 *  For example, when compiling GLFW 3.0 with MinGW using the Win32 and WGL
 *  back ends, the version string may look something like this:
 *
 *      3.0.0 Win32 WGL MinGW
 *
 *  @return The GLFW version string.
 *
 *  @remarks This function may be called before @ref glfwInit.
 *
 *  @remarks This function may be called from any thread.
 *
 *  @sa glfwGetVersion
 *
 *  @ingroup init
 */
GLFWAPI const char* glfwGetVersionString(void);

