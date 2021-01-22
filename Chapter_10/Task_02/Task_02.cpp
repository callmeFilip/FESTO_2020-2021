#include <iostream>

int fibbonaciSequence(bool reset = false)
{

    static int previousNum = 0;
    static int nextNum = 1;
    static bool order = true;

    if (reset)
    {
        previousNum = 0;
        nextNum = 1;
        order = true;
    }

    if (order)
    {
        previousNum += nextNum;
        order = false;
        return previousNum;
    }
    else
    {
        nextNum += previousNum;
        order = true;
        return nextNum;
    }
}

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << fibbonaciSequence() << std::endl;
    }

    std::cout << "reset\n"
              << fibbonaciSequence(true) << std::endl;

    for (int i = 0; i < 9; i++)
    {
        std::cout << fibbonaciSequence() << std::endl;
    }

    return 0;
}
