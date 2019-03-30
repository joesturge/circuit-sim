#include <NandGate.hpp>

NandGate::NandGate(Input *a, Input *b, Output *output) : Gate(2, output) {
  a->connect(0, this);
  b->connect(1, this);
}

bool NandGate::evaluateOutput() {
  return !(this->getInput(0) && this->getInput(1));
}
