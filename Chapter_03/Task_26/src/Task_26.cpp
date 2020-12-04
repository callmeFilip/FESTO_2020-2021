#include <iostream>

#define SIZE 5 // size of array
#define VALUE 0 // value to be set for each element

void setArr(void* n_voidPtr, int n_NumberOfBytes, int n_Value) 
{
    int* ptr_intArr;

    ptr_intArr = static_cast<int*> (n_voidPtr);

    for (int i = 0 ; i < n_NumberOfBytes ; i++) 
    {
        ptr_intArr[i] = n_Value;
    }
}

int main()
{

    int intArr[5];

    void* voidPtr;

    voidPtr = static_cast<void*> (intArr);

    setArr(voidPtr, SIZE, VALUE);

    for (int i : intArr) 
    {
        std::cout << i << std::endl;
    }

    return 0;
    
}
