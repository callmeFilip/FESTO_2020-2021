#include "Header.h"

void function1();
void function2();
void function3();

int main()
{
    function1();
    function2();
    function3();
    return 0;
}

// Every function() modify the value of i after it prints it, but because i is independent,
// the outcome of all the functions is still unmodified.
