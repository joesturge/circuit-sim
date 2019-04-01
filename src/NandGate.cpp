#include <NandGate.hpp>

NandGate::NandGate() : TwoInputGate() {}

bool NandGate::evaluateOutput() { return !(this->getA() && this->getB()); }
