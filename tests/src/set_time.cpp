/*
 * set_time.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class set_time_test : public base_fixture {
  protected:

  void call(double time) {
    return glfwSetTime(time);
  }
};


TEST_F(set_time_test, is_reachable) {
  double time = 1.53;
  call(time);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwSetTime");
}


TEST_F(set_time_test, has_correct_params) {
  double time = 1.53;
  call(time);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("time"), t_arg(time));
}

