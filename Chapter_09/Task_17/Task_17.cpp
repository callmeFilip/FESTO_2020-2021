#include <iostream>
#include <cstdlib>

#define TRACE(s)                  \
    std::cerr << #s << std::endl, \
        s

void f(int i)
{
    std::cout << i << std::endl;
}

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; i++)
        TRACE(f(i));

    return 0;
}
