#ifndef GATE_H
#define GATE_H

#include <Output.hpp>
#include <vector>

class Output;
class Gate {
public:
  Gate(int numberOfInputs);
  void setOutput(Output *output);
  void setInputValue(int input, bool value);

  ~Gate();

protected:
  virtual bool evaluateOutput() = 0;
  bool getInput(int inputNumber);

private:
  Output *output;
  std::vector<bool> inputValues;
};

#endif // GATE_H
