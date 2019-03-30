#ifndef INPUT_H
#define INPUT_H

#include <Gate.hpp>

class Gate;
class Input {
public:
  Input();
  void connect(int inputNumber, Gate *gate);
  void set(bool value);

private:
  int inputNumber;
  Gate *gate;
};

#endif // INPUT_H
