#include <iostream>
#define TEXTSIZE 8    //define text size in int
#define TEXT "osmina" //define text with ""

char *strCopy(char *charArray, int size)
{
    char *resultCharArray = new char[size];

    for (int i = 0; i < size; i++)
    {
        resultCharArray[i] = charArray[i];
    }

    return resultCharArray;
}

int main()
{
    char *firstIteration = strCopy(TEXT, TEXTSIZE);
    char *secondIteration = strCopy(firstIteration, TEXTSIZE);

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

    delete firstIteration, secondIteration;

    return 0;
}