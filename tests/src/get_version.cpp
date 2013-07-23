/*
 * get_version.cpp
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */


#include <GLFW/glfw3.h>

#include "base_fixture.h"

class get_version_test : public base_fixture {
  protected:

  void call(int* major, int* minor, int* rev) {
    return glfwGetVersion(major, minor, rev);
  }
};


TEST_F(get_version_test, is_reachable) {
  int major = 1;
  int minor = 2;
  int rev = 3;
  call(&major, &minor, &rev);
  auto invocation_count = stub->function_calls().size();
  ASSERT_EQ(1, invocation_count);

  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.name(), "glfwGetVersion");
}


TEST_F(get_version_test, has_correct_params) {
  int major = 1;
  int minor = 2;
  int rev = 3;
  call(&major, &minor, &rev);
  auto first_invocation = stub->function_calls().front();
  ASSERT_EQ(first_invocation.param("major"), t_arg(&major));
  ASSERT_EQ(first_invocation.param("minor"), t_arg(&minor));
  ASSERT_EQ(first_invocation.param("rev"), t_arg(&rev));
}

