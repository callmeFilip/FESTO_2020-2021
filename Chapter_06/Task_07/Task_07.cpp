#include <iostream>

const size_t LENGTH = 4;

void printArray(double *arr, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}

int main()
{
    double doubleArray[LENGTH] = {17.1, 7};
    printArray(doubleArray, sizeof(doubleArray) / sizeof(double));

    double doubleArray2[] = {3.8, 3, 5, 2};
    printArray(doubleArray2, sizeof(doubleArray2) / sizeof(double));

    return 0;
}