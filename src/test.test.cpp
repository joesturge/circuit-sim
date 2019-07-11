
#include "gtest/gtest.h"

#include <cmath>
#include <vector>

#include <Inverter.hpp>
#include <Propergation.hpp>
#include <Ticker.hpp>
#include <Wire.hpp>

namespace {

// The fixture for testing class Foo.
class InverterTest : public ::testing::Test {
protected:
  Wire in = Wire();
  Wire out = Wire();
  Ticker ticker = Ticker();
  Inverter invert = Inverter(&in, &out, &ticker);
};

TEST_F(InverterTest, InvertTrue) {

  in.setSignal(true);
  EXPECT_FALSE(out.getSignal());
}

TEST_F(InverterTest, InvertFalse) {

  in.setSignal(false);
  EXPECT_FALSE(out.getSignal());
  ticker.tick(10);
  EXPECT_TRUE(out.getSignal());
}

TEST_F(InverterTest, InvertFalseThenTrue) {

  in.setSignal(false);
  EXPECT_FALSE(out.getSignal());
  ticker.tick(10);
  in.setSignal(true);
  EXPECT_TRUE(out.getSignal());
  ticker.tick(10);
  EXPECT_FALSE(out.getSignal());
}

} // namespace
