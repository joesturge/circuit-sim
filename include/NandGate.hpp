#ifndef NAND_GATE_H
#define NAND_GATE_H

#include <Input.hpp>
#include <Output.hpp>
#include <TwoInputGate.hpp>

class NandGate : public TwoInputGate {
public:
  NandGate();

private:
  bool evaluateOutput();
};

#endif // NAND_GATE_H
