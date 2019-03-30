#include <NandGate.hpp>

NandGate::NandGate(Output *output) : Gate(2, output) {}

bool NandGate::evaluateOutput() {
  return !(this->getInput(0) && this->getInput(1));
}
