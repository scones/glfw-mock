/*
 * set_window_iconify_callback.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class set_window_iconify_callback_test : public base_fixture {
  protected:

  GLFWwindowiconifyfun m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = (GLFWwindowiconifyfun)74;
    stubber::register_function_result("glfwSetWindowIconifyCallback", m_result);
  }
GLFWwindowiconifyfun call(GLFWwindow* window, GLFWwindowiconifyfun cbfun) {
    return glfwSetWindowIconifyCallback(window, cbfun);
  }
};


TEST_F(set_window_iconify_callback_test, is_reachable) {
  auto window = (GLFWwindow*)5;
  auto cbfun = (GLFWwindowiconifyfun)5181;
  call(window, cbfun);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwSetWindowIconifyCallback");
}


TEST_F(set_window_iconify_callback_test, has_correct_params) {
  auto window = (GLFWwindow*)5;
  auto cbfun = (GLFWwindowiconifyfun)5181;
  call(window, cbfun);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("window"), t_arg(window));
  ASSERT_EQ(first_invocation.param("cbfun"), t_arg(cbfun));
}

TEST_F(set_window_iconify_callback_test, returns_correctly) {
  auto window = (GLFWwindow*)5;
  auto cbfun = (GLFWwindowiconifyfun)5181;
  ASSERT_EQ(m_result, call(window, cbfun));
}

