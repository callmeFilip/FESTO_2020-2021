#include "Dummy.h"
#include <iostream>
int main()
{
    Dummy *obj = new Dummy();

    delete obj;

    std::cout << "-----------" << std::endl;

    Dummy *objArr = new Dummy[3];
    delete[] objArr;

    return 0;
}

// I know that it is bad practise to delete void*, since it does not know
// which destructor to call, but despite the warning, it works fine and
// I am confused.
