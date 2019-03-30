#ifndef NAND_GATE_H
#define NAND_GATE_H

#include <Gate.hpp>
#include <NandGate.hpp>
#include <Output.hpp>

class NandGate : public Gate {
public:
  NandGate(Input *a, Input *b, Output *output);

private:
  bool evaluateOutput();
};

#endif // NAND_GATE_H
