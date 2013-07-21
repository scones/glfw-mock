/*
 * set_key_callback.cpp
 *
 *  Created on: 21.07.2013
 *      Author: scn
 */


#include <GL/glfw.h>

#include "base_fixture.h"


void GLFWCALL set_key_callback_test_callback( int key, int action ) {}


class set_key_callback_test : public base_fixture {
  protected:

  void call(GLFWkeyfun cbfun) {
    glfwSetKeyCallback(cbfun);
  }
};


TEST_F(set_key_callback_test, is_reachable) {
  call(set_key_callback_test_callback);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwSetKeyCallback");
}


TEST_F(set_key_callback_test, has_correct_params) {
  call(set_key_callback_test_callback);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("cbfun"), t_arg(set_key_callback_test_callback));
}

