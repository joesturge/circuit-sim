#include <TwoInputGate.hpp>

TwoInputGate::TwoInputGate() : Gate(2) {}

void TwoInputGate::setA(Input *A) { A->connect(0, this); }

void TwoInputGate::setB(Input *B) { B->connect(1, this); }

bool TwoInputGate::getA() { return this->getInput(0); }

bool TwoInputGate::getB() { return this->getInput(1); }

TwoInputGate::~TwoInputGate() {}
