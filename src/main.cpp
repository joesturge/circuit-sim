#include <Gate.hpp>
#include <Input.hpp>
#include <NandGate.hpp>
#include <Output.hpp>
#include <iostream>
#include <vector>

int main() {
  std::vector<Input *> outputWire;
  Output output = Output(&outputWire);

  NandGate nand = NandGate(&output);

  Input inputA = Input(0, &nand);
  Input inputB = Input(1, &nand);

  inputA.set(false);
  inputB.set(false);
  std::cout << output.get() << std::endl;
  inputA.set(false);
  inputB.set(true);
  std::cout << output.get() << std::endl;
  inputA.set(true);
  inputB.set(false);
  std::cout << output.get() << std::endl;
  inputA.set(true);
  inputB.set(true);
  std::cout << output.get() << std::endl;
}
