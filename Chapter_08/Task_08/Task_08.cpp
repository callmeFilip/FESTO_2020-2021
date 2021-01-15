#include <iostream>
int main()
{
    const long *sideA = nullptr;
    long const *sideB = nullptr;
    long longArray[] = {2, 3, 4};

    sideA = longArray;
    std::cout << *sideA << std::endl;

    sideA++;
    std::cout << *sideA << std::endl;

    //*sideA = 4; //error: assignment of read-only location '* sideA'

    return 0;
}
