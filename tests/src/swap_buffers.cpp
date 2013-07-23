/*
 * swap_buffers.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class swap_buffers_test : public base_fixture {
  protected:

  void call(GLFWwindow* window) {
  glfwSwapBuffers(window);
  }
};


TEST_F(swap_buffers_test, is_reachable) {
  auto window = (GLFWwindow*)5;
  call(window);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwSwapBuffers");
}


TEST_F(swap_buffers_test, has_correct_params) {
  auto window = (GLFWwindow*)4;
  call(window);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("window"), t_arg(window));
}

