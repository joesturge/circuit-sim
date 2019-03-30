#include <Gate.hpp>
#include <Input.hpp>
#include <NandGate.hpp>
#include <Output.hpp>
#include <iostream>
#include <vector>

int main() {
  Input inputA;
  Input inputB;
  Input feedbackA;
  Input feedbackB;

  Output outputA = Output(&feedbackA);
  Output outputB = Output(&feedbackB);

  NandGate gateA = NandGate(&inputA, &feedbackB, &outputA);
  NandGate gateB = NandGate(&inputB, &feedbackA, &outputB);

  inputA.set(true);
  inputB.set(true);
  std::cout << outputA.get() << std::endl;
  std::cout << outputB.get() << std::endl << std::endl;
  inputA.set(false);
  inputB.set(true);
  std::cout << outputA.get() << std::endl;
  std::cout << outputB.get() << std::endl << std::endl;
  inputA.set(true);
  inputB.set(true);
  std::cout << outputA.get() << std::endl;
  std::cout << outputB.get() << std::endl << std::endl;
  inputA.set(false);
  inputB.set(true);
  std::cout << outputA.get() << std::endl;
  std::cout << outputB.get() << std::endl << std::endl;
  inputA.set(true);
  inputB.set(true);
  std::cout << outputA.get() << std::endl;
  std::cout << outputB.get() << std::endl << std::endl;
  inputA.set(true);
  inputB.set(false);
  std::cout << outputA.get() << std::endl;
  std::cout << outputB.get() << std::endl << std::endl;
  inputA.set(true);
  inputB.set(true);
  std::cout << outputA.get() << std::endl;
  std::cout << outputB.get() << std::endl << std::endl;
}
