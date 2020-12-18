#include "Hen.h"
#include <iostream>

void Hen::display()
{
    std::cout << "Hen" << std::endl;
}

void Hen::Nest::display()
{
    std::cout << "Nest" << std::endl;
}

void Hen::Nest::Egg::display()
{
    std::cout << "Egg" << std::endl;
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