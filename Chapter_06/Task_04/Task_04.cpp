#include "Simple.h"
#include <iostream>

Simple::Simple(int newWidth)
{
    width = newWidth;
    std::cout << "Simple class constructor called!" << std::endl;
}
Simple::~Simple()
{
    std::cout << "Simple class destructor called!" << std::endl;
}
void Simple::printWidth()
{
    std::cout << "Width: " << width << std::endl;
}

int main()
{
    {
        Simple object(5);
        goto jump1;
        object.printWidth();
    }

jump1:
    return 0;
}