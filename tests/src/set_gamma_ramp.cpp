/*
 * set_gamma_ramp.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class set_gamma_ramp_test : public base_fixture {
  protected:

  void call(GLFWmonitor* monitor, const GLFWgammaramp* ramp) {
    glfwSetGammaRamp(monitor, ramp);
  }
};


TEST_F(set_gamma_ramp_test, is_reachable) {
  auto window = (GLFWmonitor*)5;
  auto ramp = (GLFWgammaramp*)1834;
  call(window, ramp);
  auto invocation_count = s_stub.function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwSetGammaRamp");
}


TEST_F(set_gamma_ramp_test, has_correct_params) {
  auto window = (GLFWmonitor*)5;
  auto ramp = (GLFWgammaramp*)1834;
  call(window, ramp);
  auto first_invocation = s_stub.function_calls().front();
  ASSERT_EQ(first_invocation.param("monitor"), t_arg(window));
  ASSERT_EQ(first_invocation.param("ramp"), t_arg(ramp));
}

