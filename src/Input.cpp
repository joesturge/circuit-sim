#include <Input.hpp>

Input::Input() {}

void Input::connect(int inputNumber, Gate *gate) {
  this->inputNumber = inputNumber;
  this->gate = gate;
}

void Input::set(bool value) {
  this->gate->setInputValue(this->inputNumber, value);
}
