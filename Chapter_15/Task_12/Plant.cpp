#include "Plant.h"
#include <iostream>

int Plant::m_currentId = 0;

Plant::Plant(std::string type) : m_id(m_currentId++), m_type(type)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Plant::~Plant()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Plant::grow() const
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Plant::photosynthesis() const
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}
