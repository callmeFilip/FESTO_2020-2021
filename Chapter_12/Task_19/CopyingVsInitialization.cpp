//: C12:CopyingVsInitialization.cpp
#include <iostream>

class Fi
{
public:
    Fi()
    {
        std::cout << "Inside constructor Fi" << std::endl;
    }
};
class Fee
{
public:
    Fee(int)
    {
        std::cout << "Inside int constructor Fee" << std::endl;
    }
    Fee(const Fi &)
    {
        std::cout << "Inside copy-constructor Fee" << std::endl;
    }
};
int main()
{
    // Warnings can be ignored
    Fee fee = 1; // Fee(int)
    Fee fee2(1); // Same constructor call as for the previous line
    Fi fi;
    Fee fum = fi; // Fee(Fi)
    Fee fum2(fi); // Same constructor call as for the previous line

    return 0;
} ///:~
