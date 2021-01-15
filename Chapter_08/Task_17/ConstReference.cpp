//: C08:ConstPointer.cpp
// Constant pointer arg/return
#include <iostream>
void t(int &) {}

void u(const int &cip)
{
    //cip = 2;       // error: assignment of read-only location '* cip'
    int i = cip; // OK -- copies value
    //int &ip2 = cip; // error: binding reference of type 'int&' to 'const int' discards qualifiers
}

const char &v()
{
    // Returns address of static character array:
    return *"result of function v()";
}

const int &w() // const int &w const => error
{
    static int i;
    return i;
}

int main()
{
    int x = 0;
    int &ip = x;
    const int &cip = x;

    t(ip); // OK

    //t(cip); // strange and random errors, but it should give error: binding reference of type 'int&' to 'const int' discards qualifiers

    u(ip);  // OK
    u(cip); // Also OK

    //char &cp = v(); // error: binding reference of type 'char&' to 'const char' discards qualifiers

    const char &ccp = v(); // OK

    //int &ip2 = w(); // error: 'const' qualifiers cannot be applied to 'const int&'

    //const int &const ccip = w(); // OK
    const int &cip2 = w(); // OK
    //w() = 1;                     // error: assignment of read-only location 'w()'
    std::cout << "end" << std::endl;

    return 0;
}