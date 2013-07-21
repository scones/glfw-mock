/*
 * glfw_open_window.cpp
 *
 *  Created on: 14.07.2013
 *      Author: scn
 */

#include <GL/glfw.h>

#include "base_fixture.h"

class open_window_test : public base_fixture {
  protected:

  void
  SetUp() {
    base_fixture::SetUp();
    stubber::register_function_int_result("glfwOpenWindow", GL_TRUE);
  }

  int
  call(int width, int height, int redbits, int greenbits, int bluebits, int alphabits, int depthbits, int stencilbits, int mode) {
    return glfwOpenWindow(width, height, redbits, greenbits, bluebits, alphabits, depthbits, stencilbits, mode);
  }
};


TEST_F(open_window_test, returns_gl_true_with_correct_width) {
  auto result = call(1, 2, 3, 4, 5, 6, 7, 8, 9);
  ASSERT_EQ(GL_TRUE, result);
}


TEST_F(open_window_test, returns_gl_false_width_incorrect_width) {
  stubber::register_function_int_result("glfwOpenWindow", GL_FALSE);
  auto result = call(-1, 2, 3, 4, 5, 6, 7, 8, 9);
  ASSERT_EQ(GL_FALSE, result);
}


TEST_F(open_window_test, stubber_records_just_one_function_call) {
  call(1, 2, 3, 4, 5, 6, 7, 8, 9);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);
}


TEST_F(open_window_test, the_first_call_is_glfw_open_window) {
  call(1, 2, 3, 4, 5, 6, 7, 8, 9);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwOpenWindow");
}


TEST_F(open_window_test, the_parameters_are_correct) {
  call(1, 2, 3, 4, 5, 6, 7, 8, 9);
  auto first_invocation = stub->function_calls().front();
  auto width = first_invocation.param("width");
  ASSERT_EQ(width, "1");
}

