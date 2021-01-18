#include <iostream>
const char *TEXT = "osmina"; //define text with ""

inline int findLength(const char *charArray)
{
    int wordSize = 0;

    while (charArray[wordSize] != '\0')
    {
        wordSize++;
    }
    wordSize++;

    return wordSize;
}

char *strCopy(const char *charArray)
{

    static const int SIZE = findLength(charArray);

    char *resultCharArray = new char[SIZE];

    for (int i = 0; i < SIZE; i++)
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

    delete[] firstIteration;
    delete[] secondIteration;

    return 0;
}