// Name: Brendan O'Reilly
// Email: brenoreilly17@gmail.com

#ifndef RANDOM_PASSWORD_GENERATOR_RANDOMPASSWORDGENERATOR_H
#define RANDOM_PASSWORD_GENERATOR_RANDOMPASSWORDGENERATOR_H

#include <stdexcept>
#include <string>

class Password {
public:
  Password();
  void choose_specs();
  std::string password_generator();
  void random_add();

private:
  uint32_t size;
  std::string pass;
  char caps;
  bool cap;
  char lows;
  bool low;
};

#endif // RANDOM_PASSWORD_GENERATOR_RANDOMPASSWORDGENERATOR_H
