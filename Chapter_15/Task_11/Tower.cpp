#include "Tower.h"
#include <iostream>

void Tower::addAircraft(Aircraft *aircraft)
{
    m_aircrafts.push_back(aircraft);
}

void Tower::removeAircraft()
{
    if (m_aircrafts.size() > 0)
    {
        m_aircrafts.pop_back();
    }
    else
    {
        std::cout << "invalid index" << std::endl;
    }
}

Tower::~Tower()
{
    const size_t VSIZE = m_aircrafts.size();

    for (size_t i = VSIZE - 1; i < VSIZE; i--)
    {
        delete m_aircrafts[i];
        m_aircrafts.pop_back();
    }

    m_aircrafts.shrink_to_fit();
}

Aircraft *Tower::findAircraft(int id) const
{
    const size_t VSIZE = m_aircrafts.size();

    if (id < 0)
    {
        std::cout << "Invalid id!" << std::endl;
        return 0;
    }

    for (size_t i = 0; i < VSIZE; i++)
    {
        if (m_aircrafts[i]->getId() == id)
        {
            return m_aircrafts[i];
        }
    }

    std::cout << "Aircraft not found! id: " + id << std::endl;
    return 0;
}

void Tower::sendAircraft(int id)
{
    Aircraft *obj = findAircraft(id);

    obj->takeOff();
}

void Tower::landAircraft(int id)
{
    Aircraft *obj = findAircraft(id);
    obj->land();
}

void Tower::refuelAircraft(int id)
{
    Aircraft *obj = findAircraft(id);
    obj->refuel();
}

void Tower::printAircraftInformation(int id) const
{
    Aircraft *obj = findAircraft(id);
    obj->printInformation();
}
