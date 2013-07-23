/*
 * init.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class init_test : public base_fixture {
  protected:

  int m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = 5;
    stubber::register_function_result("glfwInit", m_result);
  }

  int call() {
    return glfwInit();
  }
};


TEST_F(init_test, is_reachable) {
  call();
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwInit");
}


TEST_F(init_test, returns_correctly) {
  ASSERT_EQ(m_result, call());
}

