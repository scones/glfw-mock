/*
 * set_input_mode.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class set_input_mode_test : public base_fixture {
  protected:

  void call(GLFWwindow* window, int mode, int value) {
    glfwSetInputMode(window, mode, value);
  }
};


TEST_F(set_input_mode_test, is_reachable) {
  auto window = (GLFWwindow*)5;
  int mode = 432;
  int value = 874;
  call(window, mode, value);
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwSetInputMode");
}


TEST_F(set_input_mode_test, has_correct_params) {
  auto window = (GLFWwindow*)5;
  int mode = 432;
  int value = 874;
  call(window, mode, value);
  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.param("window"), t_arg(window));
  ASSERT_EQ(first_invocation.param("mode"), t_arg(mode));
  ASSERT_EQ(first_invocation.param("value"), t_arg(value));
}

