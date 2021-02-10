#include "CharHolder.h"

std::ostream &operator<<(std::ostream &os, const CharHolder &obj)
{
    os << obj.m_storage;
    return os;
}

std::istream &operator>>(std::istream &is, CharHolder &obj)
{
    is >> obj.m_storage;
    return is;
}
