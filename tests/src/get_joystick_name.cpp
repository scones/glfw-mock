/*
 * get_joystick_name.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_joystick_name_test : public base_fixture {
  protected:

  const char *m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = "foo";
    s_stub.register_function_result("glfwGetJoystickName", m_result);
  }

  const char* call(int joy) {
    return glfwGetJoystickName(joy);
  }
};


TEST_F(get_joystick_name_test, is_reachable) {
  int joy = 1;
  call(joy);
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetJoystickName");
}


TEST_F(get_joystick_name_test, has_correct_params) {
  int joy = 1;
  call(joy);
  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.param("joy"), t_arg(joy));
}

TEST_F(get_joystick_name_test, returns_correctly) {
  int joy = 1;
  ASSERT_EQ(m_result, call(joy));
}

