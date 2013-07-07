/*
 * glfw.cpp
 *
 *  Created on: 21.04.2013
 *      Author: scn
 */

#include "stubber.h"

#include <GL/glfw.h>

#include <iostream>


GLFWAPI int GLFWAPIENTRY glfwOpenWindow (int width, int height, int redbits, int greenbits, int bluebits, int alphabits, int depthbits, int stencilbits, int mode) {
std::cout << "glfwOpenWindow()" << std::endl;
  stubber::register_call(
    "glfwOpenWindow",
    {
      {"width", t_arg(width) },
      {"height", t_arg(height)},
      {"redbits", t_arg(redbits)},
      {"greenbits", t_arg(greenbits)},
      {"bluebits", t_arg(bluebits)},
      {"alphabits", t_arg(alphabits)},
      {"depthbits", t_arg(depthbits)},
      {"stencilbits", t_arg(stencilbits)},
      {"mode", t_arg(mode)}
    }
  );
  return 0;
}


