/*
 * extension_supported.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class extension_supported_test : public base_fixture {
  protected:

  void SetUp() {
    base_fixture::SetUp();
    s_stub.register_function_result("glfwExtensionSupported", 1);
  }

  int call(const char* extension) {
    return glfwExtensionSupported(extension);
  }
};


TEST_F(extension_supported_test, is_reachable) {
  call("foo");
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwExtensionSupported");
}


TEST_F(extension_supported_test, has_correct_params) {
  call("foo");
  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.param("extension"), t_arg("foo"));
}

TEST_F(extension_supported_test, returns_correctly) {
  ASSERT_EQ(1, call("foo"));
}

