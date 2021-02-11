#include "Dummy.h"

Dummy &Dummy::operator=(const Dummy &other)
{
    if (this == &other)
    {
        return *this;
    }

    m_str = other.m_str;
    m_ch = other.m_ch;

    return *this;
}

void Dummy::print() const
{
    std::cout << "str = " << m_str << "\nch = " << m_ch << std::endl;
}
