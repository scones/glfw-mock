/*
 * get_window_pos.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_window_pos_test : public base_fixture {
  protected:

  void call(GLFWwindow* window, int* xpos, int* ypos) {
    return glfwGetWindowPos(window, xpos, ypos);
  }
};


TEST_F(get_window_pos_test, is_reachable) {
  auto window = (GLFWwindow*)5;
  int xpos = 2;
  int ypos = 4;
  call(window, &xpos, &ypos);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetWindowPos");
}


TEST_F(get_window_pos_test, has_correct_params) {
  auto window = (GLFWwindow*)5;
  int xpos = 2;
  int ypos = 4;
  call(window, &xpos, &ypos);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("window"), t_arg(window));
  ASSERT_EQ(first_invocation.param("xpos"), t_arg(&xpos));
  ASSERT_EQ(first_invocation.param("ypos"), t_arg(&ypos));
}

