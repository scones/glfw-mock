/*
 * get_input_mode.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_input_mode_test : public base_fixture {
  protected:

  int m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = 1;
    stubber::register_function_result("glfwGetInputMode", m_result);
  }

  int call(GLFWwindow* window, int mode) {
    return glfwGetInputMode(window, mode);
  }
};


TEST_F(get_input_mode_test, is_reachable) {
  auto window = (GLFWwindow*)5;
  call(window, 5);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetInputMode");
}


TEST_F(get_input_mode_test, has_correct_params) {
  auto window = (GLFWwindow*)4;
  call(window, 4);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("window"), t_arg(window));
  ASSERT_EQ(first_invocation.param("mode"), t_arg(4));
}

TEST_F(get_input_mode_test, returns_correctly) {
  auto window = (GLFWwindow*)3;
  ASSERT_EQ(m_result, call(window, 4));
}

