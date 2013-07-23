/*
 * set_gamma.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GLFW/glfw3.h>

#include <iostream>

/*! @brief Generates a gamma ramp and sets it for the specified monitor.
 *
 *  This function generates a 256-element gamma ramp from the specified exponent
 *  and then calls @ref glfwSetGammaRamp with it.
 *
 *  @param[in] monitor The monitor whose gamma ramp to set.
 *  @param[in] gamma The desired exponent.
 *
 *  @ingroup monitor
 */
GLFWAPI void glfwSetGamma(GLFWmonitor* monitor, float gamma);

