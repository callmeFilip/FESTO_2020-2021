//: C11:PmemFunDefinition.cpp
#include <iostream>
class Simple2
{
public:
    int f(float) const { return 1; }
    int f(int, int) const { return 2; }
};

int (Simple2::*fp)(float) const;
int (Simple2::*fp3)(int, int) const;

int (Simple2::*fp2)(float) const = &Simple2::f;

int main()
{
    Simple2 obj;

    fp3 = &Simple2::f;
    fp = &Simple2::f;

    std::cout << (obj.*fp3)(2, 3) << std::endl;
    std::cout << (obj.*fp)(1.2f) << std::endl;
} ///:~

/**
 * The overload resolution is possible due to different
 * name decorations in the assembly translated unit.
*/
