#include "Plane.h"
#include <iostream>

Plane::Plane(int id, std::string name) : Aircraft(id, name)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Plane::~Plane()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}