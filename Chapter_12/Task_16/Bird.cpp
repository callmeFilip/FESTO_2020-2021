#include "Bird.h"
#include <assert.h>
int Bird::m_count = 0;

Bird::Bird(int num)
    : m_num(num)
{
    m_name = "Bird #" + std::to_string(++m_count);
}

Bird::Bird(const Bird &other)
{
    m_name = other.m_name;
    m_count = other.m_count;
}

void Bird::printNum() const
{
    std::cout << m_num << std::endl;
}

Bird &Bird::operator=(const Bird &other)
{
    if (this != &other)
    {
        m_name = other.m_name;
        m_count = other.m_count;
    }
    return *this;
}

const Bird operator+(const Bird &left, const Bird &right)
{
    return Bird(left.m_num + right.m_num);
}

const Bird operator-(const Bird &left, const Bird &right)
{
    return Bird(left.m_num - right.m_num);
}

const Bird operator*(const Bird &left, const Bird &right)
{
    return Bird(left.m_num * right.m_num);
}

const Bird operator/(const Bird &left, const Bird &right)
{
    assert(right.m_num != 0);

    return Bird(left.m_num / right.m_num);
}

std::ostream &operator<<(std::ostream &os, const Bird &obj)
{
    return os << obj.m_name;
}
