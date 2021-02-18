#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(int)
{
    std::cout << "Nondefault vehicle constructor" << std::endl;
}

void Vehicle::drive()
{
    std::cout << "Driving..." << std::endl;
}

void Vehicle::turnOn()
{
    std::cout << "Vehicle is starting up.." << std::endl;
}

void Vehicle::turnOff()
{
    std::cout << "Vehicle is shutting down.." << std::endl;
}
