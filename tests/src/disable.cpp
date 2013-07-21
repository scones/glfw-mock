/*
 * disable.cpp
 *
 *  Created on: 21.07.2013
 *      Author: scn
 */


#include <GL/glfw.h>

#include "base_fixture.h"


class disable_test : public base_fixture {
  protected:

  void call(int token) {
    glfwDisable(token);
  }
};


TEST_F(disable_test, is_reachable) {
  call(1);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwDisable");
}


TEST_F(disable_test, has_correct_params) {
  call(2);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("token"), "2");
}

