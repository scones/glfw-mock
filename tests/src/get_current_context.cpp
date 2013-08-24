/*
 * get_current_context.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_current_context_test : public base_fixture {
  protected:

  GLFWwindow *m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = (GLFWwindow*)1;
    s_stub.register_function_result("glfwGetCurrentContext", m_result);
  }

  GLFWwindow* call() {
    return glfwGetCurrentContext();
  }
};


TEST_F(get_current_context_test, is_reachable) {
  call();
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetCurrentContext");
}


TEST_F(get_current_context_test, returns_correctly) {
  ASSERT_EQ(m_result, call());
}

