/*
 * window_hint.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class window_hint_test : public base_fixture {
  protected:

  void call(int target, int hint) {
    glfwWindowHint(target, hint);
  }
};


TEST_F(window_hint_test, is_reachable) {
  int target = 45;
  int hint = 985;
  call(target, hint);
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwWindowHint");
}


TEST_F(window_hint_test, has_correct_params) {
  int target = 45;
  int hint = 985;
  call(target, hint);
  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.param("target"), t_arg(target));
  ASSERT_EQ(first_invocation.param("hint"), t_arg(hint));
}

