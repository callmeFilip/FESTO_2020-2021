#include <iostream>
#include "Header.h"

namespace
{
    void print()
    {
        std::cout << "In Task_17.cpp" << std::endl;
    }

} // unnamed namespace

int main()
{
    print();

    return 0;
}
/**
 *  There is no linker error, because
 *  an unnamed space is unique for each 
 *  translation unit.
 *  If we delete the print definition here,
 *  we will get linker error instead of the
 *  print() in Header.cpp.
*/
