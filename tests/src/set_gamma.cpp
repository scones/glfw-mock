/*
 * set_gamma.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class set_gamma_test : public base_fixture {
  protected:

  void call(GLFWmonitor* monitor, float gamma) {
    glfwSetGamma(monitor, gamma);
  }
};


TEST_F(set_gamma_test, is_reachable) {
  auto monitor = (GLFWmonitor*)5;
  float gamma = 1.3f;
  call(monitor, gamma);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwSetGamma");
}


TEST_F(set_gamma_test, has_correct_params) {
  auto monitor = (GLFWmonitor*)5;
  float gamma = 1.3f;
  call(monitor, gamma);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("monitor"), t_arg(monitor));
  ASSERT_EQ(first_invocation.param("gamma"), t_arg(gamma));
}

