#include <iostream>
int main()
{

    int y;
    int &r = y;

    std::cout << r << std::endl;

    const int &q = 12;

    std::cout << q << std::endl;

    int x = 0;
    int &a = x;

    std::cout << a << std::endl;

    return 0;
}
