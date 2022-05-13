// Name: Brendan O'Reilly
// Email: brenoreilly17@gmail.com

#include "RandomPasswordGenerator.h"
#include <algorithm>
#include <iostream>
#include <random>

Password::Password() : size(0), cap(false), low(false) {}

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
    std::cout << "Would you like your password to be all lowercase [Enter Y/N]?"
              << std::endl;
    std::cin >> lows;
    if (lows == 'Y' || lows == 'y') {
      low = true;
    }
    else {
        low = false;
    }
  }
}


void Password::random_add() {
  std::random_device rd;
  std::mt19937 mt(rd());
  std::uniform_real_distribution<double> distance(1.0, 10.0);
  if (cap) {
    char character = distance(mt) + 'A';
    pass += character;
  }
  if (low && !cap) {
    char character = distance(mt) + 'a';
    pass += character;
  }
  if (!low && !cap) {
    uint32_t j = 0;
    if (j % 2 == 0) {
      char character = distance(mt) + 'a';
      pass += character;
    } else {
      char character = distance(mt) + 'A';
      pass += character;
    }
    ++j;
  }
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
