#ifndef OUTPUT_H
#define OUTPUT_H

#include <Input.hpp>
#include <vector>

class Input;
class Output {
public:
  Output(std::vector<Input *> connections);
  Output(Input *connection);
  Output();
  void set(bool value);
  bool get();

private:
  std::vector<Input *> connections;
  bool value;
};

#endif // OUTPUT_H
