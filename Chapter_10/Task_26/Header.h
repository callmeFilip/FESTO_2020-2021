#ifndef HEADER_H
#define HEADER_H
#include <iostream>

class Fathometer
{
private:
    static double depth;
    static long count;

public:
    static void print()
    {
        std::cout << "Depth: " << depth << "\nCount: " << count << std::endl;
    }
};

#endif