//: C16:ValueStackTest.cpp
//{L} SelfCounter
#include "ValueStack.h"
#include <iostream>

using namespace std;

int main()
{
    const int COUNT = 15;
    Stack<int> sc;

    for (int i = 0; i < COUNT; i++)
    {
        sc.push(i);
    }

    // OK to peek(), result is a temporary :
    cout << "peek(): " << sc.peek() << endl;
    for (int k = 0; k < COUNT; k++)
    {
        cout << sc.pop() << endl;
    }

    return 0;
} ///:~
