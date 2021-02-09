#include "Increment.h"
#include <iostream>

void Increment::print() const
{
    std::cout << m_number << std::endl;
}

const Increment &Increment::operator++()
{
    m_number++;
    return *this;
}
