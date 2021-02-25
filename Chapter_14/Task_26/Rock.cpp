#include "Rock.h"
#include <iostream>

Rock::Rock()
{
    std::cout << "Rock default constructor" << std::endl;
}
Rock::Rock(const Rock &other)
{
    std::cout << "Rock copy-constructor" << std::endl;
}

Rock &Rock::operator=(const Rock &other)
{
    if (this == &other)
    {
        return *this;
    }
    std::cout << "Rock operator=" << std::endl;

    return *this;
}

Rock::~Rock()
{
    std::cout << "Rock destructor" << std::endl;
}
