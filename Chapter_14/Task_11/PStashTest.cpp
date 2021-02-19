//: C13:PStashTest.cpp
//{L} PStash
// Test of pointer Stash
#include "PStash.h"
#include "require.h"
#include "AsteroidStash.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int Asteroid::m_count = 0;

int main()
{
    AsteroidStash astStash;
    // 'new' works with built-in types, too. Note
    // the "pseudo-constructor" syntax:
    for (int i = 0; i < 25; i++)
    {
        astStash.add(new Asteroid());
    }

    for (int j = 0; j < astStash.count(); j++)
    {
        astStash[j]->print();
    }

    // Clean up:
    for (int k = 0; k < astStash.count(); k++)
    {
        delete astStash.remove(k);
    }

    return 0;
} ///:~
