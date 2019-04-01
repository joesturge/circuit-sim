#include <Input.hpp>
#include <NandGate.hpp>
#include <Output.hpp>
#include <SrNandLatch.hpp>
#include <iostream>
#include <vector>

int main() {
  Input notA;
  Input notB;

  Input nandDataA;
  Input nandDataB;

  Input nandClkA;
  Input nandClkB;

  Output D;
  Output _D;
  Output Clk;

  Output nandClkOut;
  Output nandDataOut;
  Input _S;
  Input _R;
  Output Q;
  Output _Q;

  NandGate notGate;
  NandGate nandData;
  NandGate nandClk;

  D.forward(&notA);
  D.forward(&notB);
  D.forward(&nandDataA);
  Clk.forward(&nandClkB);
  Clk.forward(&nandDataB);

  notGate.setA(&notA);
  notGate.setB(&notB);
  notGate.setOutput(&_D);
  _D.forward(&nandClkA);

  nandClk.setA(&nandClkA);
  nandClk.setB(&nandClkB);
  nandClk.setOutput(&nandClkOut);
  nandClkOut.forward(&_R);

  nandData.setA(&nandDataA);
  nandData.setB(&nandDataB);
  nandData.setOutput(&nandDataOut);
  nandDataOut.forward(&_S);

  SrNandLatch latch = SrNandLatch(&_S, &_R, &Q, &_Q);

  Clk.set(true);
  D.set(true);
  std::cout << Q.get() << std::endl;

  Clk.set(true);
  D.set(false);
  std::cout << Q.get() << std::endl;

  Clk.set(true);
  D.set(true);
  std::cout << Q.get() << std::endl;

  Clk.set(false);
  D.set(false);
  std::cout << Q.get() << std::endl;

  Clk.set(false);
  D.set(true);
  std::cout << Q.get() << std::endl;

  Clk.set(false);
  D.set(false);
  std::cout << Q.get() << std::endl;

  Clk.set(true);
  D.set(true);
  std::cout << Q.get() << std::endl;

  Clk.set(true);
  D.set(false);
  std::cout << Q.get() << std::endl;
}
