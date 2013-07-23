/*
 * poll_events.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Processes all pending events.
 *
 *  This function processes only those events that have already been received
 *  and then returns immediately.  Processing events will cause the window and
 *  input callbacks associated with those events to be called.
 *
 *  This function is not required for joystick input to work.
 *
 *  @par New in GLFW 3
 *  This function is no longer called by @ref glfwSwapBuffers.  You need to call
 *  it or @ref glfwWaitEvents yourself.
 *
 *  @note This function may only be called from the main thread.
 *
 *  @note This function may not be called from a callback.
 *
 *  @note On some platforms, certain callbacks may be called outside of a call
 *  to one of the event processing functions.
 *
 *  @sa glfwWaitEvents
 *
 *  @ingroup window
 */
GLFWAPI void glfwPollEvents(void);

