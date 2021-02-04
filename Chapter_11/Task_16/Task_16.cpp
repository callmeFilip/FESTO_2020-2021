#include <iostream>
#include "Velociraptor.h"
Velociraptor::Velociraptor(Velociraptor &other) : m_data(other.m_data)
{
    std::cout << "Copy-Constructor called" << std::endl;
}

Velociraptor getFakeDragon()
{
    Velociraptor result;
    return result;
}

Velociraptor sendFakeDragon(Velociraptor obj)
{
    return obj;
}

int main()
{
    Velociraptor dragon;
    getFakeDragon();
    sendFakeDragon(dragon);
    return 0;
}
