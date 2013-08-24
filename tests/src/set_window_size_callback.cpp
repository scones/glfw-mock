/*
 * set_window_size_callback.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class set_window_size_callback_test : public base_fixture {
  protected:

  GLFWwindowsizefun m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = (GLFWwindowsizefun)8361;
    s_stub.register_function_result("glfwSetWindowSizeCallback", m_result);
  }

  GLFWwindowsizefun call(GLFWwindow* window, GLFWwindowsizefun cbfun) {
    return glfwSetWindowSizeCallback(window, cbfun);
  }
};


TEST_F(set_window_size_callback_test, is_reachable) {
  auto window = (GLFWwindow*)5;
  auto cbfun = (GLFWwindowsizefun)1381;
  call(window, cbfun);
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwSetWindowSizeCallback");
}


TEST_F(set_window_size_callback_test, has_correct_params) {
  auto window = (GLFWwindow*)5;
  auto cbfun = (GLFWwindowsizefun)1381;
  call(window, cbfun);
  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.param("window"), t_arg(window));
  ASSERT_EQ(first_invocation.param("cbfun"), t_arg(cbfun));
}

TEST_F(set_window_size_callback_test, returns_correctly) {
  auto window = (GLFWwindow*)5;
  auto cbfun = (GLFWwindowsizefun)1381;
  ASSERT_EQ(m_result, call(window, cbfun));
}

