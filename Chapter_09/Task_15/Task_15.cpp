#include <iostream>

#include "A.h"
#include "B.h"
#include "Cpptime.h"

inline A::A()
{
    std::cout << "Class A created!";
}

inline B::B()
{
    //do nothing
}

int main()
{
    Time start;
    B array[10000]; //warning can be ignored
    Time end;

    std::cout << std::endl;
    std::cout << "start = " << start.ascii();
    std::cout << "end = " << end.ascii();
    std::cout << "delta = " << end.delta(&start) << std::endl;

    return 0;
}

// With inline constructors:
// delta = 9
// delta = 5
// delta = 8
// delta = 8

// With non-inline constructors:
// delta = 6
// delta = 5
// delta = 5
// delta = 9

// I think that this test is irrelevant, because
// the PC remembers this program and optimizes it too much
// so after few tries both functuions have delta = 4
// and after resets both functions have delta = 9
