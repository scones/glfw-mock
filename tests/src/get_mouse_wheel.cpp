/*
 * get_mouse_wheel.cpp
 *
 *  Created on: 21.07.2013
 *      Author: scn
 */


#include <GL/glfw.h>

#include "base_fixture.h"


class get_mouse_wheel_test : public base_fixture {
  protected:

  void SetUp() {
    base_fixture::SetUp();
    stubber::register_function_int_result("glfwGetMouseWheel", 123);
  }

  int call() {
    return glfwGetMouseWheel();
  }
};


TEST_F(get_mouse_wheel_test, is_reachable) {
  call();
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetMouseWheel");
}


TEST_F(get_mouse_wheel_test, returns_correctly) {
  ASSERT_EQ(123, call());
}

