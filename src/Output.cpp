#include <Output.hpp>

Output::Output(std::vector<Input *> *connections) {
  this->connections = connections;
  this->value = false;
}

void Output::set(bool value) {
  if (value == this->value) {
    return;
  }
  this->value = value;
  for (unsigned i = 0; i < connections->size(); i++) {
    connections->at(i)->set(this->value);
  }
}

bool Output::get() { return this->value; }
