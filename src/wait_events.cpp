/*
 * wait_events.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Waits until events are pending and processes them.
 *
 *  This function puts the calling thread to sleep until at least one event has
 *  been received.  Once one or more events have been received, it behaves as if
 *  @ref glfwPollEvents was called, i.e. the events are processed and the
 *  function then returns immediately.  Processing events will cause the window
 *  and input callbacks associated with those events to be called.
 *
 *  Since not all events are associated with callbacks, this function may return
 *  without a callback having been called even if you are monitoring all
 *  callbacks.
 *
 *  This function is not required for joystick input to work.
 *
 *  @note This function may only be called from the main thread.
 *
 *  @note This function may not be called from a callback.
 *
 *  @note On some platforms, certain callbacks may be called outside of a call
 *  to one of the event processing functions.
 *
 *  @sa glfwPollEvents
 *
 *  @ingroup window
 */
GLFWAPI void glfwWaitEvents(void);

