/*
 * get_video_mode.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_video_mode_test : public base_fixture {
  protected:

  const GLFWvidmode* m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = (const GLFWvidmode*) 8;
    stubber::register_function_result("glfwGetVideoMode", m_result);
  }

  const GLFWvidmode* call(GLFWmonitor* monitor) {
    return glfwGetVideoMode(monitor);
  }
};


TEST_F(get_video_mode_test, is_reachable) {
  auto monitor = (GLFWmonitor*)5;
  call(monitor);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetVideoMode");
}


TEST_F(get_video_mode_test, has_correct_params) {
  auto monitor = (GLFWmonitor*)5;
  call(monitor);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("monitor"), t_arg(monitor));
}

TEST_F(get_video_mode_test, returns_correctly) {
  auto monitor = (GLFWmonitor*)5;
  ASSERT_EQ(m_result, call(monitor));
}

