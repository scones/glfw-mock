/*
 * get_mouse_button.cpp
 *
 *  Created on: 21.07.2013
 *      Author: scn
 */


#include <GL/glfw.h>

#include "base_fixture.h"


class get_mouse_button_test : public base_fixture {
  protected:

  void SetUp() {
    base_fixture::SetUp();
    stubber::register_function_int_result("glfwGetMouseButton", 123);
  }

  int call(int button) {
    return glfwGetMouseButton(button);
  }
};


TEST_F(get_mouse_button_test, is_reachable) {
  call(1);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetMouseButton");
}


TEST_F(get_mouse_button_test, has_correct_params) {
  call(2);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("button"), "2");
}


TEST_F(get_mouse_button_test, returns_correctly) {
  ASSERT_EQ(123, call(3));
}

