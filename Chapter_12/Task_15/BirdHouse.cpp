#include "BirdHouse.h"
std::ostream &operator<<(std::ostream &os, const BirdHouse &obj)
{
    return (os << "BirdHouse objects: \n"
               << obj.m_BirdObj << "\n"
               << *obj.m_BirdPtr << "\n"
               << obj.m_BirdRef << "\n");
}

BirdHouse::BirdHouse(Bird BirdObj, Bird *BirdPtr, Bird &BirdRef)
    : m_BirdObj(BirdObj), m_BirdPtr(BirdPtr), m_BirdRef(BirdRef) {}
