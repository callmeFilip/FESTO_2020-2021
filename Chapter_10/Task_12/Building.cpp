#include <iostream>
#include "Building.h"

Building::Building(int height_new_value)
    : m_height(height_new_value) {}

void Building::setHight(int height_value)
{
    m_height = height_value;
}

void Building::print()
{
    std::cout << m_height << std::endl;
}
