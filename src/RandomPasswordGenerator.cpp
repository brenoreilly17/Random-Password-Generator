// Name: Brendan O'Reilly
// Email: brenoreilly17@gmail.com

#include "RandomPasswordGenerator.h"
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>

Password::Password() : size(0), pass(""), cap(false), low(false) {}

void Password::choose_specs() {
  std::cout << "Choose the length of your password." << std::endl;
  std::cin >> size;
  std::cout << "Would you like your password to be all capitals [Enter Y/N]?"
            << std::endl;
  std::cin >> caps;
  if (caps == 'Y' || caps == 'y') {
    cap = true;
  }
  if (!cap) {
    std::cout << "Would you like your password to be all lowercase [Enter Y/N]"
              << std::endl;
    std::cin >> lows;
    if (lows == 'n' || lows == 'N') {
      low = true;
    }
  }
}

void Password::random_add() {
  uint32_t i = 0;
  if (cap) {
    srand(i);
    char character = rand();
    pass += character;
  }
  if (low || !cap) {
//    char character = num + 'a';
//    pass += character;
  }
  if (!low && !cap) {
//    uint32_t i = 0;
//    if (i % 2 == 0) {
//      char character = num + 'a';
//      pass += character;
//    } else {
//      char character = num + 'A';
//      pass += character;
//    }
  }
  ++i;
}

std::string Password::password_generator() {
  uint32_t i = 0;
  while (i < size) {
    random_add();
    ++i;
  }
  return pass;
}

int main() {
  Password new_pass;
  new_pass.choose_specs();
  std::cout << new_pass.password_generator() << std::endl;
  return 0;
}
