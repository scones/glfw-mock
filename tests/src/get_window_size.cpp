/*
 * get_window_size.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_window_size_test : public base_fixture {
  protected:


  void call(GLFWwindow* window, int* width, int* height) {
    glfwGetWindowSize(window, width, height);
  }
};


TEST_F(get_window_size_test, is_reachable) {
  auto window = (GLFWwindow*)5;
  int width = 1;
  int height = 5;
  call(window, &width, &height);
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetWindowSize");
}


TEST_F(get_window_size_test, has_correct_params) {
  auto window = (GLFWwindow*)5;
  int width = 1;
  int height = 5;
  call(window, &width, &height);
  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.param("window"), t_arg(window));
  ASSERT_EQ(first_invocation.param("width"), t_arg(&width));
  ASSERT_EQ(first_invocation.param("height"), t_arg(&height));
}

