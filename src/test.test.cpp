#include <iostream>

#include "gtest/gtest.h"

#include <Inverter.hpp>
#include <Wire.hpp>

TEST(SimulatorTest, Invert) {

  Wire in = Wire();
  in.setSignal(true);
  Wire out = Wire();
  Inverter invert = Inverter(in, out);

  EXPECT_FALSE(out.getSignal());
}
