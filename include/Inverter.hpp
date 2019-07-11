#ifndef INVERTER_H
#define INVERTER_H

class Wire;

class Inverter {
public:
  Inverter(Wire *, Wire *);
  void propergate();

private:
  Wire *in;
  Wire *out;
};

#endif // INVERTER_H
