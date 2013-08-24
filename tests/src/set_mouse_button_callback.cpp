/*
 * set_mouse_button_callback.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class set_mouse_button_callback_test : public base_fixture {
  protected:

  GLFWmousebuttonfun m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = (GLFWmousebuttonfun)8168;
    s_stub.register_function_result("glfwSetMouseButtonCallback", m_result);
  }

  GLFWmousebuttonfun call(GLFWwindow* window, GLFWmousebuttonfun cbfun) {
    return glfwSetMouseButtonCallback(window, cbfun);
  }
};


TEST_F(set_mouse_button_callback_test, is_reachable) {
  auto window = (GLFWwindow*)5;
  auto cbfun = (GLFWmousebuttonfun) 8641;
  call(window, cbfun);
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwSetMouseButtonCallback");
}


TEST_F(set_mouse_button_callback_test, has_correct_params) {
  auto window = (GLFWwindow*)5;
  auto cbfun = (GLFWmousebuttonfun) 8641;
  call(window, cbfun);
  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.param("window"), t_arg(window));
  ASSERT_EQ(first_invocation.param("cbfun"), t_arg(cbfun));
}

TEST_F(set_mouse_button_callback_test, returns_correctly) {
  auto window = (GLFWwindow*)5;
  auto cbfun = (GLFWmousebuttonfun) 8641;
  ASSERT_EQ(m_result, call(window, cbfun));
}

