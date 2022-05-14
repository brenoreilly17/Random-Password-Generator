// Name: Brendan O'Reilly
// Email: brenoreilly17@gmail.com

#ifndef RANDOM_PASSWORD_GENERATOR_RANDOMPASSWORDGENERATOR_H
#define RANDOM_PASSWORD_GENERATOR_RANDOMPASSWORDGENERATOR_H

#include <stdexcept>
#include <string>

class Password {
public:
    /**
     * @Brief Constructor for the password
     */
  Password();

  /**
   * @Brief Choose specifications for your password
   */
  void choose_specs();

  /**
   * @Brief Generates the password based on specs
   * @return Password
   */
  std::string password_generator();

  /**
   * @Brief Randomly generates the password
   */
  void random_add();

  /**
   * @Brief Determines if user input is valid (for lowercase spec)
   * @return True or false
   */
  bool lowercaseValidInput() const;

  /** @Brief
   * Determines if user input is valid (for uppercase spec)
   * @return True or false
   */
  bool uppercaseValidInput() const;
  bool number_choice();
  std::string input_numbers();

private:
  uint32_t size;
  std::string pass;

  char caps{};
  char lows{};
  char numbers{};

  bool cap;
  bool low;

  size_t i;
};

#endif // RANDOM_PASSWORD_GENERATOR_RANDOMPASSWORDGENERATOR_H
