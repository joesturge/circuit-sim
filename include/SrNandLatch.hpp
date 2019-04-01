#ifndef SR_NAND_LATCH_H
#define SR_NAND_LATCH_H

#include <Input.hpp>
#include <NandGate.hpp>
#include <Output.hpp>

class SrNandLatch {
public:
  SrNandLatch(Input *_S, Input *_R, Output *Q, Output *_Q);

private:
  Input feedbackSet;
  Input feedbackReset;
  NandGate gateSet;
  NandGate gateReset;
};
#endif // SR_NAND_LATCH_H
