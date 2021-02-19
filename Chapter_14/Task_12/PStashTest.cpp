//: C13:PStashTest.cpp
//{L} PStash
// Test of pointer Stash
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

    for (size_t i = 0; i < 25; i++)
    {
        astStash.push_back(new Asteroid());
    }

    for (size_t j = 0; j < astStash.size(); j++)
    {
        astStash[j]->print();
    }

    // Clean up:
    for (size_t k = 0; k < astStash.size(); k++)
    {
        astStash.pop_back();
    }

    return 0;
} ///:~
