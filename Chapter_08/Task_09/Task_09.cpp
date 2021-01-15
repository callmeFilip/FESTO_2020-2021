#include <iostream>
const int SIZE = 3;

void printArray(double *doubleArray)
{
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << doubleArray[i] << "\n";
    }
    std::cout << std::endl;
}

int main()
{
    double doubleArray[SIZE] = {2.3, 2.4, 2.5};
    double *const ptrArray = doubleArray;

    printArray(doubleArray);

    ptrArray[1] = 6.0; //modifying content the pointer is pointing to..

    printArray(doubleArray);

    //ptrArray++; // error: increment of read-only variable 'ptrArray'

    return 0;
}
