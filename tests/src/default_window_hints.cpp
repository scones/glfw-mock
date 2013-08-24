/*
 * default_window_hints.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include <GLFW/glfw3.h>

#include "base_fixture.h"

class default_window_hints_test : public base_fixture {
  protected:

  void call(void) {
    glfwDefaultWindowHints();
  }
};


TEST_F(default_window_hints_test, is_reachable) {
  call();
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwDefaultWindowHints");
}

