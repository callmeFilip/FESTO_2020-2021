#include "fibonacci.cpp"
#include <iostream>
int main()
{
    std::cout << "doubles: " << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << fibonacci<double>(i) << std::endl;
    }
    std::cout << "sizeof(double) = " << sizeof(fibonacci<double>(1)) << std::endl;

    std::cout << "floats: " << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << fibonacci<float>(i) << std::endl;
    }
    std::cout << "sizeof(float) = " << sizeof(fibonacci<float>(1)) << std::endl;

    return 0;
}
