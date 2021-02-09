#include "Increment.h"

void Increment::print(std::ostream &os) const
{
    os << m_number << std::endl;
}

const Increment Increment::operator+(const Increment &other) const
{
    return Increment(m_number + other.m_number);
}
