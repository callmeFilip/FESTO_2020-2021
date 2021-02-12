#include <iostream>
#include <cstring>
#define SIZE 5  // size of array
#define VALUE 1 // value to be set for each element

void setArr(void *n_voidPtr, int n_NumberOfBytes, int n_Value)
{
    char *ptr = static_cast<char *>(n_voidPtr);

    for (int i = 0; i < n_NumberOfBytes; i++)
    {
        ptr[i] = n_Value;
    }
}

int main()
{

    int intArr[SIZE];

    void *voidPtr;

    voidPtr = static_cast<void *>(intArr);

    setArr(voidPtr, SIZE * sizeof(int), VALUE);

    for (int i : intArr)
    {
        std::cout << i << std::endl;
    }

    std::cout << "If equal => it works" << std::endl;

    memset(voidPtr, VALUE, SIZE * sizeof(int));

    for (int i : intArr)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
