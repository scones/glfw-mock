/*
 * get_primary_monitor.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_primary_monitor_test : public base_fixture {
  protected:

  GLFWmonitor* m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = (GLFWmonitor*) 6;
    stubber::register_function_result("glfwGetPrimaryMonitor", m_result);
  }

  GLFWmonitor* call(void) {
    return glfwGetPrimaryMonitor();
  }
};


TEST_F(get_primary_monitor_test, is_reachable) {
  call();
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetPrimaryMonitor");
}


TEST_F(get_primary_monitor_test, returns_correctly) {
  ASSERT_EQ(m_result, call());
}

