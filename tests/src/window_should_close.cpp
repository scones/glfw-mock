/*
 * window_should_close.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class window_should_close_test : public base_fixture {
  protected:

  int m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = 9812;
    stubber::register_function_result("glfwWindowShouldClose", m_result);
  }

  int call(GLFWwindow* window) {
    return glfwWindowShouldClose(window);
  }
};


TEST_F(window_should_close_test, is_reachable) {
  auto window = (GLFWwindow*)5;
  call(window);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwWindowShouldClose");
}


TEST_F(window_should_close_test, has_correct_params) {
  auto window = (GLFWwindow*)4;
  call(window);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("window"), t_arg(window));
}

TEST_F(window_should_close_test, returns_correctly) {
  auto window = (GLFWwindow*)3;
  ASSERT_EQ(m_result, call(window));
}

