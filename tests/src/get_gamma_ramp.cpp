/*
 * get_gamma_ramp.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_gamma_ramp_test : public base_fixture {
  protected:

  const GLFWgammaramp* m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = (GLFWgammaramp*)1;
    s_stub.register_function_result("glfwGetGammaRamp", m_result);
  }

  const GLFWgammaramp* call(GLFWmonitor* monitor) {
    return glfwGetGammaRamp(monitor);
  }
};


TEST_F(get_gamma_ramp_test, is_reachable) {
  auto monitor = (GLFWmonitor*)5;
  call(monitor);
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetGammaRamp");
}


TEST_F(get_gamma_ramp_test, has_correct_params) {
  auto monitor = (GLFWmonitor*)4;
  call(monitor);
  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.param("monitor"), t_arg(monitor));
}

TEST_F(get_gamma_ramp_test, returns_correctly) {
  auto monitor = (GLFWmonitor*)4;
  ASSERT_EQ(m_result, call(monitor));
}

