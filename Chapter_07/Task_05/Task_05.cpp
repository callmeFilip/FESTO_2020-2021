#include <iostream>

void print(int height, int)
{
    std::cout << "called" << std::endl;
};

int main()
{
    print(2, 3);

    return 0;
}
