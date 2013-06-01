/*
 * glfw.cpp
 *
 *  Created on: 21.04.2013
 *      Author: scn
 */

#include "stubber.h"

#include <GL/glfw.h>

#include <istream>

GLFWAPI int GLFWAPIENTRY glfwOpenWindow (int width, int height, int redbits, int greenbits, int bluebits, int alphabits, int depthbits, int stencilbits, int mode) {
  stubber::register_call(
    "glfwOpenWindow",
    {
      {"width", width},
      {"height", height},
      {"redbits", redbits},
      {"greenbits", greenbits},
      {"bluebits", bluebits},
      {"alphabits", alphabits},
      {"depthbits", depthbits},
      {"stencilbits", stencilbits},
      {"mode", mode}
    }
  );
  return 0;
}

