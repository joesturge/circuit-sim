#include <Inverter.hpp>
#include <Wire.hpp>

Inverter::Inverter(Wire *in, Wire *out) {
  this->in = in;
  this->out = out;
  in->addChangeListener(this);
}

void Inverter::propergate() { out->setSignal(!in->getSignal()); }
