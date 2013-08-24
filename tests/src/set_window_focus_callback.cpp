/*
 * set_window_focus_callback.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class set_window_focus_callback_test : public base_fixture {
  protected:

  GLFWwindowfocusfun m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = (GLFWwindowfocusfun)6841;
    s_stub.register_function_result("glfwSetWindowFocusCallback", m_result);
  }

  GLFWwindowfocusfun call(GLFWwindow* window, GLFWwindowfocusfun cbfun) {
    return glfwSetWindowFocusCallback(window, cbfun);
  }
};


TEST_F(set_window_focus_callback_test, is_reachable) {
  auto window = (GLFWwindow*)5;
  auto cbfun = (GLFWwindowfocusfun)689;
  call(window, cbfun);
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwSetWindowFocusCallback");
}


TEST_F(set_window_focus_callback_test, has_correct_params) {
  auto window = (GLFWwindow*)5;
  auto cbfun = (GLFWwindowfocusfun)689;
  call(window, cbfun);
  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.param("window"), t_arg(window));
  ASSERT_EQ(first_invocation.param("cbfun"), t_arg(cbfun));
}

TEST_F(set_window_focus_callback_test, returns_correctly) {
  auto window = (GLFWwindow*)5;
  auto cbfun = (GLFWwindowfocusfun)689;
  ASSERT_EQ(m_result, call(window, cbfun));
}

