#include "Increment.h"

int main()
{
    Increment obj(1), obj2(22), obj3(10);
    Increment result = obj + obj2 - obj3; // automatic copy-constructor generation

    result.print(std::cout);

    return 0;
}
