/*
 * get_mouse_button.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_mouse_button_test : public base_fixture {
  protected:

  int m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = 5;
    stubber::register_function_result("glfwGetMouseButton", m_result);
  }

  int call(GLFWwindow* window, int button) {
    return glfwGetMouseButton(window, button);
  }
};


TEST_F(get_mouse_button_test, is_reachable) {
  auto window = (GLFWwindow*)5;
  int button = 1;
  call(window, button);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetMouseButton");
}


TEST_F(get_mouse_button_test, has_correct_params) {
  auto window = (GLFWwindow*)5;
  int button = 1;
  call(window, button);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("window"), t_arg(window));
  ASSERT_EQ(first_invocation.param("button"), t_arg(button));
}

TEST_F(get_mouse_button_test, returns_correctly) {
  auto window = (GLFWwindow*)5;
  int button = 1;
  ASSERT_EQ(m_result, call(window, button));
}

