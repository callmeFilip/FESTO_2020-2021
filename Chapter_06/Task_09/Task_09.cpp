#include "Simple.h"
#include <iostream>

const size_t ARRSIZE = 3;

Simple::Simple(int newWidth)
{
    width = newWidth;
    std::cout
        << "Simple class constructor called!" << std::endl;
}
Simple::Simple()
{
    width = 0;
}
Simple::~Simple()
{
    std::cout
        << "Simple class destructor called!" << std::endl;
}
void Simple::printWidth()
{
    std::cout << "Width: " << width << std::endl;
}

int main()
{
    Simple firstArr[ARRSIZE] = {Simple(2), Simple(3), Simple(4)};
    Simple secondArr[] = {Simple(1), Simple(2), Simple(3)};

    for (size_t i = 0; i < sizeof(firstArr) / sizeof(Simple); i++)
    {
        firstArr[i].printWidth();
    }

    for (size_t i = 0; i < sizeof(secondArr) / sizeof(Simple); i++)
    {
        secondArr[i].printWidth();
    }

    return 0;
}
