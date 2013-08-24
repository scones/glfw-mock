/*
 * get_clipboard_string.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_clipboard_string_test : public base_fixture {
  protected:

  const char *m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = "foo";
    s_stub.register_function_result("glfwGetClipboardString", m_result);
  }

  const char* call(GLFWwindow* window) {
    return glfwGetClipboardString(window);
  }
};


TEST_F(get_clipboard_string_test, is_reachable) {
  auto window = (GLFWwindow*)5;
  call(window);
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetClipboardString");
}


TEST_F(get_clipboard_string_test, has_correct_params) {
  auto window = (GLFWwindow*)4;
  call(window);
  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.param("window"), t_arg(window));
}

TEST_F(get_clipboard_string_test, returns_correctly) {
  auto window = (GLFWwindow*)3;
  ASSERT_EQ(m_result, call(window));
}

