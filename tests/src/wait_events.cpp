/*
 * wait_events.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class wait_events_test : public base_fixture {
  protected:

  void call() {
    glfwWaitEvents();
  }
};


TEST_F(wait_events_test, is_reachable) {
  call();
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwWaitEvents");
}

