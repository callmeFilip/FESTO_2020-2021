#include "Helicopter.h"
#include <iostream>

Helicopter::Helicopter(int id, std::string name) : Aircraft(id, name)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Helicopter::~Helicopter()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}
