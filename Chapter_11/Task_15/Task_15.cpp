#include "Turtle.h"
#include <iostream>

Leg::Leg(int count) : m_count(count)
{
    std::cout << "Leg constructor called!" << std::endl;
}
Leg::Leg(Leg &obj) : m_count(obj.m_count)
{
    std::cout << "Leg copy-constructor called!" << std::endl;
}

void Turtle::print() const
{
    std::cout << m_age << std::endl;
}

int main()
{
    Turtle obj1;
    Turtle obj2 = obj1; // no errors, this proves the bitcopy and the default copy-constructor

    obj2.print(); // this proves that copy constructor has successfully copied the content of obj1 to obj2
                  // constructor is called only 4 times for 2 objects with 4 legs each ( 2 * 4 = 8)
                  // and copy-constructor is called for the copying

    return 0;
}
