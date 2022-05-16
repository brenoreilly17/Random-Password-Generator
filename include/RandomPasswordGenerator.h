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

  /** @Brief
   * Determines if the user wants numbers in his/her password
   * @return True or false
   */
  bool number_choice();

  /** @Brief Puts numbers into the password if the user wants
   *
   */
  void input_numbers();

  /** @Brief The
  std::string pass;

private:
  /** @Brief Length of the password (based on user input)
   *
   */
  uint32_t size;

  /** @Brief User's new password
   *
   */

  /** @Brief Does the user want all caps?
   *
   */
  char caps{};

  /** @Brief Does the user want all lowercase?
   *
   */
  char lows{};

  /** @Brief Does the user want numbers mixed in the password?
   *
   */
  char numbers{};

  /** @Brief Yes or no for all caps?
   *
   */
  bool cap;

  /** @Brief Yes or no for all lowercase?
   *
   */
  bool low;

  /** @Brief Method to keep track of adding randomness to the password
   *
   */
  size_t i;
};

#endif // RANDOM_PASSWORD_GENERATOR_RANDOMPASSWORDGENERATOR_H
