#include <Inverter.hpp>
#include <Wire.hpp>
#include <algorithm>

Wire::Wire() { this->signal = false; }

void Wire::setSignal(bool signal) {
  this->signal = signal;
  std::for_each(changeListeners.begin(), changeListeners.end(),
                [](Inverter *changeListener) { changeListener->propergate(); });
}

bool Wire::getSignal() { return signal; }

void Wire::addChangeListener(Inverter *gate) {
  this->changeListeners.push_back(gate);
}
