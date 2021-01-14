#include <string.h>
#include <stdio.h>

int main()
{
    const int hypotenuse = 2;
    const int lCathetus = 2;
    const int rCathetus = 2;

    int array[hypotenuse + lCathetus + rCathetus]; //  = {0} Error

    memset(array, 0, (hypotenuse + lCathetus + rCathetus) * sizeof(int));

    for (size_t i = 0; i < hypotenuse + lCathetus + rCathetus; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}

/*

In C compilation:
If we allocate the memory agregate it will give error due to unknown length at compile-time
If we allocate the memory with memset or for() it will work just as it will in C++
Memory for const int variables will always be allocated. They do not differ from any other
variables. Only difference is that their value cannot be changed after it is assigned.

In C++ compilation:
In C++ const int variables are treated as predefined macros and it will always compile
If the compiler decide then memory allocation will not happen for const ints.
*/
