#include "FramisChild.h"
#include <iostream>
using namespace std;

std::ofstream out("Framis.out");

int main()
{
    FramisChild *f[FramisChild::psize];

    try
    {
        for (int i = 0; i < FramisChild::psize; i++)
            f[i] = new FramisChild;
        new FramisChild; // Out of memory
    }

    catch (const bad_alloc &)
    {
        cerr << "Out of memory!" << endl;
    }

    delete f[10];

    f[10] = 0; // Use released memory:

    FramisChild *x = new FramisChild;
    delete x;

    for (int j = 0; j < FramisChild::psize; j++)
    {
        delete f[j]; // Delete f[10] OK
    }

    return 0;
} ///:~
