#include <iostream>
#include "Header.h"
#define PRINTVARIABLE(EXP) std::cout << #EXP << ": " << (long)&EXP << std::endl;

void Tiger::printMap()
{
    PRINTVARIABLE(name)
    PRINTVARIABLE(color)
    PRINTVARIABLE(kennel)
    PRINTVARIABLE(age)
    PRINTVARIABLE(speed)
    PRINTVARIABLE(horsepower)
}

int main()
{
    Tiger lary;

    lary.printMap();

    return 0;
}