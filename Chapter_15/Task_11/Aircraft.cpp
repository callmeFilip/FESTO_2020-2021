#include <iostream>
#include "Aircraft.h"

Aircraft::Aircraft(int id, std::string name) : m_id(id), m_name(name), m_isAvailable(true), m_fuel(100)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Aircraft::~Aircraft()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

bool Aircraft::takeOff()
{
    if (!m_isAvailable)
    {
        std::cout << m_name << " is already in a flight!" << std::endl;
        return false;
    }

    if (m_fuel < 10)
    {
        std::cout << "Not enough fuel for " << m_name << " !" << std::endl;
        return false;
    }
    m_fuel -= 10;
    m_isAvailable = false;

    return true;
}

bool Aircraft::land()
{
    if (m_isAvailable)
    {
        std::cout << m_name << " is not in a flight!" << std::endl;
        return false;
    }

    return m_isAvailable = true;
}

void Aircraft::refuel()
{
    m_fuel = 100;
}

bool Aircraft::isAvailable() const
{
    return m_isAvailable;
}

int Aircraft::currentFuel() const
{
    return m_fuel;
}

int Aircraft::getId() const
{
    return m_id;
}

void Aircraft::printInformation() const
{
    std::cout << "       ID: " << m_id << std::endl;
    std::cout << "     Name: " << m_name << std::endl;
    std::cout << "Available: " << m_isAvailable << std::endl;
    std::cout << "     Fuel: " << m_fuel << std::endl;
}
