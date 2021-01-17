#include <iostream>
const char *TEXT = "osmina"; //define text with ""
const int TEXTSIZE = 7;      //define text size in int

char *strCopy(const char *charArray)
{
    char *resultCharArray = new char[TEXTSIZE];

    for (int i = 0; i < TEXTSIZE - 1; i++)
    {
        resultCharArray[i] = charArray[i];
    }

    return resultCharArray;
}

int main()
{
    char *firstIteration = strCopy(TEXT);
    char *secondIteration = strCopy(firstIteration);

    //printing the result of second iteration

    std::cout << firstIteration
              << "\n address: "
              << (long)firstIteration
              << std::endl;

    //printing the result of second iteration
    std::cout << secondIteration
              << "\n address: "
              << (long)secondIteration
              << std::endl;

    for (int i = 0; i < TEXTSIZE - 1; i++)
    {
        delete &firstIteration[i];
        delete &secondIteration[i];
    }

    return 0;
}