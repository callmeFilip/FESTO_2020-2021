#include "Simple.h"
#include <iostream>

Simple::Simple()
{
    std::cout << "Simple class constructor called!" << std::endl;
}
Simple::~Simple()
{
    std::cout << "Simple class destructor called!" << std::endl;
}

int main()
{
    Simple object;

    return 0;
}