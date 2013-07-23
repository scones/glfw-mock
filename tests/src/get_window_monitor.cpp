/*
 * get_window_monitor.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_window_monitor_test : public base_fixture {
  protected:

  GLFWmonitor *m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = (GLFWmonitor*)98;
    stubber::register_function_result("glfwGetWindowMonitor", m_result);
  }

  GLFWmonitor* call(GLFWwindow* window) {
    return glfwGetWindowMonitor(window);
  }
};


TEST_F(get_window_monitor_test, is_reachable) {
  auto window = (GLFWwindow*)5;
  call(window);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetWindowMonitor");
}


TEST_F(get_window_monitor_test, has_correct_params) {
  auto window = (GLFWwindow*)4;
  call(window);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("window"), t_arg(window));
}

TEST_F(get_window_monitor_test, returns_correctly) {
  auto window = (GLFWwindow*)3;
  ASSERT_EQ(m_result, call(window));
}

