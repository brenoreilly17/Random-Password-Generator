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

std::string Password::password_generator() {
    uint32_t i = 0;
    while (i < size) {
        if (i % 2 == 0) {
            uint32_t num = rand() % 26;
            char character = num + 'a';
            pass += character;
        }
        else {
            uint32_t num = rand() % 26;
            char character = num + 'a';
            pass += toupper(character);
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






