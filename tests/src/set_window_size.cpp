/*
 * set_window_size.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class set_window_size_test : public base_fixture {
  protected:

  void call(GLFWwindow* window, int width, int height) {
    return glfwSetWindowSize(window, width, height);
  }
};


TEST_F(set_window_size_test, is_reachable) {
  auto window = (GLFWwindow*)5;
  int width = 134;
  int height = 8754;
  call(window, width, height);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwSetWindowSize");
}


TEST_F(set_window_size_test, has_correct_params) {
  auto window = (GLFWwindow*)5;
  int width = 134;
  int height = 8754;
  call(window, width, height);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("window"), t_arg(window));
  ASSERT_EQ(first_invocation.param("width"), t_arg(width));
  ASSERT_EQ(first_invocation.param("height"), t_arg(height));
}

