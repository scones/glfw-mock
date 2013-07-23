/*
 * swap_interval.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Sets the swap interval for the current context.
 *
 *  This function sets the swap interval for the current context, i.e. the
 *  number of screen updates to wait before swapping the buffers of a window and
 *  returning from @ref glfwSwapBuffers.  This is sometimes called 'vertical
 *  synchronization', 'vertical retrace synchronization' or 'vsync'.
 *
 *  Contexts that support either of the `WGL_EXT_swap_control_tear` and
 *  `GLX_EXT_swap_control_tear` extensions also accept negative swap intervals,
 *  which allow the driver to swap even if a frame arrives a little bit late.
 *  You can check for the presence of these extensions using @ref
 *  glfwExtensionSupported.  For more information about swap tearing, see the
 *  extension specifications.
 *
 *  @param[in] interval The minimum number of screen updates to wait for
 *  until the buffers are swapped by @ref glfwSwapBuffers.
 *
 *  @remarks This function may be called from secondary threads.
 *
 *  @note Some GPU drivers do not honor the requested swap interval, either
 *  because of user settings that override the request or due to bugs in the
 *  driver.
 *
 *  @sa glfwSwapBuffers
 *
 *  @ingroup context
 */
GLFWAPI void glfwSwapInterval(int interval);

