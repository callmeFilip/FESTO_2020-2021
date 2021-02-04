#include <stdio.h>

typedef struct Bird
{
    int fly;
    int age;
} Bird;

typedef struct Rock
{
    double size;
} Rock;

int main()
{
    Bird *bird;
    Rock *stone;
    void *vPtr = &bird;

    //bird = vPtr; // invalid conversion from 'void*' to 'Bird*' in C++
    // works fine, when compiled in C

    printf("End of main..");

    return 0;
}