
#include "gtest/gtest.h"

#include <Inverter.hpp>
#include <Wire.hpp>

namespace {

// The fixture for testing class Foo.
class InverterTest : public ::testing::Test {
protected:
  Wire in = Wire();
  Wire out = Wire();
  Inverter invert = Inverter(&in, &out);
};

TEST_F(InverterTest, InvertTrue) {

  in.setSignal(true);

  EXPECT_FALSE(out.getSignal());
}

TEST_F(InverterTest, InvertFalse) {

  in.setSignal(false);

  EXPECT_TRUE(out.getSignal());
}

TEST_F(InverterTest, InvertFalseThenTrue) {

  in.setSignal(false);
  EXPECT_TRUE(out.getSignal());

  in.setSignal(true);
  EXPECT_FALSE(out.getSignal());
}

} // namespace
