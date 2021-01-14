#include <iostream>

enum Colors
{
    red,
    blue,
    green,
    yellow,
    purple,
    magenta
};

int main()
{
    for (int i = red; i <= magenta; i++)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
