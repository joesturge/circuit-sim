#include <NandGate.hpp>
#include <SrNandLatch.hpp>

SrNandLatch::SrNandLatch(Input *_S, Input *_R, Output *Q, Output *_Q) {

  Q->forward(&this->feedbackReset);
  _Q->forward(&this->feedbackSet);

  this->gateSet.setA(_S);
  this->gateSet.setB(&this->feedbackSet);
  this->gateSet.setOutput(Q);

  this->gateReset.setA(&this->feedbackReset);
  this->gateReset.setB(_R);
  this->gateReset.setOutput(_Q);
}
