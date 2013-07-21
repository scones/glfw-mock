/*
 * get_video_modes.cpp
 *
 *  Created on: 21.07.2013
 *      Author: scn
 */


#include <GL/glfw.h>

#include "base_fixture.h"


class get_video_modes_test : public base_fixture {
  protected:

  void SetUp() {
    base_fixture::SetUp();
    stubber::register_function_int_result("glfwGetVideoModes", GL_TRUE);
  }

  int call(GLFWvidmode *list, int maxcount) {
    return glfwGetVideoModes(list, maxcount);
  }
};


TEST_F(get_video_modes_test, is_reachable) {
  GLFWvidmode foo;
  call(&foo, 1);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetVideoModes");
}


TEST_F(get_video_modes_test, has_correct_params) {
  GLFWvidmode foo;
  call(&foo, 2);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("list"), t_arg(&foo));
  ASSERT_EQ(first_invocation.param("maxcount"), "2");
}


TEST_F(get_video_modes_test, returns_correctly) {
  GLFWvidmode foo;
  ASSERT_EQ(GL_TRUE, call(&foo, 3));
}

