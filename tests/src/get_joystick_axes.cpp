/*
 * get_joystick_axes.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_joystick_axes_test : public base_fixture {
  protected:

  const float* m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = (const float*)1;
    s_stub.register_function_result("glfwGetJoystickAxes", m_result);
  }

  const float* call(int joy, int* count) {
    return glfwGetJoystickAxes(joy, count);
  }
};


TEST_F(get_joystick_axes_test, is_reachable) {
  int count = 1;
  call(2, &count);
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetJoystickAxes");
}


TEST_F(get_joystick_axes_test, has_correct_params) {
  int count = 1;
  call(2, &count);
  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.param("joy"), t_arg(2));
  ASSERT_EQ(first_invocation.param("count"), t_arg(&count));
}

TEST_F(get_joystick_axes_test, returns_correctly) {
  int count = 1;
  ASSERT_EQ(m_result, call(2, &count));
}

