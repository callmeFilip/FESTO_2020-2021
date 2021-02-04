#include <iostream>

void function(char &text)
{
    text = 'a';
}

int main()
{
    char a = 121;
    std::cout << a << std::endl;

    function(a);

    std::cout << a << std::endl;

    return 0;
}
