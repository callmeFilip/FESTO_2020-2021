//: C03:PointerArithmetic.cpp
#include <iostream>
using namespace std;

#define P(EX) cout << #EX << ": " << EX << endl;

int main() {

    //long double 
    long double a[10];
    for (int i = 0; i < 10; i++)
    {
        a[i] = i; // Give it index values
    }
    
    long double* ip = a;
    
    P(*ip);
    P(*++ip);
    P(*(ip + 5));
    long double* ip2 = ip + 5;
    P(*ip2);
    P(*(ip2 - 4));
    P(*--ip2);
    P(ip2 - ip); // Yields number of elements


    std::cout << "\n\n\n\n" << std::endl;
    //long
    long longVar[10];
    for (int i = 0; i < 10; i++)
    {
        longVar[i] = i; // Give it index values
    }

    long* long_ptr = longVar;

    P(*long_ptr);
    P(*++long_ptr);
    P(*(long_ptr + 5));
    long* long_ptr2 = long_ptr + 5;
    P(*long_ptr2);
    P(*(long_ptr2 - 4));
    P(*--long_ptr2);
    P(long_ptr2 - long_ptr); // Yields number of elements

    return 0;

} ///:~ 