/*
 * get_time.cpp
 *
 *  Created on: 21.07.2013
 *      Author: scn
 */


#include <GL/glfw.h>

#include "base_fixture.h"


class get_time_test : public base_fixture {
  protected:

  void SetUp() {
    base_fixture::SetUp();
    stubber::register_function_double_result("glfwGetTime", 123.456);
  }

  double call() {
    return glfwGetTime();
  }
};


TEST_F(get_time_test, is_reachable) {
  call();
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetTime");
}


TEST_F(get_time_test, returns_correctly) {
  ASSERT_EQ(123.456, call());
}

