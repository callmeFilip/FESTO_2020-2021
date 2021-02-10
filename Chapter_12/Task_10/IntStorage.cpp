#include <iostream>
#include "IntStorage.h"

void IntStorage::print() const
{
    std::cout << m_number << std::endl;
}

const IntStorage IntStorage::operator++(int dummy)
{
    std::cout << "Dummy value for operator++: " << dummy << std::endl;

    IntStorage result(m_number);
    m_number++;

    return result;
}

const IntStorage IntStorage::operator--(int dummy)
{
    std::cout << "Dummy value for operator--: " << dummy << std::endl;

    IntStorage result(m_number);
    m_number--;

    return result;
}
