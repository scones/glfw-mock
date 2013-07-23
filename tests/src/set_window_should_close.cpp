/*
 * set_window_should_close.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class set_window_should_close_test : public base_fixture {
  protected:

  void call(GLFWwindow* window, int value) {
    return glfwSetWindowShouldClose(window, value);
  }
};


TEST_F(set_window_should_close_test, is_reachable) {
  auto window = (GLFWwindow*)5;
  int value = 95;
  call(window, value);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwSetWindowShouldClose");
}


TEST_F(set_window_should_close_test, has_correct_params) {
  auto window = (GLFWwindow*)5;
  int value = 95;
  call(window, value);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("window"), t_arg(window));
  ASSERT_EQ(first_invocation.param("value"), t_arg(value));
}

