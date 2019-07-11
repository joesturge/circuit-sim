#ifndef PROPERGATION_H
#define PROPERGATION_H

#include <vector>

class Inverter;

class Propergation {
public:
  Propergation(Inverter *);
  void wait(int);
  bool ready();
  void propergate();

private:
  Inverter *gate;
  int timeLeft;
};

#endif // PROPERGATION_H
