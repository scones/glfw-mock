/*
 * window_hint.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Sets the specified window hint to the desired value.
 *
 *  This function sets hints for the next call to @ref glfwCreateWindow.  The
 *  hints, once set, retain their values until changed by a call to @ref
 *  glfwWindowHint or @ref glfwDefaultWindowHints, or until the library is
 *  terminated with @ref glfwTerminate.
 *
 *  @param[in] target The [window hint](@ref window_hints) to set.
 *  @param[in] hint The new value of the window hint.
 *
 *  @par New in GLFW 3
 *  Hints are no longer reset to their default values on window creation.  To
 *  set default hint values, use @ref glfwDefaultWindowHints.
 *
 *  @note This function may only be called from the main thread.
 *
 *  @sa glfwDefaultWindowHints
 *
 *  @ingroup window
 */
GLFWAPI void glfwWindowHint(int target, int hint);

