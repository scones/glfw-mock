/*
 * get_window_attrib.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_window_attrib_test : public base_fixture {
  protected:

  int m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = 10;
    stubber::register_function_result("glfwGetWindowAttrib", m_result);
  }

  int call(GLFWwindow* window, int attrib) {
    return glfwGetWindowAttrib(window, attrib);
  }
};


TEST_F(get_window_attrib_test, is_reachable) {
  auto window = (GLFWwindow*)5;
  int attrib = 7;
  call(window, attrib);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetWindowAttrib");
}


TEST_F(get_window_attrib_test, has_correct_params) {
  auto window = (GLFWwindow*)5;
  int attrib = 7;
  call(window, attrib);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("window"), t_arg(window));
  ASSERT_EQ(first_invocation.param("attrib"), t_arg(attrib));
}

TEST_F(get_window_attrib_test, returns_correctly) {
  auto window = (GLFWwindow*)5;
  int attrib = 7;
  call(window, attrib);
  ASSERT_EQ(m_result, call(window, attrib));
}

