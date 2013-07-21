/*
 * set_window_title.cpp
 *
 *  Created on: 21.07.2013
 *      Author: scn
 */


#include <GL/glfw.h>

#include "base_fixture.h"


class set_window_title_test : public base_fixture {
  protected:

  void call(char const * title) {
    glfwSetWindowTitle(title);
  }
};


TEST_F(set_window_title_test, is_reachable) {
  call("foo");
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwSetWindowTitle");
}


TEST_F(set_window_title_test, has_correct_params) {
  call("bar");
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("title"), "bar");
}

