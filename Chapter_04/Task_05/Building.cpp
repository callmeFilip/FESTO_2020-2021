#include "Building.h"
#include <iostream>
Building::Building()
{
    m_height = 0;
}

void Building::setHeight(int n_height)
{
    m_height = n_height;
}

void Building::printHeight(void)
{
    std::cout << m_height << std::endl;
}
