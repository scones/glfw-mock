/*
 * get_video_modes.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_video_modes_test : public base_fixture {
  protected:

  const GLFWvidmode* m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = (const GLFWvidmode*) 9;
    stubber::register_function_result("glfwGetVideoModes", m_result);
  }

  const GLFWvidmode* call(GLFWmonitor* monitor, int* count) {
    return glfwGetVideoModes(monitor, count);
  }
};


TEST_F(get_video_modes_test, is_reachable) {
  auto monitor = (GLFWmonitor*)5;
  int count = 2;
  call(monitor, &count);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetVideoModes");
}


TEST_F(get_video_modes_test, has_correct_params) {
  auto monitor = (GLFWmonitor*)4;
  int count = 2;
  call(monitor, &count);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("monitor"), t_arg(monitor));
  ASSERT_EQ(first_invocation.param("count"), t_arg(&count));
}

TEST_F(get_video_modes_test, returns_correctly) {
  auto monitor = (GLFWmonitor*)3;
  int count = 2;
  ASSERT_EQ(m_result, call(monitor, &count));
}

