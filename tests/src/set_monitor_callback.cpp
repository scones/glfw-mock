/*
 * set_monitor_callback.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class set_monitor_callback_test : public base_fixture {
  protected:

  GLFWmonitorfun m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = (GLFWmonitorfun) 764;
    stubber::register_function_result("glfwSetMonitorCallback", m_result);
  }

  GLFWmonitorfun call(GLFWmonitorfun cbfun) {
    return glfwSetMonitorCallback(cbfun);
  }
};


TEST_F(set_monitor_callback_test, is_reachable) {
  auto cbfun = (GLFWmonitorfun)648;
  call(cbfun);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwSetMonitorCallback");
}


TEST_F(set_monitor_callback_test, has_correct_params) {
  auto cbfun = (GLFWmonitorfun)648;
  call(cbfun);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("cbfun"), t_arg(cbfun));
}

TEST_F(set_monitor_callback_test, returns_correctly) {
  auto cbfun = (GLFWmonitorfun)648;
  ASSERT_EQ(m_result, call(cbfun));
}

