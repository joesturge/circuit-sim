#include <Inverter.hpp>
#include <Propergation.hpp>
#include <Ticker.hpp>
#include <Wire.hpp>

Inverter::Inverter(Wire *in, Wire *out, Ticker *ticker) {
  this->in = in;
  this->out = out;
  this->ticker = ticker;
  in->addChangeListener(this);
}

void Inverter::propergate() { out->setSignal(!in->getSignal()); }

void Inverter::change() { ticker->addPropergation(Propergation(this)); }

int Inverter::getPropergationDelay() { return 10; }
