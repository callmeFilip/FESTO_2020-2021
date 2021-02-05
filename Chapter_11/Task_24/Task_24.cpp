#include <iostream>
#include "Pricetag.h"

PriceTag::PriceTag(double price) : m_price(price) {}

void PriceTag::print() const
{
    std::cout << m_price << std::endl;
}

typedef double PriceTag::*pointerToMember_t;
typedef void (PriceTag::*pointerToMethod_t)() const;

int main()
{
    pointerToMember_t ptr = &PriceTag::m_price;
    pointerToMethod_t fPtr = PriceTag::print;

    PriceTag obj;
    PriceTag *objPtr = &obj;

    (obj.*ptr) = 15;
    (obj.*fPtr)();
    (objPtr->*ptr) = 3;
    (objPtr->*fPtr)();

    return 0;
}
