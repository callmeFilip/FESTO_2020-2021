#include "Edelweiss.h"
#include <iostream>

Edelweiss::Edelweiss(std::string name) : Plant(name)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Edelweiss::~Edelweiss()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}
