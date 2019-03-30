#include <Input.hpp>

Input::Input(int inputNumber, Gate *gate) {
  this->inputNumber = inputNumber;
  this->gate = gate;
}

void Input::set(bool value) { this->gate->setInput(this->inputNumber, value); }
