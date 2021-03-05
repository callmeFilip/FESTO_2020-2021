//: C15:OStackTest.cpp
//{T} OStackTest.cpp
#include "OStack.h"
#include "require.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
// Use multiple inheritance. We want
// both a string and an Object:
class MyString : public string, public Derived
{
public:
    ~MyString()
    {
        cout << "deleting string: " << *this << endl;
    }
    MyString(string s) : string(s) {}
};

int main()
{
    // requireArgs(argc, 1); // File name is argument
    const char *argv = {"dummy.txt"};

    ifstream in(argv);
    assure(in, argv);
    Stack textlines;
    string line;
    // Read file and store lines in the stack:

    while (getline(in, line))
        textlines.push(new MyString(line));
    // Pop some lines from the stack:

    MyString *s;

    for (int i = 0; i < 10; i++)
    {
        if ((s = (MyString *)textlines.pop()) == 0)
            break;
        cout << *s << endl;
        delete s;
    }

    cout << "Letting the destructor do the rest:"
         << endl;

    return 0;
} ///:~
