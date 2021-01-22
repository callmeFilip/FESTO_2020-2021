#include <iostream>
#include <string>

const int ARRAYSIZE = 6;

int main()
{
    std::string strArr[ARRAYSIZE];

    for (int i = 0; i < ARRAYSIZE; i++)
    {
        strArr[i] = "number";
        //strArr[i] += i + 1;
        std::cout << strArr[i] << std::endl;
    }

    return 0;
}
