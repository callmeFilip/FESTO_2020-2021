#include <iostream>

int main()
{
    int X = 2,
        Y = 4,
        Z = 3,
        A = 0;

    A = X + Y - 2 / 2 + Z;
    std::cout << A << "\n";

    A = X + (Y - 2) / (2 + Z);
    std::cout << A << "\n";

    return 0;
}
