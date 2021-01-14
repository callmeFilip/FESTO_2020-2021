#include <iostream>

typedef float (*ptr_floatFunc)(char);

float floatFunction(char n_symbol)
{
    std::cout << 1.0f << std::endl;

    return 1.0f;
}

ptr_floatFunc intFunction(int n_number)
{
    float (*ptr_floatFunc)(char);

    ptr_floatFunc = floatFunction;

    return ptr_floatFunc;
}

int main()
{

    ptr_floatFunc (*funcPtr)(int);

    funcPtr = intFunction;

    std::cout << (*funcPtr(2))('d') << std::endl;

    return 0;
}
