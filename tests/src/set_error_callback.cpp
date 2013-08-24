/*
 * set_error_callback.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class set_error_callback_test : public base_fixture {
  protected:

  GLFWerrorfun m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = (GLFWerrorfun)8654;
    s_stub.register_function_result("glfwSetErrorCallback", m_result);
  }

  GLFWerrorfun call(GLFWerrorfun cbfun) {
    return glfwSetErrorCallback(cbfun);
  }
};


TEST_F(set_error_callback_test, is_reachable) {
  auto cbfun = (GLFWerrorfun)5;
  call(cbfun);
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwSetErrorCallback");
}


TEST_F(set_error_callback_test, has_correct_params) {
  auto cbfun = (GLFWerrorfun)5;
  call(cbfun);
  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.param("cbfun"), t_arg(cbfun));
}

TEST_F(set_error_callback_test, returns_correctly) {
  auto cbfun = (GLFWerrorfun)5;
  ASSERT_EQ(m_result, call(cbfun));
}

