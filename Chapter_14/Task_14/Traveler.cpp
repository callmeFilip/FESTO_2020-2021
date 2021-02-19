#include "Traveler.h"
#include <iostream>

Traveler::Traveler(std::string value) : str(value)
{
    std::cout << "Traveler::Traveler(std::string)" << std::endl;
}

Traveler::Traveler(const Traveler &other)
{
    std::cout << "Traveler::copy-constructor" << std::endl;
    str = other.str;
}

Traveler &Traveler::operator=(const Traveler &other)
{
    if (this != &other)
    {
        std::cout << "Traveler::operator=" << std::endl;
        str = other.str;
    }
    return *this;
}
std::string Traveler::getStr() const
{
    return str;
}
