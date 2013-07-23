/*
 * glfw.cpp
 *
 *  Created on: 21.04.2013
 *      Author: scn
 */

#include "../include/stubber.h"

#include <GL/glfw.h>

#include <iostream>


GLFWAPI int GLFWAPIENTRY glfwOpenWindow (int width, int height, int redbits, int greenbits, int bluebits, int alphabits, int depthbits, int stencilbits, int mode) {
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
  return stubber::get_int_result("glfwOpenWindow");
}


GLFWAPI void GLFWAPIENTRY glfwSetKeyCallback( GLFWkeyfun cbfun ) {
  stubber::register_call(
    "glfwSetKeyCallback",
    {
      {"cbfun", t_arg(cbfun)}
    }
  );
}


GLFWAPI void GLFWAPIENTRY glfwSwapBuffers( void ) {
  stubber::register_call("glfwSwapBuffers", {});
}


GLFWAPI int  GLFWAPIENTRY glfwGetWindowParam( int param ) {
  stubber::register_call(
    "glfwGetWindowParam",
    {
      {"param", t_arg(param)}
    }
  );
  return stubber::get_int_result("glfwGetWindowParam");
}


GLFWAPI void GLFWAPIENTRY glfwTerminate( void ) {
  stubber::register_call("glfwTerminate", {});
}


GLFWAPI int  GLFWAPIENTRY glfwInit( void ) {
  stubber::register_call("glfwInit", {});
  return stubber::get_int_result("glfwInit");
}


GLFWAPI void GLFWAPIENTRY glfwOpenWindowHint( int target, int hint ) {
  stubber::register_call(
    "glfwOpenWindowHint",
    {
      {"target", t_arg(target)},
      {"hint", t_arg(hint)}
    }
  );
}


GLFWAPI void GLFWAPIENTRY glfwSetWindowTitle( const char *title ) {
  stubber::register_call(
    "glfwSetWindowTitle",
    {
      {"title", t_arg(title)}
    }
  );
}


GLFWAPI void GLFWAPIENTRY glfwEnable( int token ) {
  stubber::register_call(
    "glfwEnable",
    {
      {"token", t_arg(token)}
    }
  );
}


GLFWAPI void GLFWAPIENTRY glfwDisable( int token ) {
  stubber::register_call(
    "glfwDisable",
    {
      {"token", t_arg(token)}
    }
  );
}


GLFWAPI void GLFWAPIENTRY glfwSetCharCallback( GLFWcharfun cbfun ) {
  stubber::register_call(
    "glfwSetCharCallback",
    {
      {"cbfun", t_arg(cbfun)}
    }
  );
}


GLFWAPI void GLFWAPIENTRY glfwSetMouseButtonCallback( GLFWmousebuttonfun cbfun ) {
  stubber::register_call(
    "glfwSetMouseButtonCallback",
    {
      {"cbfun", t_arg(cbfun)}
    }
  );
}


GLFWAPI void GLFWAPIENTRY glfwSetMousePosCallback( GLFWmouseposfun cbfun ) {
  stubber::register_call(
    "glfwSetMousePosCallback",
    {
      {"cbfun", t_arg(cbfun)}
    }
  );
}


GLFWAPI void GLFWAPIENTRY glfwSetMouseWheelCallback( GLFWmousewheelfun cbfun ) {
  stubber::register_call(
    "glfwSetMouseWheelCallback",
    {
      {"cbfun", t_arg(cbfun)}
    }
  );
}


GLFWAPI int  GLFWAPIENTRY glfwGetKey( int key ) {
  stubber::register_call(
    "glfwGetKey",
    {
      {"key", t_arg(key)}
    }
  );
  return stubber::get_int_result("glfwGetKey");
}


GLFWAPI int  GLFWAPIENTRY glfwGetMouseButton( int button ) {
  stubber::register_call(
    "glfwGetMouseButton",
    {
      {"button", t_arg(button)}
    }
  );
  return stubber::get_int_result("glfwGetMouseButton");
}


GLFWAPI void GLFWAPIENTRY glfwGetMousePos( int *xpos, int *ypos ) {
  stubber::register_call(
    "glfwGetMousePos",
    {
      {"xpos", t_arg(xpos)},
      {"ypos", t_arg(ypos)}
    }
  );
}


GLFWAPI void GLFWAPIENTRY glfwSetMousePos( int xpos, int ypos ) {
  stubber::register_call(
    "glfwSetMousePos",
    {
      {"xpos", t_arg(xpos)},
      {"ypos", t_arg(ypos)}
    }
  );
}


GLFWAPI int  GLFWAPIENTRY glfwGetMouseWheel( void ) {
  stubber::register_call("glfwGetMouseWheel", {});
  return stubber::get_int_result("glfwGetMouseWheel");
}


GLFWAPI void GLFWAPIENTRY glfwSetMouseWheel( int pos ) {
  stubber::register_call(
    "glfwSetMouseWheel",
    {
      {"pos", t_arg(pos)}
    }
  );
}


GLFWAPI int  GLFWAPIENTRY glfwGetVideoModes( GLFWvidmode *list, int maxcount ) {
  stubber::register_call(
    "glfwGetVideoModes",
    {
      {"list", t_arg(list)},
      {"maxcount", t_arg(maxcount)}
    }
  );
  return stubber::get_int_result("glfwGetVideoModes");
}


GLFWAPI void GLFWAPIENTRY glfwGetDesktopMode( GLFWvidmode *mode ) {
  stubber::register_call(
    "glfwGetDesktopMode",
    {
      {"mode", t_arg(mode)}
    }
  );
}


GLFWAPI void GLFWAPIENTRY glfwPollEvents( void ) {
  stubber::register_call("glfwPollEvents", {});
}


GLFWAPI void GLFWAPIENTRY glfwWaitEvents( void ) {
  stubber::register_call("glfwWaitEvents", {});
}


GLFWAPI double GLFWAPIENTRY glfwGetTime( void ) {
  stubber::register_call("glfwGetTime", {});
  return stubber::get_double_result("glfwGetTime");
}


GLFWAPI void   GLFWAPIENTRY glfwSetTime( double time ) {
  stubber::register_call(
    "glfwSetTime",
    {
      {"time", t_arg(time)}
    }
  );
}


GLFWAPI void   GLFWAPIENTRY glfwSleep( double time ) {
  stubber::register_call(
    "glfwSetTime",
    {
      {"time", t_arg(time)}
    }
  );
}


GLFWAPI void GLFWAPIENTRY glfwGetVersion( int *major, int *minor, int *rev ) {
  stubber::register_call(
    "glfwGetVersion",
    {
      {"major", t_arg(major)},
      {"minor", t_arg(minor)},
      {"rev", t_arg(rev)}
    }
  );
}



