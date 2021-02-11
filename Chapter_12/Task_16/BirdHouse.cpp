#include "BirdHouse.h"
#include <assert.h>

std::ostream &operator<<(std::ostream &os, const BirdHouse &obj)
{
    return (os << "BirdHouse objects: \n"
               << obj.m_BirdObj << "\n"
               << *obj.m_BirdPtr << "\n"
               << obj.m_BirdRef << "\n");
}

BirdHouse::BirdHouse(Bird BirdObj, Bird *BirdPtr, Bird &BirdRef)
    : m_BirdObj(BirdObj), m_BirdPtr(BirdPtr), m_BirdRef(BirdRef) { m_num = 0; }

BirdHouse::BirdHouse(int num) : m_num(num), m_BirdPtr(nullptr), m_BirdRef(m_BirdObj) {} // !<--

void BirdHouse::printNum() const
{
    std::cout << m_num << std::endl;
}

const BirdHouse operator+(const BirdHouse &left, const BirdHouse &right)
{
    return BirdHouse(left.m_num + right.m_num);
}

const BirdHouse operator-(const BirdHouse &left, const BirdHouse &right)
{
    return BirdHouse(left.m_num - right.m_num);
}

const BirdHouse operator*(const BirdHouse &left, const BirdHouse &right)
{
    return BirdHouse(left.m_num * right.m_num);
}

const BirdHouse operator/(const BirdHouse &left, const BirdHouse &right)
{
    assert(right.m_num != 0);

    return BirdHouse(left.m_num / right.m_num);
}
