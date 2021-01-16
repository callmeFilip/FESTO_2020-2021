#include <ctime>
#include <iostream>

inline int f1(int a, int b)
{
    int c = a;

    for (int i = 0; i < 10; i++)
    {
    }
    return c;
}

int f2(int a, int b)
{
    int c = a;

    for (int i = 0; i < 10; i++)
    {
    }
    return c;
}

int main()
{
    //inline function
    std::clock_t end;
    std::clock_t duration;
    std::clock_t start;
    start = clock();
    for (int i = 0; i < 10000000; i++)
    {
        f1(i, i);
    }

    end = clock();

    duration = end - start;

    std::cout << "Time for f1 execution: " << duration << std::endl;
    //normal function
    start = clock();

    for (int i = 0; i < 10000000; i++)
    {
        f2(i, i);
    }

    end = clock();

    duration = end - start;

    std::cout << "Time for f2 execution: " << duration << std::endl;

    return 0;
}

/*
// It seems like the breaking point
// is around 10 iterations
*/
