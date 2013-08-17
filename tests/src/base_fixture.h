/*
 * base_fixture.h
 *
 *  Created on: 14.07.2013
 *      Author: scn
 */

#ifndef BASE_FIXTURE_H_
#define BASE_FIXTURE_H_

#include <gtest/gtest.h>

#include "stubber/stubber.h"

struct base_fixture : public ::testing::Test {
  protected:

  base_fixture() : ::testing::Test(), stub(stubber::get_stub()) {
  }
  virtual ~base_fixture() {
  }

  void SetUp() {
    stubber::reset();
  }

  void TearDown() {
  }

  stubber* stub;
};

#endif /* BASE_FIXTURE_H_ */

