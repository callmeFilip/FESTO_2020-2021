#include <iostream>

int main()
{

    int X = 2;
    int Y = 4;
    int Z = 3;
    int A = 0;
    
    A = X + Y - 2 / 2 + Z;

    std::cout << A << "\n";

    A = X + (Y - 2) / (2 + Z);

    std::cout << A << "\n";
    
    return 0;

}
