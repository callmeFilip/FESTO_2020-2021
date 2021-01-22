#include <iostream>
int function(double n_number)
{
    return 12;
}

typedef int (*ptr_func_t)(double);

int main()
{
    ptr_func_t ptr_func = function;

    std::cout << ptr_func(2.4);

    return 0;
}
