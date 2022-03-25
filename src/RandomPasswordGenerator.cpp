//Name: Brendan O'Reilly
//Email: brenoreilly17@gmail.com

#include "RandomPasswordGenerator.h"
#include <iostream>
#include <cctype>


Password::Password() : size(0), pass("")
{
}

void Password::choose_specs() {
    std::cout << "Choose the length of your password." << std::endl;
    std::cin >> size;
}

void Password::random_add() {
    uint32_t num = rand() % 26;
    char character = num + 'a';
    pass += character;
}

std::string Password::password_generator() {
    uint32_t i = 0;
    while (i < size) {
        if (i % 2 == 0) {
            random_add();
        }
        else {
            random_add();
        }
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






