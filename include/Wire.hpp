#ifndef WIRE_H
#define WIRE_H

#include <vector>

class Inverter;

class Wire {
public:
  Wire();
  void setSignal(bool);
  bool getSignal();
  void addChangeListener(Inverter *);

private:
  bool signal;
  std::vector<Inverter *> changeListeners;
};

#endif // WIRE_H
