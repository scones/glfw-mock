/*
 * set_window_user_pointer.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class set_window_user_pointer_test : public base_fixture {
  protected:

  void call(GLFWwindow* window, void* pointer) {
    return glfwSetWindowUserPointer(window, pointer);
  }
};


TEST_F(set_window_user_pointer_test, is_reachable) {
  auto window = (GLFWwindow*)5;
  void* pointer = (void*)818;
  call(window, pointer);
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwSetWindowUserPointer");
}


TEST_F(set_window_user_pointer_test, has_correct_params) {
  auto window = (GLFWwindow*)5;
  void* pointer = (void*)818;
  call(window, pointer);
  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.param("window"), t_arg(window));
  ASSERT_EQ(first_invocation.param("pointer"), t_arg(pointer));
}

