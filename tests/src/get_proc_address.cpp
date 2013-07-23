/*
 * get_proc_address.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_proc_address_test : public base_fixture {
  protected:

  GLFWglproc m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = (GLFWglproc)7;
    stubber::register_function_result("glfwGetProcAddress", m_result);
  }

  GLFWglproc call(const char* procname) {
    return glfwGetProcAddress(procname);
  }
};


TEST_F(get_proc_address_test, is_reachable) {
  call("foo");
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetProcAddress");
}


TEST_F(get_proc_address_test, has_correct_params) {
  call("foo");
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("procname"), t_arg("foo"));
}

TEST_F(get_proc_address_test, returns_correctly) {
  ASSERT_EQ(m_result, call("foo"));
}

