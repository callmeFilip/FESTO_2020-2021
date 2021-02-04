#include <iostream>

int function(int val)
{
    return ++val;
}

int main()
{
    int number = 10;
    number = function(number);

    return 0;
}