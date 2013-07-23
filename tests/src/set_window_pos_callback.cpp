/*
 * set_window_pos_callback.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class set_window_pos_callback_test : public base_fixture {
  protected:

  GLFWwindowposfun m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = (GLFWwindowposfun)181;
    stubber::register_function_result("glfwSetWindowPosCallback", m_result);
  }

  GLFWwindowposfun call(GLFWwindow* window, GLFWwindowposfun cbfun) {
    return glfwSetWindowPosCallback(window, cbfun);
  }
};


TEST_F(set_window_pos_callback_test, is_reachable) {
  auto window = (GLFWwindow*)5;
  auto cbfun = (GLFWwindowposfun)861;
  call(window, cbfun);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwSetWindowPosCallback");
}


TEST_F(set_window_pos_callback_test, has_correct_params) {
  auto window = (GLFWwindow*)5;
  auto cbfun = (GLFWwindowposfun)861;
  call(window, cbfun);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("window"), t_arg(window));
  ASSERT_EQ(first_invocation.param("cbfun"), t_arg(cbfun));
}

TEST_F(set_window_pos_callback_test, returns_correctly) {
  auto window = (GLFWwindow*)5;
  auto cbfun = (GLFWwindowposfun)861;
  ASSERT_EQ(m_result, call(window, cbfun));
}

