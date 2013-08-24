/*
 * get_monitors.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_monitors_test : public base_fixture {
  protected:

  GLFWmonitor** m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = (GLFWmonitor**)2;
    s_stub.register_function_result("glfwGetMonitors", m_result);
  }

  GLFWmonitor** call(int* count) {
    return glfwGetMonitors(count);
  }
};


TEST_F(get_monitors_test, is_reachable) {
  int count = 1;
  call(&count);
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetMonitors");
}


TEST_F(get_monitors_test, has_correct_params) {
  int count = 1;
  call(&count);
  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.param("count"), t_arg(&count));
}

TEST_F(get_monitors_test, returns_correctly) {
  int count = 1;
  ASSERT_EQ(m_result, call(&count));
}

