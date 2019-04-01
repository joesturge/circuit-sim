#include <Gate.hpp>

Gate::Gate(int numberOfInputs) { inputValues.assign(numberOfInputs, 0); }

void Gate::setOutput(Output *output) { this->output = output; }

void Gate::setInputValue(int inputNumber, bool value) {
  inputValues.at(inputNumber) = value;
  output->set(this->evaluateOutput());
}

bool Gate::getInput(int inputNumber) {
  return this->inputValues.at(inputNumber);
}

Gate::~Gate() {}
