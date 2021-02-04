#include <iostream>
#include "Velociraptor.h"
Velociraptor::Velociraptor(const Velociraptor &other, int data) : m_data(data)
{
    std::cout << "Copy-Constructor called" << std::endl;

    std::cout << "this: " << m_data << std::endl;
    std::cout << "other: " << other.m_data << std::endl;
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
    Velociraptor dragon2 = getFakeDragon();
    sendFakeDragon(dragon2);

    return 0;
}
