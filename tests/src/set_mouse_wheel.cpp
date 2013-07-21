/*
 * set_mouse_wheel.cpp
 *
 *  Created on: 21.07.2013
 *      Author: scn
 */


#include <GL/glfw.h>

#include "base_fixture.h"


class set_mouse_wheel_test : public base_fixture {
  protected:

  void call(int pos) {
    glfwSetMouseWheel(pos);
  }
};


TEST_F(set_mouse_wheel_test, is_reachable) {
  call(1);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwSetMouseWheel");
}


TEST_F(set_mouse_wheel_test, has_correct_params) {
  call(2);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("pos"), "2");
}
