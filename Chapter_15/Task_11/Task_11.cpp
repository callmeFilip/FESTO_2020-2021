#include "Helicopter.h"
#include "Plane.h"
#include "Tower.h"
#include <iostream>

const int SIZE = 5;

void printInfo(Tower &t)
{
    for (int i = 1; i < SIZE + 1; i++)
    {
        t.printAircraftInformation(i);
        std::cout << "-----------" << std::endl;
    }
}

int main()
{
    std::cout << "Creating.. " << std::endl;
    Aircraft *arr[SIZE] = {new Plane(1, "AirBuzz #532"), new Plane(2, "AirBuzz #214"), new Plane(3, "AirBuzz #754"), new Helicopter(4, "Helly #32"), new Helicopter(5, "Helly #75")};
    Tower t;

    std::cout << "Adding.." << std::endl;
    for (int i = 0; i < SIZE; i++)
    {
        t.addAircraft(arr[i]);
    }

    printInfo(t);

    std::cout << "Sending.." << std::endl;
    for (int i = 1; i < SIZE + 1; i++)
    {
        t.sendAircraft(i);
    }

    printInfo(t);

    std::cout << "Landing.." << std::endl;
    for (int i = 1; i < SIZE + 1; i++)
    {
        t.landAircraft(i);
    }

    printInfo(t);

    std::cout << "Refueling.." << std::endl;
    for (int i = 1; i < SIZE + 1; i++)
    {
        t.refuelAircraft(i);
    }

    printInfo(t);

    std::cout << "Removing.." << std::endl;
    for (int i = 0; i < SIZE; i++)
    {
        t.removeAircraft();
    }

    return 0;
}
