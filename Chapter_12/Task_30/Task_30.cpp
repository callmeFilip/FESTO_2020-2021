#include <iostream>
#include "Apple.h" // includes both Apple and Orange

const Orange operator+(const Orange &left, const Orange &right)
{
    return Orange(left.m_data + right.m_data);
}

void Apple::print() const
{
    std::cout << "Apple:" << m_data << std::endl;
}

void Orange::print() const
{
    std::cout << "Orange:" << m_data << std::endl;
}

int main()
{
    Apple apl(1);
    Orange orn(2);

    (apl + orn).print();
    (apl + apl).print();
    (orn + orn).print();
    (orn + apl).print();

    return 0;
}
