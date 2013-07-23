/*
 * get_proc_address.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Returns the address of the specified function for the current
 *  context.
 *
 *  This function returns the address of the specified
 *  [client API or extension function](@ref context_glext), if it is supported
 *  by the current context.
 *
 *  @param[in] procname The ASCII encoded name of the function.
 *  @return The address of the function, or `NULL` if the function is
 *  unavailable.
 *
 *  @remarks This function may be called from secondary threads.
 *
 *  @note The addresses of these functions are not guaranteed to be the same for
 *  all contexts, especially if they use different client APIs or even different
 *  context creation hints.
 *
 *  @ingroup context
 */
GLFWAPI GLFWglproc glfwGetProcAddress(const char* procname);

