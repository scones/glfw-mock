/*
 * get_key.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_key_test : public base_fixture {
  protected:

  int m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = 3;
    stubber::register_function_result("glfwGetKey", m_result);
  }

  int call(GLFWwindow* window, int key) {
    return glfwGetKey(window, key);
  }
};


TEST_F(get_key_test, is_reachable) {
  auto window = (GLFWwindow*)5;
  int key = 1;
  call(window, key);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetKey");
}


TEST_F(get_key_test, has_correct_params) {
  auto window = (GLFWwindow*)5;
  int key = 1;
  call(window, key);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("window"), t_arg(window));
  ASSERT_EQ(first_invocation.param("key"), t_arg(key));
}

TEST_F(get_key_test, returns_correctly) {
  auto window = (GLFWwindow*)5;
  int key = 1;
  ASSERT_EQ(m_result, call(window, key));
}

