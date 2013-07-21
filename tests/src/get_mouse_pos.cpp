/*
 * get_mouse_pos.cpp
 *
 *  Created on: 21.07.2013
 *      Author: scn
 */


#include <GL/glfw.h>

#include "base_fixture.h"


class get_mouse_pos_test : public base_fixture {
  protected:

  void call(int *xpos, int *ypos) {
    glfwGetMousePos(xpos, ypos);
  }
};


TEST_F(get_mouse_pos_test, is_reachable) {
  int x = 3, y = 4;
  call(&x, &y);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetMousePos");
}


TEST_F(get_mouse_pos_test, has_correct_params) {
  int x = 1, y = 2;
  call(&x, &y);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("xpos"), t_arg(&x));
  ASSERT_EQ(first_invocation.param("ypos"), t_arg(&y));
}


