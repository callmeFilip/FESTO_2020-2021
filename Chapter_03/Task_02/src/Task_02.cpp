#include <iostream>
#include <math.h>

int main()
{
    bool isPrime;
    const unsigned int numberRange = 200;

    for (int i = 2; i < numberRange; i++)
    {
        isPrime = true;
        unsigned int iterator_end = sqrt(i);

        for (int j = 2; j <= iterator_end; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
