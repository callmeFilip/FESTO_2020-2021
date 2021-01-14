#include "stdio.h"
const int a = 5; //should not allocate memory in C++ but should do in C

const int x = a * a; //should not allocate memory in C++ but should do in C

int main()
{
    printf("%d\n", x);
    return 0;
}
