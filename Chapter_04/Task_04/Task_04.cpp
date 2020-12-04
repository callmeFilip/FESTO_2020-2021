#include <iostream>
#include "Building.h"

void setHeight(Building *building, int n_height)
{
    building->m_height = n_height;
}

void printHeight(Building *building)
{
    std::cout << building->m_height << std::endl;
}

int main()
{
    Building block;

    setHeight(&block, 25);

    printHeight(&block);

    return 0;
}
