#include <iostream>

int main()
{
    int a = 10;
    double b = 1.0;
    // int &uninitref; // error: declared as reference but not initialized

    int &changeref = a;
    changeref = b; // this changes the value of a, but changeref cannot be reassigned

    std::cout << changeref << std::endl;

    // int &nullref = 0; // error: invalid initialization

    return 0;
}
