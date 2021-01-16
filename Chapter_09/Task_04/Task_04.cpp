#include <ctime>
#include <iostream>

inline int f1(int a, int b)
{
    int c = a;
    return c;
}

int f2(int a, int b)
{
    int c = a;
    return c;
}

int main()
{
    //inline function
    std::clock_t end;
    std::clock_t duration;
    std::clock_t start;
    start = clock();
    for (int i = 0; i < 100000000; i++)
    {
        f1(i, i);
    }

    end = clock();

    duration = end - start;

    std::cout << "Time for f1 execution: " << duration << std::endl;

    //normal function
    start = clock();

    for (int i = 0; i < 100000000; i++)
    {
        f2(i, i);
    }

    end = clock();

    duration = end - start;

    std::cout << "Time for f2 execution: " << duration << std::endl;

    return 0;
}

/* results in run 1:
// Time for f1 execution: 289
// Time for f2 execution: 323
//
// Time for f1 execution: 300
// Time for f2 execution: 281
//
// Time for f1 execution: 296
// Time for f2 execution: 307
//
// Time for f1 execution: 297
// Time for f2 execution: 321
//
// Time for f1 execution: 309
// Time for f2 execution: 298

//Why inline functions aren't always faster?

*/
