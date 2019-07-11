#ifndef INVERTER_H
#define INVERTER_H

class Wire;
class Ticker;
class Propergation;

class Inverter {
public:
  Inverter(Wire *, Wire *, Ticker *);
  void change();
  void propergate();
  int getPropergationDelay();

private:
  Wire *in;
  Wire *out;
  Ticker *ticker;
};

#endif // INVERTER_H
