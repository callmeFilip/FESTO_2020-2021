#include <iostream>
#include "Header.h"

//initializing Building::Room
Building::Room::Room(int size)
{
    m_size = size;
}

int Building::Room::m_getSize()
{
    return m_size;
}

//initializing Building
Building::Building(int roomSize)
{
    m_LivingRoom = new Room(roomSize);
}
Building::~Building()
{
    delete m_LivingRoom;
}

int main()
{
    Building house(23);
    std::cout << house.m_LivingRoom->m_getSize() << std::endl;
    return 0;
}