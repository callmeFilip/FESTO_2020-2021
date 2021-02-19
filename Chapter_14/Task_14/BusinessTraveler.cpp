#include "BusinessTraveler.h"
#include <iostream>

BusinessTraveler::BusinessTraveler() : Traveler("undefined"), pager("undefined")
{
    std::cout << "BusinessTraveler::BusinessTraveler()" << std::endl;
}

BusinessTraveler::BusinessTraveler(std::string value) : Traveler(value), pager(value)
{
    std::cout << "BusinessTraveler::BusinessTraveler(std::string)" << std::endl;
}

BusinessTraveler::BusinessTraveler(const BusinessTraveler &other) : Traveler(other), pager(other.pager)
{
    std::cout << "BusinessTraveler::copy-constructor" << std::endl;
}

BusinessTraveler &BusinessTraveler::operator=(const BusinessTraveler &other)
{
    std::cout << "BusinessTraveler::operator=" << std::endl;
    Traveler::operator=(other);
    pager = other.pager;

    return *this;
}

void BusinessTraveler::print() const
{
    std::cout << "BusinessTraveler: " << pager.getStr() << std::endl;
    std::cout << "Pager: " << pager.getStr() << std::endl;
}
