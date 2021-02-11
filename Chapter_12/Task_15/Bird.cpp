#include "Bird.h"

int Bird::m_count = 0;

Bird::Bird()
{
    m_name = "Bird #" + std::to_string(++m_count);
}

std::ostream &operator<<(std::ostream &os, const Bird &obj)
{
    return os << obj.m_name;
}

Bird::Bird(const Bird &other)
{
    m_name = other.m_name;
    m_count = other.m_count;
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
