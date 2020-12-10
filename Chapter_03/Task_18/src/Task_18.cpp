#include <iostream>
#define PRINTAND(EXP) #EXP << ": " << (long)&EXP << std::endl
void printArr(int *n_firstArr, const int n_firstArr_size)
{
    for (int i = 0; i < n_firstArr_size; i++)
    {
        std::cout << n_firstArr[i] << std::endl;
    }

    std::cout << "\n\n\n\n"
              << std::endl;
}

int GLOBAL_YEARS = 2020;
int GLOBAL_MONTHS = 12;
int GLOBAL_DAYS = 10;

int main()
{
    int height = 100;
    int width = 500;
    int galonsPerMile = 200;

    std::cout << PRINTAND(height)
              << PRINTAND(width)
              << PRINTAND(galonsPerMile)
              << PRINTAND(GLOBAL_YEARS)
              << PRINTAND(GLOBAL_MONTHS)
              << PRINTAND(GLOBAL_DAYS);

    /*    const int firstArr_size = 10;
    const int secondArr_size = 5;

    int firstArr[firstArr_size];
    char ch = 'a';
    int secondArr[secondArr_size];

    for (int i = 0; i < firstArr_size; i++)
    {
        firstArr[i] = 0;

        if (i < secondArr_size)
        {
            secondArr[i] = 0;
        }

    }

    std::cout <<(long)&ch << "\n" << (long)&firstArr << "\n" << (long)&secondArr << "\n";

    printArr(firstArr, firstArr_size);
    printArr(secondArr, secondArr_size);

    secondArr[12] = 1; // nqmam si i na ideq zashto secondArr e zapisan predi firstArr v pametta na moqt PC

    printArr(firstArr, firstArr_size);
    printArr(secondArr, secondArr_size);
*/

    return 0;
}
