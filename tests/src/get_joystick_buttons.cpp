/*
 * get_joystick_buttons.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_joystick_buttons_test : public base_fixture {
  protected:

  const unsigned char* m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = (const unsigned char*)2;
    s_stub.register_function_result("glfwGetJoystickButtons", m_result);
  }

  const unsigned char* call(int joy, int* count) {
    return glfwGetJoystickButtons(joy, count);
  }
};


TEST_F(get_joystick_buttons_test, is_reachable) {
  int joy = 1;
  int count = 2;
  call(joy, &count);
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetJoystickButtons");
}


TEST_F(get_joystick_buttons_test, has_correct_params) {
  int joy = 1;
  int count = 2;
  call(joy, &count);
  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.param("joy"), t_arg(joy));
  ASSERT_EQ(first_invocation.param("count"), t_arg(&count));
}

TEST_F(get_joystick_buttons_test, returns_correctly) {
  int joy = 1;
  int count = 2;
  ASSERT_EQ(m_result, call(joy, &count));
}

