#include <iostream>

int function(const int *arr = 0)
{
    static const int *stArr;

    if (arr)
    {
        stArr = arr;
    }

    if (*stArr == -1)
    {
        return *stArr;
    }

    return *stArr++;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1};

    int currentValue = function(arr);

    while (currentValue != -1)
    {
        std::cout << currentValue << std::endl;
        currentValue = function();
    }

    return 0;
}
