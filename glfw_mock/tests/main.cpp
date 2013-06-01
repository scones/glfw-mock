#define BOOST_TEST_MODULE GlfwMockTests
#include <boost/test/unit_test.hpp>

#include <GL/glfw.h>
#include "../stubber.h"

BOOST_FIXTURE_TEST_SUITE (OpenWindow, fixture)

BOOST_AUTO_TEST_CASE( foo ) {
  glfwOpenWindow(1,2,3,4,5,6,7,8,9);

  BOOST_CHECK(stub.function_calls().front().name() == "glfwOpenWindow");
  int foo = stub.function_calls().front().arguments()[std::string("width")];
  BOOST_CHECK(foo == 1024);
}

BOOST_AUTO_TEST_SUITE_END()

