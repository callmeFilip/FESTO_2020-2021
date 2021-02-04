#include <iostream>
void increment(int **arg)
{
    (*arg)++;
}

void increment(int *&arg)
{
    arg++;
}

int main()
{
    int i = 47;
    int *ip = &i;
    std::cout << (long)ip << std::endl;

    increment(&ip);
    std::cout << (long)ip << std::endl;

    increment(ip);
    std::cout << (long)ip << std::endl;
}