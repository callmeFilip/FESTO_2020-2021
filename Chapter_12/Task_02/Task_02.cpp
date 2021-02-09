#include "Increment.h"

int main()
{
    Increment obj(1), obj2(22);
    Increment result = obj + obj2; // automatic copy-constructor generation

    result.print(std::cout);

    return 0;
}
