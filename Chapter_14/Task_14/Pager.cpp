#include "Pager.h"
#include <iostream>

Pager::Pager(std::string value) : str(value)
{
    std::cout << "Pager::Pager(std::string)" << std::endl;
}

Pager::Pager(const Pager &other)
{
    std::cout << "Pager::copy-constructor" << std::endl;
    str = other.str;
}

Pager &Pager::operator=(const Pager &other)
{
    std::cout << "Pager::operator=" << std::endl;
    str = other.str;

    return *this;
}

std::string Pager::getStr() const
{
    return str;
}
