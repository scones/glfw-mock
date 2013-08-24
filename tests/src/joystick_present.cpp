/*
 * joystick_present.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class joystick_present_test : public base_fixture {
  protected:

  int m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = 98;
    s_stub.register_function_result("glfwJoystickPresent", m_result);
  }

  int call(int joy) {
    return glfwJoystickPresent(joy);
  }
};


TEST_F(joystick_present_test, is_reachable) {
  int joy = 8;
  call(joy);
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwJoystickPresent");
}


TEST_F(joystick_present_test, has_correct_params) {
  int joy = 8;
  call(joy);
  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.param("joy"), t_arg(joy));
}

TEST_F(joystick_present_test, returns_correctly) {
  int joy = 8;
  ASSERT_EQ(m_result, call(joy));
}

