#ifndef TICKER_H
#define TICKER_H

#include <vector>

class Propergation;

class Ticker {
public:
  void tick(int);
  void addPropergation(Propergation);

private:
  std::vector<Propergation> propergations;
};

#endif // INVERTER_H
