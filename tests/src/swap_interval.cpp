/*
 * swap_interval.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class swap_interval_test : public base_fixture {
  protected:

  void call(int interval) {
    return glfwSwapInterval(interval);
  }
};


TEST_F(swap_interval_test, is_reachable) {
  int interval = 5;
  call(interval);
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwSwapInterval");
}


TEST_F(swap_interval_test, has_correct_params) {
  int interval = 5;
  call(interval);
  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.param("interval"), t_arg(interval));
}

