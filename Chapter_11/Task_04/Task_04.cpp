#include <iostream>

int &function(int *ptr)
{
    ptr++;

    return *ptr;
}

int main()
{
    int a = 10;

    int &result = function(&a);

    std::cout << (long)&a << std::endl;
    std::cout << (long)&result << std::endl;

    return 0;
}