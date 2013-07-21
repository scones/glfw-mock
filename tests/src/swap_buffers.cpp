/*
 * swap_buffers.cpp
 *
 *  Created on: 21.07.2013
 *      Author: scn
 */

#include <GL/glfw.h>

#include "base_fixture.h"


class swap_buffers_test : public base_fixture {
  protected:

  void call() {
    glfwSwapBuffers();
  }
};


TEST_F(swap_buffers_test, is_reachable) {
  call();
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwSwapBuffers");
}

