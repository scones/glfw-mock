/*
 * set_window_title.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class set_window_title_test : public base_fixture {
  protected:

  void call(GLFWwindow* window, const char* title) {
    return glfwSetWindowTitle(window, title);
  }
};


TEST_F(set_window_title_test, is_reachable) {
  auto window = (GLFWwindow*)5;
  call(window, "foo");
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwSetWindowTitle");
}


TEST_F(set_window_title_test, has_correct_params) {
  auto window = (GLFWwindow*)5;
  call(window, "foo");
  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.param("window"), t_arg(window));
}

