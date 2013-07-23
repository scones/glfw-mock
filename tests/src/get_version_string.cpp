/*
 * get_version_string.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_version_string_test : public base_fixture {
  protected:

  const char *m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = "foo";
    stubber::register_function_result("glfwGetVersionString", m_result);
  }

  const char* call() {
    return glfwGetVersionString();
  }
};


TEST_F(get_version_string_test, is_reachable) {
  call();
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetVersionString");
}


TEST_F(get_version_string_test, returns_correctly) {
  ASSERT_EQ(m_result, call());
}

