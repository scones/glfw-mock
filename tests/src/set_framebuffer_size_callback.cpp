/*
 * set_framebuffer_size_callback.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class set_framebuffer_size_callback_test : public base_fixture {
  protected:

  GLFWframebuffersizefun m_result;
  void SetUp() {
    base_fixture::SetUp();
    m_result = (GLFWframebuffersizefun)5475;
    stubber::register_function_result("glfwSetFramebufferSizeCallback", m_result);
  }

  GLFWframebuffersizefun call(GLFWwindow* window, GLFWframebuffersizefun cbfun) {
    return glfwSetFramebufferSizeCallback(window, cbfun);
  }
};


TEST_F(set_framebuffer_size_callback_test, is_reachable) {
  auto window = (GLFWwindow*)5;
  auto cbfun = (GLFWframebuffersizefun)5168;
  call(window, cbfun);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwSetFramebufferSizeCallback");
}


TEST_F(set_framebuffer_size_callback_test, has_correct_params) {
  auto window = (GLFWwindow*)5;
  auto cbfun = (GLFWframebuffersizefun)5168;
  call(window, cbfun);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("window"), t_arg(window));
  ASSERT_EQ(first_invocation.param("cbfun"), t_arg(cbfun));
}

TEST_F(set_framebuffer_size_callback_test, returns_correctly) {
  auto window = (GLFWwindow*)5;
  auto cbfun = (GLFWframebuffersizefun)5168;
  ASSERT_EQ(m_result, call(window, cbfun));
}

