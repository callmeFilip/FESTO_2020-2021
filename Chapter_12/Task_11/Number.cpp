#include "Number.h"

Number &Number::operator=(const Number &other)
{
    if (this == &other)
    {
        return *this;
    }
    m_number = other.m_number;
    return *this;
}

const Number operator+(const Number &left, const Number &right)
{
    return Number(left.m_number + right.m_number);
}

const Number operator-(const Number &left, const Number &right)
{
    return Number(left.m_number - right.m_number);
}

const Number operator*(const Number &left, const Number &right)
{
    return Number(left.m_number * right.m_number);
}

const Number operator/(const Number &left, const Number &right)
{
    return Number(left.m_number / right.m_number);
}

std::ostream &operator<<(std::ostream &os, const Number &obj)
{
    os << obj.m_number;
    return os;
}
