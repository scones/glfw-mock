/*
 * default_window_hints.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Resets all window hints to their default values.
 *
 *  This function resets all window hints to their
 *  [default values](@ref window_hints_values).
 *
 *  @note This function may only be called from the main thread.
 *
 *  @sa glfwWindowHint
 *
 *  @ingroup window
 */
GLFWAPI void glfwDefaultWindowHints(void);

