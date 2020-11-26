//: C03:FunctionTable.cpp
// Using an array of pointers to functions
#include <iostream>
#include <string>
using namespace std;

// A macro to define dummy functions:
#define DF(N) std::string N() { \
cout << "function " #N " called..." << endl; \
return #N;\
}

DF(a); DF(b); DF(c); DF(d); DF(e); DF(f); DF(g);

std::string (*func_table[])() = { a, b, c, d, e, f, g };

int main()
{

    while (1) 
    {
        cout << "press a key from 'a' to 'g' "
            "or q to quit" << endl;
        char c, cr;
        cin.get(c); cin.get(cr); // second one for CR
        if (c == 'q') 
        {
            break; // ... out of while(1)
        }

        if (c < 'a' || c > 'g') 
        {
            continue;
        }

        std::cout << "::" << (*func_table[c - 'a'])() << "::" << std::endl;

    }
    return 0;

} ///:~ 
