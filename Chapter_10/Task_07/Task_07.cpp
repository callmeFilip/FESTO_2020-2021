#include <iostream>
#include "Header.h"

Monitor::~Monitor()
{
    std::cout << "Calling exit" << std::endl;
    exit(12);
}

Monitor obj;

int main()
{
    std::cout << "in main" << std::endl;
    return 0;
}
