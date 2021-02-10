#include "Increment.h"

void Increment::print(std::ostream &os) const
{
    os << m_number << std::endl;
}

const Increment operator+(const Increment &left, const Increment &right)
{
    return Increment(left.m_number + right.m_number);
}

const Increment operator-(const Increment &left, const Increment &right)
{
    return Increment(left.m_number - right.m_number);
}
