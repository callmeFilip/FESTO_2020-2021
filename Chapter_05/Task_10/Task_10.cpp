//: C04:CppLibTest.cpp
//{L} CppLib
// Test of C++ library
#include "Stash.h"
#include <fstream>
#include <iostream>
#include <string>
#include "Hen.h"
using namespace std;

void Hen::display()
{
    std::cout << "Hen" << std::endl;
}

void Hen::Nest::display()
{
    std::cout << "Nest" << std::endl;
}

void Hen::Nest::Egg::display()
{
    std::cout << "Egg" << std::endl;
}
int main()
{
    Stash intStash;
    intStash.initialize(sizeof(Hen));
    for (int i = 0; i < 100; i++)
        intStash.add(new Hen);
    for (int j = 0; j < intStash.count(); j++)
    {
        cout << "intStash.fetch(" << j << ") = ";
        (*(Hen *)intStash.fetch(j)).display();
    }

    // Holds 80-character strings:
    intStash.cleanup();
} ///:~
