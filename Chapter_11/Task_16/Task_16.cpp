#include <iostream>
#include "Velociraptor.h"

Velociraptor::Velociraptor(const Velociraptor &other) : m_data(other.m_data)
{
    std::cout << "Copy-Constructor called" << std::endl;
}

Velociraptor getFakeDragon()
{
    Velociraptor result;
    return result;
}

void sendFakeDragon(Velociraptor obj) {}

int main()
{
    Velociraptor dragon2 = 1;
    sendFakeDragon(dragon2);
    Velociraptor dragon1 = getFakeDragon();

    //sendFakeDragon(dragon1);

    return 0;
}
