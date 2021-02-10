#include <iostream>

#include "Number.h"
int main()
{
    Number n_1(1);
    Number n_2(2);
    Number n_3(5);

    Number result = ((n_1 + n_3) / n_2) * n_2 - n_3; // testing +, -, * and /

    std::cout << result << std::endl;

    result = 15;
    std::cout << result << std::endl; // testing assignment

    int integerNumber = result;
    std::cout << integerNumber << std::endl; // testing automatic type conversation

    return 0;
}
