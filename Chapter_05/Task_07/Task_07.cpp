#include "Header.h"
#include <iostream>

//hen initialization
void Hen::display()
{
    std::cout << "Rooms in nest: " << nest.rooms << std::endl;
}

void Hen::Nest::display()
{
    std::cout << "Size of egg: " << egg.size << std::endl;
}

Hen::Nest::Nest()
{
    rooms = 1;
}

void Hen::Nest::Egg::display()
{
    std::cout << "Egg" << std::endl;
}

Hen::Nest::Egg::Egg()
{
    size = 2;
}

int main()
{
    Hen hen;
    Hen::Nest nest;
    Hen::Nest::Egg egg;

    hen.display();
    nest.display();
    egg.display();

    return 0;
}