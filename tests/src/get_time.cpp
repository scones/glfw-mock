/*
 * get_time.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_time_test : public base_fixture {
  protected:

  double m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = 1.3;
    stubber::register_function_result("glfwGetTime", m_result);
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
  ASSERT_EQ(m_result, call());
}

