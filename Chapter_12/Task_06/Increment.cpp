#include "Increment.h"

const Increment Increment::operator+(const Increment &other) const
{
    return Increment(m_number + other.m_number);
}

std::ostream &operator<<(std::ostream &os, const Increment &obj)
{
    os << obj.m_number;
    return os;
}
