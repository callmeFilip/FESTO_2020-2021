#include "Long.h"
#include <iostream>
Long::Long(long val) : m_value(val) {}

void Long::print() const
{
    std::cout << m_value << std::endl;
}

int main()
{

    Long number(15l);

    number.print();

    return 0;
}