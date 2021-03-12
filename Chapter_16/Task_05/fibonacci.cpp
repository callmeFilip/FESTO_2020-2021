#include "require.h"

template <class T>
T fibonacci(int n)
{
    const int sz = 100;

    require(n < sz);

    static T f[sz]; // Initialized to zero

    f[0] = f[1] = (T)1;

    // Scan for unfilled array elements:
    int i;
    for (i = 0; i < sz; i++)
    {
        if (f[i] == 0)
        {
            break;
        }
    }

    while (i <= n)
    {
        f[i] = f[i - 1] + f[i - 2];
        i++;
    }

    return f[n];
} ///:~
