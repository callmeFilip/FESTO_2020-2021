#include "Building.h"
#include <iostream>

int Building::getVolume() const
{
    return m_volume;
}

Building::Building(int volume) : m_volume(volume)
{
    // std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Building::~Building()
{
    // std::cout << __PRETTY_FUNCTION__ << std::endl;
}
