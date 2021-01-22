#include <iostream>

typedef float (*ptr_floatFunc_t)(char);
typedef ptr_floatFunc_t (*funcPtr_t)(int);

float floatFunction(char n_symbol)
{
    std::cout << n_symbol << std::endl;

    return 1.0f;
}

ptr_floatFunc_t intFunction(int n_number)
{
    ptr_floatFunc_t ptr_floatFunc = floatFunction;

    std::cout << n_number << std::endl;

    return ptr_floatFunc;
}

int main()
{

    funcPtr_t funcPtr;

    funcPtr = intFunction;

    std::cout << funcPtr(2)('d') << std::endl; //300 iq moves

    return 0;
}
