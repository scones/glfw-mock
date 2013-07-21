/*
 * init.cpp
 *
 *  Created on: 21.07.2013
 *      Author: scn
 */

#include <GL/glfw.h>

#include "base_fixture.h"


class init_test : public base_fixture {
  protected:

  void SetUp() {
    base_fixture::SetUp();
    stubber::register_function_int_result("glfwInit", GL_TRUE);
  }

  int call() {
    return glfwInit();
  }
};


TEST_F(init_test, returns_gl_true) {
  ASSERT_EQ(GL_TRUE, call());
}


TEST_F(init_test, returns_gl_false_on_failure) {
  stubber::register_function_int_result("glfwInit", GL_FALSE);
  ASSERT_EQ(GL_FALSE, call());
}

