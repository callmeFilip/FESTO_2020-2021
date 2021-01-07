#include "Simple.h"
#include <iostream>

Simple::Simple(int newWidth)
{
    width = newWidth;
    std::cout << "Width: " << width << "\n"
              << "Simple class constructor called!" << std::endl;
}
Simple::~Simple()
{
    std::cout << "Width: " << width << "\n"
              << "Simple class destructor called!" << std::endl;
}

int main()
{
    Simple shop(3);

    {
        Simple house(5);
    }

    return 0;
}