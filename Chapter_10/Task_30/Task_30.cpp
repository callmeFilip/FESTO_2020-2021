#include <iostream>

void function()
{
    const int ARRAYSIZE = 10;

    struct IntStash
    {
        int m_value;

        IntStash(int new_value = 0) : m_value(new_value) {}
    } intArray[ARRAYSIZE];

    for (int i = 0; i < ARRAYSIZE; i++)
    {
        std::cout << intArray[i].m_value << std::endl;
    }
}

int main()
{
    function();

    return 0;
}