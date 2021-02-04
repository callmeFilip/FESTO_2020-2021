#include "DoubleClass.h"
#include <iostream>

#ifdef FIX

DoubleClass::DoubleClass(DoubleClass &other)
{
    m_storage = new double(*(other.m_storage));
}

#endif

DoubleClass::DoubleClass(double value)
{
    m_storage = new double(value);
}

DoubleClass::~DoubleClass()
{
    std::cout << *m_storage << std::endl;

    *m_storage = -(1.0);

    delete m_storage;
    m_storage = 0;
}

void DoubleClass::doSomething() {}

void function(DoubleClass obj)
{
    obj.doSomething();
}

int main()
{
    DoubleClass doubleNumber(2.5);

    function(doubleNumber);

    return 0;
}
