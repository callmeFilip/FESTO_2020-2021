#include "Greenhouse.h"
#include <iostream>
#include <assert.h>
Greenhouse::Greenhouse(int volume) : Building(volume)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Greenhouse::~Greenhouse()
{
    const size_t VSIZE = m_plants.size();

    for (size_t i = VSIZE - 1; i < VSIZE; i--)
    {
        delete m_plants[i];
        m_plants.pop_back();
    }

    m_plants.shrink_to_fit();
}

void Greenhouse::addPlant(Plant *obj)
{
    m_plants.push_back(obj);
}

Plant *Greenhouse::popPlant()
{
    Plant *obj = m_plants.back();
    m_plants.pop_back();

    return obj;
}

Plant *Greenhouse::operator[](int index)
{
    const int VSIZE = m_plants.size();
    if (index < 0 || index >= VSIZE)
    {
        assert(false);
    }
    return m_plants[index];
}
