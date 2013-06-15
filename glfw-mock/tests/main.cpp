#define BOOST_TEST_MODULE GlfwMockTests
#include <boost/test/unit_test.hpp>

#include <GL/glfw.h>
#include "../stubber.h"

#include <iostream>


BOOST_FIXTURE_TEST_SUITE (OpenWindow, fixture)

BOOST_AUTO_TEST_CASE( foo ) {

  glfwOpenWindow(1,2,3,4,5,6,7,8,9);

  BOOST_CHECK(1 == stub->function_calls().size());

  auto call = stub->function_calls().front();
  BOOST_CHECK(call.name() == "glfwOpenWindow");

  auto width = call.param("width");
  BOOST_CHECK(width == "1");
}

BOOST_AUTO_TEST_SUITE_END()

