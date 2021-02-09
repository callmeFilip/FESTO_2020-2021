#include "Increment.h"
#include <iostream>

void Increment::print()
{
    std::cout << m_number << std::endl;
}

const Increment &operator++(Increment &obj)
{
    obj.m_number++;
    return obj;
}
