/*
 * get_monitor_pos.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_monitor_pos_test : public base_fixture {
  protected:


  void call(GLFWmonitor* monitor, int* xpos, int* ypos) {
    return glfwGetMonitorPos(monitor, xpos, ypos);
  }
};


TEST_F(get_monitor_pos_test, is_reachable) {
  auto monitor = (GLFWmonitor*)5;
  int xpos = 1;
  int ypos = 2;
  call(monitor, &xpos, &ypos);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetMonitorPos");
}


TEST_F(get_monitor_pos_test, has_correct_params) {
  auto monitor = (GLFWmonitor*)5;
  int xpos = 1;
  int ypos = 2;
  call(monitor, &xpos, &ypos);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("monitor"), t_arg(monitor));
  ASSERT_EQ(first_invocation.param("xpos"), t_arg(&xpos));
  ASSERT_EQ(first_invocation.param("ypos"), t_arg(&ypos));
}

