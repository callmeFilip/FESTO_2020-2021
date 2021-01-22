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
        return 0;
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

void printFibbonaci(int count)
{
    if (count <= 0)
    {
        return;
    }

    for (int i = 0; i < count; i++)
    {
        std::cout << fibbonaciSequence() << std::endl;
    }

    std::cout << "-------------------------------" << std::endl;
}

int main(int argc, char const *argv[])
{
    printFibbonaci(10);

    fibbonaciSequence(true);

    printFibbonaci(10);

    return 0;
}
