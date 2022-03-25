//Name: Brendan O'Reilly
//Email: brenoreilly17@gmail.com

#ifndef RANDOM_PASSWORD_GENERATOR_RANDOMPASSWORDGENERATOR_H
#define RANDOM_PASSWORD_GENERATOR_RANDOMPASSWORDGENERATOR_H

#include <stdexcept>
#include <string>

class Password {
public:
    Password();
    void choose_specs();
    std::string password_generator();

private:
    uint32_t size;
    std::string pass;
};


#endif //RANDOM_PASSWORD_GENERATOR_RANDOMPASSWORDGENERATOR_H
