#include <iostream>
#include "Car.h"

Car::Car()
{
    m_speed = 0;
    m_horsePower = 0;
}

Car::Car(int m_speed, int m_horsePower)
{
    this->m_speed = m_speed;
    this->m_horsePower = m_horsePower;
    this->printData();
}

void Car::printData()
{
    std::cout << "This car has: " << m_horsePower << " hp and its max speed is: " << m_speed << std::endl;
}
