//: C05:UseHandle.cpp
//{L} Handle
// Use the Handle class
#include <iostream>
#include "Handle.h"

int main()
{
    Handle u;
    std::cout << u.read() << std::endl;
    u.change(1);
    std::cout << u.read() << std::endl;

} ///:~