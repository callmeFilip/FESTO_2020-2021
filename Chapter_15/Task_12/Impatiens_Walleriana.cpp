#include "Impatiens_Walleriana.h"
#include <iostream>

Impatiens_Walleriana::Impatiens_Walleriana(std::string type) : Plant(type)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Impatiens_Walleriana::~Impatiens_Walleriana()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Impatiens_Walleriana::photosynthesis() const
{
    std::cout << "Impatiens_Walleriana says: photosynthesize.." << std::endl;
}

void Impatiens_Walleriana::grow() const
{
    std::cout << "Impatiens_Walleriana says: growing.." << std::endl;
}
