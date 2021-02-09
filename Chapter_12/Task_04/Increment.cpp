#include "Increment.h"

void Increment::print(std::ostream &os) const
{
    os << m_number << std::endl;
}

const Increment Increment::operator+(const Increment &other) const
{
    return Increment(m_number + other.m_number);
}

// Increments
// Prefix
const Increment &Increment::operator++()
{
    m_number++;
    return *this;
}

// Postfix
const Increment Increment::operator++(int)
{
    Increment before(m_number);
    m_number++;

    return before;
}

// Decrements
// Prefix
const Increment &Increment::operator--()
{
    m_number--;
    return *this;
}

// Postfix
const Increment Increment::operator--(int)
{
    Increment before(m_number);
    m_number--;

    return before;
}
