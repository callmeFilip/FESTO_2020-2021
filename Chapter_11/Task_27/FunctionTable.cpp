//: C03:FunctionTable.cpp
// Using an array of pointers to functions
#include <iostream>
#include "FunctionHolder.h"

using namespace std;
// A macro to define dummy functions:
#define DF(N)                                        \
    void N()                                         \
    {                                                \
        cout << "function " #N " called..." << endl; \
    }
DF(a);
DF(b);
DF(c);
DF(d);
DF(e);
DF(f);
DF(g);
void (*func_table[])() = {a, b, c, d, e, f, g};

const int FUNC_TABLE_SIZE = 7;

int main()
{
    FunctionHolder funcStorage;

    for (int i = 0; i < FUNC_TABLE_SIZE; i++)
    {
        funcStorage.add(func_table[i]);
    }

    funcStorage.run();

    std::cout << "Poppint the last 2 elements.." << std::endl;
    funcStorage.remove();
    funcStorage.remove();

    funcStorage.run();

} ///:~