/*
 * get_monitor_physical_size.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_monitor_physical_size_test : public base_fixture {
  protected:

  void call(GLFWmonitor* monitor, int* width, int* height) {
    glfwGetMonitorPhysicalSize(monitor, width, height);
  }
};


TEST_F(get_monitor_physical_size_test, is_reachable) {
  auto monitor = (GLFWmonitor*)5;
  int width = 1;
  int height = 2;
  call(monitor, &width, &height);
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetMonitorPhysicalSize");
}


TEST_F(get_monitor_physical_size_test, has_correct_params) {
  auto monitor = (GLFWmonitor*)5;
  int width = 1;
  int height = 2;
  call(monitor, &width, &height);
  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.param("monitor"), t_arg(monitor));
  ASSERT_EQ(first_invocation.param("width"), t_arg(&width));
  ASSERT_EQ(first_invocation.param("height"), t_arg(&height));
}

