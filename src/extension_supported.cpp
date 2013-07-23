/*
 * extension_supported.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Returns whether the specified extension is available.
 *
 *  This function returns whether the specified
 *  [OpenGL or context creation API extension](@ref context_glext) is supported
 *  by the current context.  For example, on Windows both the OpenGL and WGL
 *  extension strings are checked.
 *
 *  @param[in] extension The ASCII encoded name of the extension.
 *  @return `GL_TRUE` if the extension is available, or `GL_FALSE` otherwise.
 *
 *  @remarks This function may be called from secondary threads.
 *
 *  @note As this functions searches one or more extension strings on each call,
 *  it is recommended that you cache its results if it's going to be used
 *  frequently.  The extension strings will not change during the lifetime of
 *  a context, so there is no danger in doing this.
 *
 *  @ingroup context
 */
GLFWAPI int glfwExtensionSupported(const char* extension);

