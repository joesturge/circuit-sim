#include <Gate.hpp>

Gate::Gate(int numberOfInputs, Output *output) {
  this->output = output;
  inputValues.assign(numberOfInputs, 0);
}

void Gate::setInput(int inputNumber, bool value) {
  inputValues.at(inputNumber) = value;
  output->set(this->evaluateOutput());
}

bool Gate::getInput(int inputNumber) {
  return this->inputValues.at(inputNumber);
}

Gate::~Gate() {}
