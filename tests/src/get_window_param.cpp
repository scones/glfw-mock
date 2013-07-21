/*
 * get_window_param.cpp
 *
 *  Created on: 21.07.2013
 *      Author: scn
 */


#include <GL/glfw.h>

#include "base_fixture.h"


class get_window_param_test : public base_fixture {
  protected:

  void SetUp() {
    base_fixture::SetUp();
    stubber::register_function_int_result("glfwGetWindowParam", 1);
  }

  int call(int param) {
    return glfwGetWindowParam(param);
  }
};


TEST_F(get_window_param_test, returns_some_int) {
  ASSERT_EQ(1, call(1));
}


TEST_F(get_window_param_test, is_reachable) {
  call(1);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetWindowParam");
}

