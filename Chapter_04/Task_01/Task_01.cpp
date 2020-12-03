#include <iostream>
void puts(char *n_text)
{
    std::cout << "function call" << std::endl;
}

int main()
{
    puts("hello");

    return 0;
}
