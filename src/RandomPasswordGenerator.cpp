// Name: Brendan O'Reilly
// Email: brenoreilly17@gmail.com

#include "RandomPasswordGenerator.h"
#include <algorithm>
#include <iostream>
#include <random>

Password::Password() : size(0), cap(false), low(false), i(0) {}

void Password::choose_specs() {
  std::cout << "Choose the length of your password." << std::endl;
  std::cin >> size;
  std::cout << "Would you like your password to be all capitals [Enter Y/N]."
            << std::endl;
  std::cin >> caps;
  if (caps == 'Y' || caps == 'y') {
    cap = true;
  }

  else if (caps == 'N' || caps == 'n') {
    cap = false;
  }

  else {
    while (!uppercaseValidInput()) {
      std::cout << "That is not a valid request. Please enter [Y/N].";
      std::cin >> caps;
    }
    if (caps == 'N' || caps == 'n') {
        cap = false;
    }
    else {
        cap = true;
    }
  }

  if (!cap) {
    std::cout << "Would you like your password to be all lowercase [Enter Y/N]."
              << std::endl;
    std::cin >> lows;
    if (lows == 'Y' || lows == 'y') {
      low = true;
    } else if (lows == 'n' || lows == 'N') {
      low = false;
    } else {
      while (!lowercaseValidInput()) {
        std::cout << "That is not a valid request. Please enter [Y/N].";
        std::cin >> lows;
      }
      if (lows == 'n' || lows == 'N') {
          lows = false;
      }
      else {
          lows = true;
      }
    }
  }
}

bool Password::uppercaseValidInput() const {
    if (caps != 'n' && caps != 'N' && caps != 'Y' && caps != 'y') {
        return false;
    }
    else {
        return true;
    }
}

bool Password::lowercaseValidInput() const {
    if (lows != 'n' && lows != 'N' && lows != 'Y' && lows != 'y') {
        return false;
    }
    else {
        return true;
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
    if (i % 2 == 0) {
      char character = distance(mt) + 'a';
      pass += character;
    } else {
      char character = distance(mt) + 'A';
      pass += character;
    }
  }
}

std::string Password::password_generator() {
  while (i <= size - 1) {
    random_add();
    ++i;
  }
  return pass;
}

int main() {
  Password new_pass;
  new_pass.choose_specs();
  std::cout << std::endl;
  std::cout << new_pass.password_generator() << std::endl;
  return 0;
}
