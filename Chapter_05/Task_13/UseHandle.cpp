//: C05:UseHandle.cpp
//{L} Handle
// Use the Handle class
#include "Handle.h"
#include <iostream>

int main()
{
    Handle u;
    u.initialize();
    std::cout << u.read() << std::endl;
    u.change(1);
    u.cleanup();
}
//output 1: 0

//*changed*
/*
from:
    struct Handle::Cheshire
{
    int i;
    int b;
};
to:
    struct Handle::Cheshire
{
    int i;
};
*/
/*recompiled Handle.cpp only*/

/*
used commands:
g++ -c -Wall -g Handle.cpp
g++ -c -Wall -g UseHandle.cpp
g++ -o a.exe Handle.o UseHandle.o

change

g++ -c -Wall -g Handle.cpp
g++ -o a.exe Handle.o UseHandle.o

*/
