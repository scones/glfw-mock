/*
 * open_window_hint.cpp
 *
 *  Created on: 21.07.2013
 *      Author: scn
 */


#include <GL/glfw.h>


#include "base_fixture.h"


class open_window_hint_test : public base_fixture {
  protected:

  void call(int target, int hint) {
    glfwOpenWindowHint(target, hint);
  }
};


TEST_F(open_window_hint_test, is_reachable) {
  call(1, 2);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwOpenWindowHint");
}


TEST_F(open_window_hint_test, has_correct_params) {
  call(3, 4);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("target"), "3");
  ASSERT_EQ(first_invocation.param("hint"), "4");
}

