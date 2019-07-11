#include <Inverter.hpp>
#include <Propergation.hpp>

Propergation::Propergation(Inverter *gate) {
  this->gate = gate;
  this->timeLeft = gate->getPropergationDelay();
}

void Propergation::wait(int seconds) { this->timeLeft -= seconds; }

bool Propergation::ready() { return this->timeLeft <= 0; }

void Propergation::propergate() { this->gate->propergate(); }
