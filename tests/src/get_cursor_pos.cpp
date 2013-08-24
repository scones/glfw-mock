/*
 * get_cursor_pos.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_cursor_pos_test : public base_fixture {
  protected:

  const char *m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = "foo";
    s_stub.register_function_result("glfwGetCursorPos", m_result);
  }

  void call(GLFWwindow* window, double* xpos, double* ypos) {
    return glfwGetCursorPos(window, xpos, ypos);
  }
};


TEST_F(get_cursor_pos_test, is_reachable) {
  auto window = (GLFWwindow*)5;
  double xpos = 1.0;
  double ypos = 2.0;
  call(window, &xpos, &ypos);
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetCursorPos");
}


TEST_F(get_cursor_pos_test, has_correct_params) {
  auto window = (GLFWwindow*)4;
  double xpos = 1.0;
  double ypos = 2.0;
  call(window, &xpos, &ypos);
  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.param("window"), t_arg(window));
  ASSERT_EQ(first_invocation.param("xpos"), t_arg(&xpos));
  ASSERT_EQ(first_invocation.param("ypos"), t_arg(&ypos));
}

