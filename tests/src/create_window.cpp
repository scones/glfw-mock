/*
 * glfw_open_window.cpp
 *
 *  Created on: 14.07.2013
 *      Author: scn
 */

#include <GLFW/glfw3.h>

#include "base_fixture.h"

class create_window_test : public base_fixture {
  protected:

  void SetUp() {
    base_fixture::SetUp();
    s_stub.register_function_result("glfwCreateWindow", (GLFWwindow*)1);
  }

  GLFWwindow* call(int width, int height, const char* title, GLFWmonitor* monitor, GLFWwindow* share) {
    return glfwCreateWindow(width, height, title, monitor, share);
  }
};


TEST_F(create_window_test, is_reachable) {
  auto monitor = (GLFWmonitor*)2;
  auto share = (GLFWwindow*)3;
  call(1024, 768, "bar", monitor, share);
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwCreateWindow");
}


TEST_F(create_window_test, has_correct_params) {
  auto monitor = (GLFWmonitor*)4;
  auto share = (GLFWwindow*)5;
  call(1024, 768, "bar", monitor, share);
  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.param("width"), t_arg(1024));
  ASSERT_EQ(first_invocation.param("height"), t_arg(768));
  ASSERT_EQ(first_invocation.param("title"), t_arg("bar"));
  ASSERT_EQ(first_invocation.param("monitor"), t_arg(monitor));
  ASSERT_EQ(first_invocation.param("share"), t_arg(share));
}

TEST_F(create_window_test, returns_correctly) {
  ASSERT_EQ((GLFWwindow*)1, call(1,2,"foo", nullptr, nullptr));
}


