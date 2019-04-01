#include <Output.hpp>

Output::Output() {}

void Output::set(bool value) {
  if (value == this->value) {
    return;
  }
  this->value = value;
  for (unsigned i = 0; i < connections.size(); i++) {
    connections.at(i)->set(this->value);
  }
}

void Output::forward(Input *newConnection) {
  this->connections.push_back(newConnection);
}

bool Output::get() { return this->value; }
