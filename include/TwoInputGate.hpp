#ifndef TWO_INPUT_GATE_H
#define TWO_INPUT_GATE_H

#include <Gate.hpp>
#include <Input.hpp>
#include <Output.hpp>

class TwoInputGate : public Gate {
public:
  TwoInputGate();
  ~TwoInputGate();

  void setA(Input *A);
  void setB(Input *B);

protected:
  bool getA();
  bool getB();
  virtual bool evaluateOutput() = 0;
};

#endif // TWO_INPUT_GATE_H
