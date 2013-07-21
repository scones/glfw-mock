/*
 * get_desktop_mode.cpp
 *
 *  Created on: 21.07.2013
 *      Author: scn
 */


#include <GL/glfw.h>

#include "base_fixture.h"


class get_desktop_mode_test : public base_fixture {
  protected:

  void SetUp() {
    base_fixture::SetUp();
    stubber::register_function_int_result("glfwGetDesktopMode", GL_TRUE);
  }

  void call(GLFWvidmode *mode) {
    glfwGetDesktopMode(mode);
  }
};


TEST_F(get_desktop_mode_test, is_reachable) {
  GLFWvidmode foo;
  call(&foo);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetDesktopMode");
}


TEST_F(get_desktop_mode_test, has_correct_params) {
  GLFWvidmode foo;
  call(&foo);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("mode"), t_arg(&foo));
}

