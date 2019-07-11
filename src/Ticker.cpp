#include <Propergation.hpp>
#include <Ticker.hpp>
#include <algorithm>

void Ticker::tick(int seconds) {
  auto end = std::remove_if(propergations.begin(), propergations.end(),
                            [seconds](Propergation propergation) {
                              propergation.wait(seconds);
                              if (propergation.ready()) {
                                propergation.propergate();
                              }
                              return propergation.ready();
                            });
  propergations.erase(end, propergations.end());
}

void Ticker::addPropergation(Propergation propergation) {
  this->propergations.push_back(propergation);
}
