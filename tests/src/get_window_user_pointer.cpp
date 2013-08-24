/*
 * get_window_user_pointer.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_window_user_pointer_test : public base_fixture {
  protected:

  void *m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = (void*)465;
    s_stub.register_function_result("glfwGetWindowUserPointer", m_result);
  }

  void* call(GLFWwindow* window) {
    return glfwGetWindowUserPointer(window);
  }
};


TEST_F(get_window_user_pointer_test, is_reachable) {
  auto window = (GLFWwindow*)5;
  call(window);
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetWindowUserPointer");
}


TEST_F(get_window_user_pointer_test, has_correct_params) {
  auto window = (GLFWwindow*)4;
  call(window);
  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.param("window"), t_arg(window));
}

TEST_F(get_window_user_pointer_test, returns_correctly) {
  auto window = (GLFWwindow*)3;
  ASSERT_EQ(m_result, call(window));
}

